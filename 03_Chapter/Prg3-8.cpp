//
//  Prg3-8.cpp
//  Glory_C++
//
//  Created by Glory on 2020/10/15.
//

/*
할당 표현식의 예시가 있는 프로그램
*/

#include <iostream>
using namespace std;

int main()
{
  // 5개의 변수 선언과 초기화
  int x = 10;
  int y = 20;
  int z = 30;
  int t = 40;
  int u = 50;
  // 복합 할당 사용
  x += 2;
  y -= 3;
  z *= 4;
  t /= 5;
  u %= 6;
  // 결과
  cout << "x의 값: " << x << endl;
  cout << "y의 값: " << y << endl;
  cout << "z의 값: " << z << endl;
  cout << "t의 값: " << t << endl;
  cout << "u의 값: " << u;
  return 0;
}
