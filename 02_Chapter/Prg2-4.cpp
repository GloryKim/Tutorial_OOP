//
//  Prg2-4.cpp
//  Glory_C++
//
//  Created by Glory on 2020/09/29.
//

/*
동전과 지폐들의 갯수를 입력하여 총 금액을 출력하는 프로그램
*/

#include <iostream>
using namespace std;

int main()
{
  // 상수 정의
  const unsigned int Ten1_Value = 10;
  const unsigned int Ten5_Value = 50;
  const unsigned int H1_Value = 100;
  const unsigned int H5_Value = 500;
  const unsigned int T1_Value = 1000;
  const unsigned int T5_Value = 5000;
  const unsigned int T10_Value = 10000;
  const unsigned int T50_Value = 50000;

  // 변수 정의(각 코인의 수)
  unsigned int Ten1_Coin;
  unsigned int Ten5_Coin;
  unsigned int H1_Coin;
  unsigned int H5_Coin;
  unsigned int T1_Coin;
  unsigned int T5_Coin;
  unsigned int T10_Coin;
  unsigned int T50_Coin;

  // 전체 값을 나타내는 변수 선언
  unsigned long totalValue;

  // 코인 입력받기
  cout << "10원의 수: ";
  cin >> Ten1_Coin;
  cout << "50원의 수: ";
  cin >> Ten5_Coin;
  cout << "100원의 수: ";
  cin >> H1_Coin;
  cout << "500원의 수: ";
  cin >> H5_Coin;
  cout << "1000원의 수: ";
  cin >> T1_Coin;
  cout << "5000원의 수: ";
  cin >> T5_Coin;
  cout << "10000원의 수: ";
  cin >> T10_Coin;
  cout << "50000원의 수: ";
  cin >> T50_Coin;

  // 전체 금액 계산
  totalValue = Ten1_Value * Ten1_Coin + Ten5_Value * Ten5_Coin + H1_Value * H1_Coin + H5_Value * H5_Coin + T1_Value * T1_Coin + T5_Value * T5_Coin + T10_Value * T10_Coin + T50_Value * T50_Coin;
  // 결과 출력
  cout << "전체 값은 " << totalValue << "원입니다.";

  return 0;
}
