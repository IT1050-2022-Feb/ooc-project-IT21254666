//( IT21252822 )
#include "Staff.h"
#include "Order.h"
  
//Manage_Order Class
class manage_Order
{
  private:
    Staff *Mstf[2];
    Order *Mord[2];

  public:
    manage_Order(Staff *CMstf[],Order *CMord[]);
    void displaymanageorder_details();
};
