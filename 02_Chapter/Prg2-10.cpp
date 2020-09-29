//
//  Prg2-10.cpp
//  Glory_C++
//
//  Created by Glory on 2020/09/29.
//

/*
이스케이프 문자를 이용하는 프로그램
\ <- 백 슬레쉬를 사용하는 방법에 관한 예시
*/

#include <iostream>
using namespace std;

int main()
{
  cout << "Hello\n";
  cout << "He\t llow." << endl;
  cout << "Hello Hello  \bHello." << endl; // 중간에 2칸 띄어쓰기
  cout << "Hello\rHello Hello Hello." << endl;
  cout << "Hello Hello Hello Hello Hello\'." << endl;
  cout << "Hello Hello Hello Hello Hello\"." << endl;
  cout << "Hello Hello Hello Hello Hello Hello Hello \\.";
  return 0;
}
