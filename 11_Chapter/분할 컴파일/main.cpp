//
//  main.cpp
//  Glory_C++
//
//  Created by Glory on 2020/10/23.
//


// Person 클래스와 Student 클래스를 사용하는 메인 파일

#include "student.h"

int main()
{
  // Person 객체 인스턴스화하고 사용
  Person person(1111);
  cout << "Person 고유번호: " << endl;
  person.print();
  cout << endl;
  // Student 객체 인스턴스화하고 사용
  Student student(2222, 3.9);
  cout << "Student 고유번호: " << endl;
  student.print();
  cout << endl;

  // Student2 객체 인스턴스화하고 사용
  Student student2(3333, 1.9); // 학점이랑 성적이 student로 된다.2222, 3.9로 
  cout << "Student2 고유번호: " << endl;
  student.print();
  cout << endl;
  return 0;
    
}
