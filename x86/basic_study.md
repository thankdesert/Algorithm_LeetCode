-레지스터-
x86 프로세서는 8개의 32비트 범용 레지스터를 가짐.
관례상 용도가 예약되어 있는 두 레지스터 : ESP(스택 포인터), EBP(베이스 포인터)

어셈블리어에서의 이름은 대소문자를 구분하지 않음.(가령 EAX, eax는 동일한 레지스터)


-정적 데이터 영역(글로벌 변수)-
x86어셈블리는 특별한 어셈블리 지정자를 사용하여 정적 데이터 영역을 선언할 수 있음.
데이터 선언에는 반드시 .DATA 지정자가 선행되어야 함.
.DATA 지정자 이후 아래의 지정자를 사용하여 선언함.
DB - Byte
DW - 2Byte data
DD - 4Byte data

; example

.DATA
var  DB 65    ; var의 위치에 65의 값을 가지는 1바이트를 할당
var2 DB ?     ; var2의 위치에 초기화되지 않은 값을 가지는 1바이트를 할당.
     DB 10    ; 레이블 없이, 10의 값을 가지는 1바이트를 할당
X    DW ?     ; X의 위치에 초기화되지 않은 값을 가지는 2바이트를 할당
Y    DD 30000 ; Y의 위치에 30000의 값을 가지는 4바이트를 할당.

배열의 선언은 데이터를 나열하거나 DUP 지정자를 사용하여 선언함.
어셈블리에서는 인덱스를 통한 접근이 불가능하고, 그저 연속된 메모리라는 성질을 이용하여
위치를 지정하여 접근 가능함.

; example

.DATA
Z     DD 1, 2, 3    ; Z의 위치에서부터 시작하는, 연속된 4바이트의 공간 3개를 선언하여, 각각 1, 2, 3으로 초기화 함.
                    ; Z + 8의 위치는 3의 값을 가짐.
bytes DB 10 DUP(?)  ; bytes의 위치에서부터 시작하는, 연속된 1바이트의 공간 10개를 선언하며, 값은 초기화하지 않음.
arr   DD 100 DUP(0) ; arr의 위치에서부터 시작하는, 연속된 4바이트의 공간 100개를 선언하며, 값은 모두 0으로 초기화 함.
str   DB 'hello', 0 ; str의 위치에서부터 시작하는 연속된 6바이트의 공간을 선언하며, 그 값은 ASCII 문자 값의 "hello"와 널 바이트(0)로 초기화 함.


-메모리 주소 지정-

x86 호환 프로세서는 2^32 바이트의 메모리까지 수용 가능함. 메모리 주소의 길이는 32비트임.
어셈블리의 레이블은 어셈블러에 의해, 메모리의 특정 주소를 명시하는 32비트 크기의 주소로 치환됨.
2개의 레지스터를 사용하여 메모리 값을 계산할 수도 있음.

; example
mov eax, [ebx]         ; 주소 EBX에 저장되어 있는 4바이트를 주소 EAX로 옮김.
mov [var], ebx         ; 주소 EBX에 저장되어 있는 4바이트를 주소 var로 옮김.
mov eax, [esi-4]       ; 주소 ESI + (-4)에 저장되어 있는 4바이트를 EAX로 옮김.
mov [esi+eax], cl      ; 주소 CL에 저장되어 있는 내용물을 주소 ESI + EAX로 옮김
mov edx, [esi+4*ebx]   ; 주소 ESI + 4 * EBX에 저장되어 있는 4바이트를 주소 EDX로 올김


;invalid address calculations
move eax, [ebx - ecx]       ; 레지스터 값은 더하기만 가능
mov [eax + esi + edi], ebx  ; 레지스터 계산은 최대 2개만 가능



- 사이즈 지정자 -
기본적으로 어셈블러는 레지스터 피연산자의 사이즈에 따라, 메모리 영역의 사이즈를 추측할 수 있음.
가령 32비트 레지스터를 로딩하면, 어셈블러는 현재 참조하는 메모리 영역이 4바이트 크기라고 추측함.

