//
//  Prg3-2.cpp
//  Glory_C++
//
//  Created by Glory on 2020/10/14.
//

/*
사칙 연산시 괄호 우선순위를 보여주는 프로그램
*/

#include <iostream>
using namespace std;

int main()
{
  // 변수 선언을 하고 초기화를 해준다.
  int x = 10;
  // * 표현식
  cout << "괄호가 있는 경우의 값: " <<(x + 2) *  5 << endl;
  cout << "괄호가 없는 경우의 값: " << x + 2 * 5 << endl << endl;
  // / 표현식
  cout << "괄호가 있는 경우의 값: " << 20 /(x + 10) << endl;
  cout << "괄호가 없는 경우의 값: " << 20 /  x + 10;
  return 0;
}
