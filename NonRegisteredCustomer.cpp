//IT21249570

#include <iostream>
#include <cstring>

#include "NonRegisteredCustomer.h"
  
//NonRegisteredCustomer Implementation
  NonRegisteredCustomer::NonRegisteredCustomer()
  {
    
  }

  NonRegisteredCustomer::NonRegisteredCustomer(int NID,char Nname[],char Naddress[],int Ntelephone)
  {
    nreg_cusID = NID ;
    strcpy(nreg_cusName, Nname);
    strcpy(nreg_cusAddress,Naddress);
    nreg_cusTelephone = Ntelephone;
  }

  void NonRegisteredCustomer::setNonRegisteredCustomerDetails(int ID,char sname[],char saddress[],int stelephone)
  {
    
  }
	void NonRegisteredCustomer::displayDetails() 
  {
		

	}
  void NonRegisteredCustomer::Register()
  {
    
  }

  void NonRegisteredCustomer::addComments(Comment *pcom)
  {
  
  }

  NonRegisteredCustomer::~NonRegisteredCustomer()
  {
    
  }