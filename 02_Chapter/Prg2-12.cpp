//
//  Prg2-10.cpp
//  Glory_C++
//
//  Created by Glory on 2020/09/29.
//

/*
원의 반지름을 기반으로 둘레와 넓이를 구하는 프로그램
*/

#include <iostream>
using namespace std;

int main()
{
  // 상수 선언
  const double PI = 3.14159;
  // 변수 3개 선언
  double radius;
  double perimeter;
  double area;
  // 반지름 입력받기
  cout << "원의 반지름 입력: ";
  cin >> radius;
  // 둘레와 면적을 계산하고 변수에 저장
  perimeter = 2 * PI * radius; // 2는 상수
  area = PI * PI * radius;
  // 반지름, 둘레, 면적 출력
  cout << "반지름: " << radius << endl;
  cout << "둘레: " << perimeter << endl;
  cout << "면적: " << area;
  return 0;
}
