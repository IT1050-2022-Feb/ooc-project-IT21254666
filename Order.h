//IT21254666
#include "Item.h"
#include "Payment.h"
#include "RegisteredCustomer.h"
  
//Order Class
class Order{
  private:
    char orderID[4];
    int quantity;

    Item *itm[2];
    Payment *Pay[2];
    RegisteredCustomer *Cus[2];

  public:
    Order();
    Order(char porderID[], int qty, Payment *pPay[], RegisteredCustomer *pCus[]);
    void setOrderDetails(char sorderID, int sqty);
    void displayOrderDetails();
    void addItem(Item *i1, Item *i2);
    ~Order();
                
};