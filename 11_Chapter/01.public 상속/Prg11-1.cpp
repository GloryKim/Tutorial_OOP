//
//  Prg11-1.cpp
//  Glory_C++
//
//  Created by Glory on 2020/10/20.
//


//학생은 사람이다.
//사람을 Person객체로 두고
//Person 객체를 상속하는 Student 객체도 만들고
//이걸을 사용하는 프로그램

#include <iostream>
#include <cassert>
#include <string>
using namespace std;

// Person 클래스 생성
class Person
{
  private:
    long identity;
  public:
    void Set_Id(long identity);
    long Get_Id() const;
};

// Person 클래스에서 Set_Id 함수를 정의한다.
// 사람의 고유번호가 다음 범위에 해당이 안될시에 오류 발생
void Person::Set_Id(long id)
{
  identity = id;
  assert(identity >= 1000 && identity <= 9999) ;
}

// Person 클래스에서 Get_Id 함수를 정의한다.
long Person::Get_Id() const
{
  return identity;
}

//Student 클래스를 정의
class Student : public Person
{
  private:
   double score;
  public:
    void set_Score(double score);
    double get_Score() const;
};


//Student 클래스의 set_Score 함수 정의
void Student::set_Score(double gp)
{
  score = gp;
  assert(score >=0 && score <= 4.0);
}


//Student 클래스의 get_Score 함수 정의
double Student::get_Score() const
{
  return score;
}


//두 클래스를 사용하는 애플리케이션 함수(main 함수)
int main()
{
  // Person 객체 인스턴스화한 후 사용
  Person person;
  person.Set_Id(1111L);
  cout << "Person 객체의 내용입니다." << endl;
  cout << "사람 고유번호: " << person.Get_Id();
  cout << endl << endl;
    
  // Student 클래스 인스턴스화한 후 사용
  Student student;
  student.Set_Id(2222L);
  student.set_Score(3.9);
  cout << "Student 객체의 내용입니다." << endl;
  cout << "학생 고유번호: " << student.Get_Id() << endl;
  cout << "학생의 성적: " << student.get_Score();
  return 0;
}

// 1. 이 프로그램에는 Person 클래스와 Student 클래스가 있다.
// 2. 각각의 클래스를 인스턴스화 해서 사용하고 있다.
// 3. Student 클래스에는 데이터 멤버 identity가 없지만, Person 클래스로 부터 상속을 받는다.
