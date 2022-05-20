//IT21252754

#include "RegisteredCustomer.h"
#include "Order.h"

//Payment Class
class Payment
{
  private:
    char paymentID[10];
    char paymentType[25];
    double paymentAmount;
    Order *Od[2];
    RegisteredCustomer *rCus[2];
public:
    Payment();
    Payment(char PID[], char PType[], double PAmount, Order *pod, RegisteredCustomer *prCus[]);
    void setPaymentDetails(char sPID[], char sPType[], double sPAmount);
    void checkPayment();
    void displayPaymentDetails();
    ~Payment();
};