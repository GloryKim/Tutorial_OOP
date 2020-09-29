//
//  Prg2-13.cpp
//  Glory_C++
//
//  Created by Glory on 2020/09/29.
//

/*
이름+이니셜+성 => 출력하는 프로그램
*/

#include <iostream>
#include <string> // string 클래스를 사용하려면 읽어 들여야 함
using namespace std;

int main()
{
  // 변수 선언
  string first;
  string initial;
  string last;
  string space = " ";
  string dot = ".";
  string fullName;
  // 이름, 이니셜, 성 입력받기
  cout << "이름(first name) 입력하기: ";
  cin >> first;
  cout << "이니셜(initial) 입력하기: ";
  cin >> initial;
  cout << "성(last name) 입력하기: ";
  cin >> last;
  // 결합 연산자를 사용해서 문자열 연결
  fullName = first + space + initial + dot + space + last;
  // 전체 이름 출력
  cout << "전체 이름(full name): " << fullName;
  return 0;
}
