//IT21252754

#include <iostream>
#include <cstring>

#include "Payment.h"

//Payment Implementation
  Payment::Payment()
  {

  }
  
  Payment::Payment(char PID[], char PType[], double PAmount, Order *pod, RegisteredCustomer *prCus[])
  {
  	strcpy(paymentID, PID);
  	strcpy(paymentType, PType);
  	paymentAmount = PAmount;
    Od = pod ;
    rCus = prCus ;
  }

  void Payment::setPaymentDetails(char sPID[], char sPType[], double sPAmount)
  {
    
  }
  
  void Payment::checkPayment()
  {
  
  }
  
  void Payment::displayPaymentDetails()
  {
  
  }
  
  Payment::~Payment()
  {
  
  }