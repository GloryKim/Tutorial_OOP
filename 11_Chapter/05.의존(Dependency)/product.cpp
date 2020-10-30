//
//  product.cpp
//  Tutorial_OOP
//
//  Created by Glory on 2020/10/30.
//


//Product 클래스의 구현 파일


#include "product.h"

// 생성자
Product::Product(string nm, double up)
: name(nm), unitPrice(up)
{
}
// 소멸자
Product::~Product()
{
} 
// getPrice 멤버 함수
double Product::getPrice() const
{
  return unitPrice;
}