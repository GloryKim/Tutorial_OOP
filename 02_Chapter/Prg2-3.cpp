//
//  Prg2-3.cpp
//  Glory_C++
//
//  Created by Glory on 2020/09/25.
//

/*
입력받은 숫자를 두개를 더해서 출력을 하는 코드
*/
#include <iostream>
using namespace std;

int main()
{
  // 선언
  int num_1;
  int num_2;
  int sum;

  // 입력받기
  cout << "첫 번째 숫자 입력: ";
  cin >> num_1;
  cout << "두 번째 숫자 입력: ";
  cin >> num_2;

  // 계산후 결과 저장
  sum = num_1 + num_2;

  // 출력
  cout << "총 합: " << sum;
  return 0;
}
