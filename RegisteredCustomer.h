//IT21249570

#include "Payment.h"
#include "Order.h"
#include "Item.h"
#include "NonRegisteredCustomer.h"
  
//RegisteredCustomer Class
class RegisteredCustomer :public NonRegisteredCustomer 
{
  private:
  	char userEmail[30];
  	char userPassword[30];

    Payment *rPay[2];
    Order *Ord[2];
    Item *it[2];
    
  public:
  	RegisteredCustomer();
    RegisteredCustomer(int NID, char Nname[], char Naddress[], int Ntelephone, char uEmail[], char uPassword[]);
    void setRegisteredCustomerDetails(char sEmail[], char sPassword[]);
  	void displayDetails();
    void login();
    void makePayment(Payment *nPay);
    void placeOrder(Order *nOrd);
    void selectItems(Item *nit);
    ~RegisteredCustomer();
};