하지만 경우에 따라선 참조 중인 메모리 영역의 사이즈가 불분명한 경우가 있음. 가령,
mov [ebx], 2
의 경우, 값 2를 EBX로 옮기라는 것인데, 2가 몇 바이트인지 불분명함.
그러므로 사이즈 지정자
BYTE PTR  (1 바이트),
WORD PTR  (2 바이트),
DWORD PTR을(4 바이트) 사용해야 함.

; example
mov BYTE PTR [ebx], 2
mov WORD PTR [ebx], 2
mov DWORD PTR [ebx], 2



-명령어-
기계어는 일반적으로 다음 세 가지 카테고리로 나뉘어 짐.
1)데이터 이동
2)산술/논리 연산
3)제어 흐름
주로 다음과 같은 표기법을 사용함
<reg32> 모든 32비트 레지스터(EAX, EBX, ECX, EDX, ESI, EDI, ESP, EBP)
<reg16> 모든 16비트 레지스터 (AX, BX, CX, DX)
<reg8> 모든 8비트 레지스터 (AH, BH, CH, DH, AL, BL, CL, DL)
<reg> 모든 레지스터
<mem> 메모리 주소
<con32> 모든 32비트 상수
<con16> 모든 16비트 상수
<con8> 모든 8비트 상수
<con> 모든 상수


[카테고리1 데이터 이동]

mov : Move (Opcodes: 88, 89, 8A, 8B, 8C, 8E, ...)
두 번째 피연산자가 참조하는(레지스터든, 메모리든, 상수든) 데이터를 복사하여, 첫 번째 피연산자가 참조하는(레지스터 또는 메모리) 주소에 붙여넣음.
레지스터간의 이동은 가능하지만, 메모리간 1:1의 직접적인 이동은 불가능하므로 무조건 레지스터를 경유해야만 함.

;Syntax
mov <reg>, <reg>
mov <reg>, <mem>
mov <mem>, <reg>
mov <reg>, <const>
mov <mem>, <const>

;Examples
mov EAX, EBX  ; EBX가 참조하는 데이터를 복사하여 EAX에 붙여넣음(레지스터 -> 레지스터, 4바이트)
mov byte ptr [var], 5 ; 5의 상수를 var이 참조하는 주소에 1바이트의 크기를 지정하여 붙여넣음. (상수 -> 메모리)


push : Push stack (Opcodes: FF, 89, 8A, 8B, 8C, 8E, ...)
피연산자를 하드웨어가 지원하는 스택에 푸쉬함. 스택은 상위 어드레스로부터 시작해서 하위 어드레스로 확장되어 감.
푸쉬가 이루어지면 ESP는 4만큼 감소되며, 푸쉬당한 피연산자가 32비트 크기의 ESP의 주소에 저장됨.
ESP는 스택 포인터로서, 푸쉬 연산에 의해 감소됨.

;Syntax
push <reg32>
push <mem>
push <con32>

;Examples
push eax   ; EAX의 내용을 푸쉬함
push [var] ; var이 참조하는 내용을 푸쉬함


pop : pop stack
하드웨어가 지원하는 스택의 탑을 피연산자에(레지스터 또는 메모리) 팝 하고, 처음 메모리 위치(SP)에 있던 4바이트를 특정 레지스터나 메모리에 옮긴 뒤, SP를 4 증가시킴.

;Syntax
pop <reg32>
pop <mem>

;Examples
pop edi   : 스택의 탑을 팝해서 EDI에 저장
pop [ebx] ; 스택의 탑을 팝해서 메모리 주소 ebx에 저장.


lea : 주소를 로딩함
두 번째 피연산자가 가리키는 주소를 첫 번째 피연산자인 레지스터에 저장함.
메모리의 내용을 로딩하는 게 아니라, 그저 주소를 레지스터에 저장하는 것임.
즉, 메모리의 포인터를 획득하는 데 유용한 연산.

