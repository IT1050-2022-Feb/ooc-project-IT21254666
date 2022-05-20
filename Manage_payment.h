//IT21252754

#include "Payment.h"
#include "Staff.h"
  
//Manage_Payment Class
class manage_Payment
{
  private:
    Staff *stf[2];
    Payment *paym[2];

  public:
    manage_Payment(Staff *Mstf[],Payment *Mpaym[]);
    void displaymanage_details();
};