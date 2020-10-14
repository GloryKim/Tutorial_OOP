//
//  Prg3-3.cpp
//  Glory_C++
//
//  Created by Glory on 2020/10/14.
//

/*
양수/음수연산자 표현 표현식 예시 프로그램
*/

#include <iostream>
using namespace std;

int main()
{
  // 변수 선언 및 초기화
  int x = 2;
  int y = -210;
  // 변수 x에 양수 음수 연산자 적용
  cout << "x에 양수 연산자 적용 값: " << +x << endl;
  cout << "x에 음수 연산자 적용 값: " << -x << endl;
  // 변수 y에 양수 음수 연산자 적용
  cout << "y에 양수 연산자 적용 값: " << +y << endl;
  cout << "y에 음수 연산자 적용 값: " << -y;
  return 0;
}
