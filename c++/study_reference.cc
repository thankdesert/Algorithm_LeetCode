#include <iostream>

/*
 * 목적 : 코드의 간결화를 위한 도구.
 * 정의 : 참조자(references)은 기존에 존재하던 변수를 '참조'하는 변수(varialbe)이다.
 * 생성 : 주소 연산자(&)를 사용해 생성한다.
 * ex)
 *		string str		= "Hello";
 *		string &rstr	= str;
 *		cout << rstr;	// Hello
 * @주의 : 상수의 참조는 상수 레퍼런스만이 가능
 * @주의 : 레퍼런스는 특별한 경우가 아닌 이상 메모리 주소값을 가지지 않음
 *			그러므로 배열에 '격납'은 불가능.
 * @주의 : 래퍼런스의 참조 대상의 수명이 먼저 종료되는 경우를
 *			댕글링 래퍼런스(Dangling reference)라고 함.
 *			->단, 상수 래퍼런스의 경우 참조 대상의 수명이 소멸되지 않음.
 */

void main(void) {
	int tmp = 2;
	int& rtmp = tmp;	/* 선언과 동시에 초기화(필수) */

	rtmp = 6;

	std::cout << "tmp : " << tmp << std::endl;
	std::cout << "rtmp : " << rtmp << std::endl;

	int another_tmp = 4;

	/* 참조의 대상은 변경할 수 없음 */
	rtmp = another_tmp;	/* tmp = another_tmp */
}
