#include <iostream>
#include <string>	/* string클래스가 정의된 파일 */

using namespace std;	/* string 클래스가 선언된 namespace */

void main(void) {
	string s = "abcde가나다라마";
	string cpy = s;	/* 깊은 복사 */
	
	/* append() */
	cpy.append("abcde");
	
	cout << "s = " << s << '\n' << "cpy = " << cpy << '\n';


}
