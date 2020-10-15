//
//  Prg3-9.cpp
//  Glory_C++
//
//  Created by Glory on 2020/10/15.
//

/*
여러 자료형이 사용된 표현식의 자료형 변환방법
*/

#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
  // 선언
  int x = 1234;
  long y = 1405;
  double z = 14.56;
  // 표현식 x + y의 자료형은 롱
  cout << "x + y의 자료형: " << typeid(x + y).name() << endl;
  cout << "x + y의 값: " << x + y << endl << endl;
  // 표현식 x + y + z의 자료형은 더블
  cout << "x + y + z의 자료형: " << typeid(x + y + z).name() << endl;
  cout << "x + y + z의 값: " << x + y + z << endl;
  return 0;
}