;Sysntax
lead <reg32>, <mem>

;Examples
lea edi,  [ebx + 4 * esi] ; 주소 ebx + 4 * esi을 edi에 저장함
lea eax,  [var] ; 주소 var을 eax에 저장함
lead eax, [val] ; 주소 val을 eax에 저장함


[카테고리 2  산술/논리 연산]

add : 정수를 더함
두 개의 피연산자를 더하여 첫 번째 피연산자에 저장함.
메모리 피연산자간의 연산은 불가능함.

;Syntax
add <reg>, <reg>
add <reg>, <mem>
add <mem>, <reg>
add <reg>, <con>
add <mem>, <con>

;Examples
add eax, 10             ; eax <-  eax + 10
add BYTE PTR [var], 10  ; var <-  *var + 10


sub : 정수를 뺌
첫 번째 피연산자로부터 두 번째 피연산자를 빼서 첫 번째 피연산자에 저장함

;Syntax
sub <reg>, <reg>
sub <reg>, <mem>
sub <mem>, <reg>
sub <reg>, <con>
sub <mem>, <con>

;Examples
sub al, ah   ; al <- al - ah
sub eax, 216 ; eax <- eax - 216


inc, dec : Increment, Decrement
피연산자가 참조하는 값을 1만큼 증감시킴.

;Syntax
inc <reg>
inc <mem>
dec <reg>
dec <mem>

;Examples
dec eax            ; subtract one from the contents of EAX
inc DWORD PTR[var] ;add one to the 32-bit integer stored at location var


imul : 정수를 곱함
2 개의 포맷이 존재함(두 개의 피연산자 / 세 개의 피연산 자).
두 개의 피연산자의 경우 두 개를 곱하여 첫 번째 피연산자에 저장하는 것이며, 첫 번째 피연산자는 반드시 레지스터여야 함.
세 개의 피연산자의 경우 두 번째 피연산자와 세 번째 피연산자를 곱하여 첫 번째 피연산자에 저장하는 것이며,
첫 번재 피연산자는 반드시 레지스터야만 함. 또한 세 번째 피연산자는 상수만 사용 가능.

;Syntax
imul <reg32>, <reg32>
imul <reg32>, <mem>
imul <reg32>, <reg32>, <con>
imul <reg32>, <mem>, <con>

;Examples
imul eax, [var]   ; eax <- eax * (*var)
imul esi, edi, 25 ; esi <- edi * 25


idiv : 정수를 나눔
64비트 정수 EDX:EAX(EDX의 MSB 4바이트와, LSB 4바이트)를 피연산자로 나눠서 몫은 EAX에 저장하고 나머지는 EDX에 남겨둠.

;Syntax
idiv <reg32>
idiv <mem>

;Examples
idiv ebx             ;
idiv DWORD PTR [var] ;


and, or, xor : Bitwise logical and, or and exclusive or
두 개의 피연산자를 논리 연산하여 그 결과를 첫 번째 피연산자에 저장함.

;Syntax
and <reg>, <reg>
and <reg>, <mem>
and <mem>, <reg>
and <reg>, <con>
and <mem>, <con>

or <reg>, <reg>
or <reg>, <mem>
or <mem>, <reg>
or <reg>, <con>
or <mem>, <con>

xor <reg>, <reg>
xor <reg>, <mem>
xor <mem>, <reg>
xor <reg>, <con>
xor <mem>, <con>


;Examples
and eax, 0fH  ; 마지막 4비트를 제외한 EAX의 모든 비트를 0으로 만듬
xor edx, edx  ; edx의 모든 비트를 0으로 만듬.



not : Bitwise Logical Not
모든 비트에 대해 not연산을 수행(플립 함)

;Syntax
not <reg>
not <mem>

;Example
not BYTE PTR [var] ; negate allbits in the byte at the memory location var.

neg : negate
피연산자에 대한 2의 보수 연산을 수행함

;Syntax
neg <reg>
neg <mem>

