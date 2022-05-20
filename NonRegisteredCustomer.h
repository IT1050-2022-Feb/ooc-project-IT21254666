//IT21249570

#include<iostream>

#include "Comment.h"
#include "RegisteredCustomer.h"

using namespace std;

class NonRegisteredCustomer {
  protected:
    int nreg_cusID;
  	char nreg_cusName[40];
  	char nreg_cusAddress[50];
  	int nreg_cusTelephone;

  public:
	  NonRegisteredCustomer();
    NonRegisteredCustomer(int NID,char Nname[],char Naddress[],int Ntelephone);
    void setNonRegisteredCustomerDetails(int sID,char sname[],char saddress[],int stelephone);
	  void Register();
    void addComments(Comment *pcom);
	  virtual void displayDetails();
    ~NonRegisteredCustomer();
};