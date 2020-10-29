//
//  main.cpp
//  Glory_C++
//
//  Created by Glory on 2020/10/29.
//

//소유는 has a 관계로 표현하는 객체의 소유와 관련된 특별한 종류의 연관이다.
//소유 관계에서는 한 객체가 소유자이고, 다른 객체는 소유대상이다.
//사람은 생일을 가지고 있으니 Person 클래스와 Date 클래스를 만든다.
//Date 클래스는 독립적이지만 Person 클래스에서 생일을 표현할때에 Date를 사용하도록 한다.

// Person 클래스를 사용하는 애플리케이션 파일

#include "person.h"

int main()
{
  // 인스턴스화
  Date date1(5, 6, 1980);
  Person person1(111111456, date1);
  Date  date2(4, 23, 1978);
  Person person2(345332446, date2);
  // 출력
  person1.print();
  person2.print();
  return 0;
}

