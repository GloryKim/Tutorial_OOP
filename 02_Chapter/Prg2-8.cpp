//
//  Prg2-8.cpp
//  Glory_C++
//
//  Created by Glory on 2020/09/29.
//

/*
Literal 값을 단독으로 사용하는 프로그램
*/

#include <iostream>
using namespace std;

int main()
{
  // 변수 선언
  int x;
  unsigned long int y;
  // 할당
  x = 146;
  y = -1457;
  // 출력
  cout << x << endl;
  cout << y << endl;
  cout << 123 << endl;
  cout << 14327L << endl;
  return 0;
}

/*
 char               1    -128 ~ 127

 signed char        1    (char와 동일)

 unsigned char      1    0 ~ 255

 ​

 short              2     –32,768 ~ 32,767

 short int          2    (short와 동일)

 unsigned short     2    0 ~ 65,535

 unsigned short int 2   (unsigned short와 동일)

 ​

 int                4    –2,147,483,648 ~ 2,147,483,647

 signed             4    (int와 동일)

 signed int         4    (int와 동일)

 unsigned int       4    0 ~ 4,294,967,295

 ​

 long               4     –2,147,483,648 ~ 2,147,483,647

 long int           4   (long과 동일)

 signed long int    4    (long과 동일)

 unsigned long      4   0 ~ 4,294,967,295

 ​

 long long          8      – 9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807

 long long int      8    (long long과 동일)

 signed long long   8    (long long과 동일)

 signed long long int 8    (long long과 동일)

 unsigned long long 8    0 ~ 18,446,744,073,709,551,615

 ​

 실수형 ==

 float 4 3.4E+/-38(7개의 자릿수)

 double 8 1.7E+/-308(15개의 자릿수)

 long double 8 double과 동일
 
 [출처] (C언어) 정수 계열 자료형 정리, unsigned long long int|작성자 jwcwjung
 
 */
