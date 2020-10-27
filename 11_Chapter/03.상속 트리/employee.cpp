//
//  employee.cpp
//  Glory_C++
//
//  Created by Glory on 2020/10/27.
//

//Employee 클래스의 구현 파일                                *

#include "employee.h"

// Employee 클래스의 생성자
Employee::Employee(string nm, double sa)
:Person(nm), salary(sa) 
{
}
// Employee 클래스의 소멸자    
Employee::~Employee()
{
}
// print 멤버 함수의 정의
void Employee::print() const
{
  Person::print();
  cout << "급여: " << salary << endl;
}