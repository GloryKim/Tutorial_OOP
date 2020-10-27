//
//  main.cpp
//  Glory_C++
//
//  Created by Glory on 2020/10/27.
//

/*
상속관계가 복잡해 지면 나무형태로 된다.
나무 형태의 상속 관계를 그림으로 나타낸 것을 상속 트리라고 한다.
Person 클래스를 Student랑 Employee가 상속한다.
이 폴더는 이를 나타낸 예제이다.
*/


//클래스를 사용하는 애플리케이션 파일 
#include "student.h"
#include "employee.h"
 
 int main()
 {
   // Person 클래스 인스턴스화하고 사용
   cout << "Person: " << endl;
   Person person("John");
   person.print();
   cout << endl << endl;
  // Student 클래스 인스턴스화하고 사용
  cout << "Student: " << endl;
  Student student("Mary", 3.9);
  student.print();
  cout << endl << endl;
  // Employee 클래스 인스턴스화하고 사용
  cout << "Employee: " << endl;
  Employee employee("Juan", 78000.00);
  employee.print();
  cout << endl << endl;
  return 0;
}