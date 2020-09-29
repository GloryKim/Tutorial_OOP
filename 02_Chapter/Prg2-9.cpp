//
//  Prg2-9.cpp
//  Glory_C++
//
//  Created by Glory on 2020/09/29.
//

/*
Char 자료형의 변수를 선언하고 초기화까지 하는 프로그램
*/

#include <iostream>
using namespace std;

int main()
{
  // char 자료형의 변수를 선언하고 초기화
  char first = 'A';
  char second = 15;
  char third = 'B';
  char fourth = '6';
  // 값 출력
  cout << "first의 값: " << first << endl;
  cout << "second의 값: " << second << endl;
  cout << "third의 값: " << third << endl;
  cout << "fourth의 값: " << fourth << endl;

  // 다른 것으로
  char first_A = 'A';
  char second_A = 95;
  char third_A = 'B';
  char fourth_A = '95'; // 오류 Implicit conversion from 'int' to 'char' changes value from 14645 to 53
  // 값 출력
  cout << "first의 값: " << first_A << endl;
  cout << "second의 값: " << second_A << endl;
  cout << "third의 값: " << third_A << endl;
  cout << "fourth의 값: " << fourth_A;
  return 0;
}