;Examples
neg eax ; eax <- -eax


shl, shr : Shift Left, Shift Right
첫 번째 피연산자를 두 번째 피연산자 만큼 좌/우 비트 이동시키고, 빈 비트는 0으로 채움.
두 번째 피연산자로는 8비트 상수나 CL레지스터를 사용할 수 있음.
비트 이동은 최대 31까지 가능하며, 그 이상의 수치에 대해선 32로 모듈로 연산 후 이동시킴.

;Syntax
shl <reg>, <con8>
shl <mem>, <con8>
shl <reg>, <cl>,
shl <mem>, <cl>

shr <reg>, <con8>
shr <mem>, <con8>
shr <reg>, <cl>,
shr <mem>, <cl>

;Examples
shl eax, 1; eax에 저장된 값을 좌측 쉬프트 1회 함(MSB가 0이라면 eax를 2배 한 결과).
shr ebx, d; ebx에 저장된 값을 (2 ^ cl)로 나눔




[카테고리 3  제어 흐름 명령]
x86프로세서는 다음에 시작될 명령의 메모리상의 주소(32비트)를 가리키는 명령어 포인터(IP 레지스턴)를 보유함.
보통 명령어를 실행한 뒤엔 명령어 포인터를 증가시켜 다음에 실행될 명령을 가리키게 함.
IP 레지스터는 직접적으로 조작할 수 없고, 제어 흐름 명령을 통해 암묵적으로 수정 가능함.

프로그래머는 <lable> 표기를 통해 프로그램 텍스트 내의 공간들을 명시할 수 있고, 레이블은 이름 뒤에 콜론을 붙여서 x86 어셈블리 코드의 어디에든 삽입될 수 있음.

;Example
	mov esi, [ebp + 8]
begin:  xor ecx, ecx       ;라벨 시작. 코드의 어디에서건 라벨의 이름을 이용하여 이 명령의 메모리상에서의 위치(32비트 주소값)를 가리킬 수 있음
	mov eax, [esi]


jmp : jump
프로그램의 제어 흐름을, 피연산자가 가리키는 메모리상의 주소로 옮김

;Syntax
jmp <label>

;Example
jmp begin ; 라벨 이름 begin이 가리키는 메모리 상의 명령어 주소로 제어 흐름을 옮김


jcondition : 조건부 jump
machine status word라는 특수한 레지스터가 저장하고 있는, 일련의 조건에 기초하여 조건부 점프함.
machine status word의 내용에는 마지막으로 실행되었던 산술 연산이 포함됨.
예를 들어, 이 워드의 비트 중 하나는, 마지막 산술 연산의 결과가 0이었던가 아닌가를 가리킴. 또 다른 비트는 결과가 음수였는지 가리킴.
이러한 일련의 조건들에 기초하여, 다수의 조건부 점프가 가능함.
예를 들어 jz 명령은, 마지막 산술 연산의 결과가 0이었을 경우 피연산자(라벨 명)으로 점프함.
조건을 만족하지 않았을 경우엔 그저 시퀀스 상의 다음 명령을 실행함.

;Syntax
je  <label> ;jump when equl
jne <label> ;jump when not equal
jz  <label> ;jump when last result was zero
jg  <label> ;jump when greater than
jge <label> ;jump when greater than or equal to
jl  <lable> ;jump when less than
jle <lable> ;jump when less than or equal to

;Example
cmp eax, ebx
jle done ; eax가 ebx이하인 경우 done 레이블로 점프함. 초과인 경우엔 시퀀스 상 다음 명령을 실행함.


cmp : Compare
두 피연산자에 저장된 값을 비교하여, machine status word의 값을 적절히 설정함.
이 명령은 뺄셈의 결과값이 버려진다는 점만 제외하면 sub 명령어와 동일함.

;Syntax
cmp <reg>, <reg>
cmp <reg>, <mem>
cmp <mem>, <reg>
cmp <reg>, <con>

;Example
cmp DWORD PTR [var], 10
jeq loop
