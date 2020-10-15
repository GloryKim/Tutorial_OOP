//
//  Prg3-10.cpp
//  Glory_C++
//
//  Created by Glory on 2020/10/15.
//

/*
여러 자료형 표현식의 자료형 변환 확인하는 프로그램
*/

#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
  // 변수 선언
  int x;
  double y;
  // 변수 할당(초기화)
  x = 3.67;
  y = 30;
  // x의 자료형과 값 확인
  cout << "x = 3.67의 자료형: " << typeid(x = 3.67).name() << endl;
  cout << "할당 후 x값: " << x << endl << endl;
  // y의 자료형과 값 확인
  cout << "y = 30의 자료형: " << typeid(y = 30).name() << endl;
  cout << "할당 후 y값: " << y << endl;
  return 0;
}
