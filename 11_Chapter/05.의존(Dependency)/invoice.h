//
//  invoice.h
//  Tutorial_OOP
//
//  Created by Glory on 2020/10/30.
//


//Invoice 클래스의 인터페이스 파일

#ifndef INVOICE_H
#define INVOICE_H
#include "product.h"

class Invoice
{
  private:
    int invoiceNumber;
    double invoiceTotal; 
  public: 
    Invoice(int invoiceNumber);
    ~Invoice(); 
    void add(int quantity, Product product);
    void print() const; 
};
#endif