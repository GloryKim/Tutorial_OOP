//
//  Prg3-6.cpp
//  Glory_C++
//
//  Created by Glory on 2020/10/15.
//

/*
단순 할당 연산자 확인하는 프로그램
*/

#include <iostream>
using namespace std;

int main()
{
  // 변수 선언
  int x;
  int y;
  // 첫 번째 할당 연산자
  cout << "할당 연산자 리턴값: " <<(x = 14) << endl;
  cout << "변수 x의 값: " << x << endl;
  // 두 번째 할당 연산자
  cout << "할당 연산자 리턴값: " <<(y = -27) << endl;
  cout << "변수 y의 값: " << y;
  return 0;
}
