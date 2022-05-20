//IT21249570

#include <iostream>
#include <cstring>

#include "NonRegisteredCustomer.h"
#include "RegisteredCustomer.h"


//RegisteredCustomer Implementation
  RegisteredCustomer::RegisteredCustomer()
  {
  
  }

  RegisteredCustomer::RegisteredCustomer(int NID, char Nname[], char Naddress[], int Ntelephone, char uEmail[], char uPassword[]):NonRegisteredCustomer(NID, Nname[], Naddress[], Ntelephone)
  {
    strcpy(userEmail,uEmail);
    strcpy(userPassword,uPassword);
    
  }

  void RegisteredCustomer::setRegisteredCustomerDetails(char sEmail[], char sPassword[])
  {
    
  }

  void RegisteredCustomer::displayDetails()
  {
    
  }

  void RegisteredCustomer::login()
  {
  
  }

  void RegisteredCustomer::selectItems(Item *nit)
  {
  
  }

  void RegisteredCustomer::makePayment(Payment *nPay)
  {

  
  }

  void RegisteredCustomer::placeOrder(Order *nOrd)
  {
  
  }

	RegisteredCustomer::~RegisteredCustomer() 
  {

	}