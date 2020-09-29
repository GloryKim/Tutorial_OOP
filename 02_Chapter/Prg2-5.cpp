//
//  Prg2-5.cpp
//  Glory_C++
//
//  Created by Glory on 2020/09/29.
//

/*
2회 거래 후 총액을 구하는 프로그램
*/

#include <iostream>
using namespace std;

int main()
{
  // 변수 선언
  int balance = 0;
  int transaction;
  // 첫 번째 거래 후에 지출 내역 생성
  cout << "첫 번째 지불 금액 입력 (단위 원) :";
  cin >> transaction;
  balance = balance + transaction;
  // 두 번째 거래 후에 지출 내역 저장
  cout << "두 번째 지불 금액 입력 (단위 원) :";
  cin >> transaction;
  balance = balance + transaction;
  // 최종 총 액수 출력
  cout << "결제의 최종 총액은 " << balance << "원입니다.";
  return 0;
}
