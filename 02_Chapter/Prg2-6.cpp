//
//  Prg2-6.cpp
//  Glory_C++
//
//  Created by Glory on 2020/09/29.
//

/*
short, int, long int의 자료형 크기를 확인하는 프로그램
*/

#include <iostream>
using namespace std;

int main()
{
  cout << "short int의 자료형 크기는 " << sizeof(short int) << "Bite입니다." << endl;
  cout << "int의 자료형 크기는 " << sizeof(int) << "Bite입니다." << endl;
  cout << "long int의 자료형 크기는 " << sizeof(long int) << "Bite입니다." << endl;
  return 0;
}
