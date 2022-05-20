//IT21254666
#include <iostream>
#include <cstring>

#include "Order.h"
//#include "RegisteredCustomer.h"

using namespace std;

//Order Implementation
  Order::Order()
  {
    
  }
  Order::Order(char porderID[], int qty, Payment *pPay[], RegisteredCustomer *pCus[])
  {
    strcpy(orderID,porderID);
    quantity = qty;
    Pay[0] = pPay[0];
    Cus[0] = pCus[0];
  }
  
  void Order::setOrderDetails(char sorderID, int sqty)
  {
    
  }
  
  void Order::addItem(Item *i1, Item *i2)
  {
  
  }
  void Order::displayOrderDetails()
  {
  
  }
  
  Order::~Order()
  {
    
  }