//
//  person.cpp
//  Glory_C++
//
//  Created by Glory on 2020/10/23.
//

#include "person.h"

// 기본 생성자
Person::Person()
: identity(0)
{
}
// 복사 생성자
Person::Person(const Person& person)
: identity(person.identity)
{
}
// 매개변수가 있는 생성자  
Person::Person(long id)
: identity(id)
{
  assert(identity >= 1000 && identity <= 9999);
}
// 소멸자      
Person::~Person()
{
}
// 접근자 멤버 함수
void Person::print() const
{
  cout << "고유번호: " << identity << endl;
}
