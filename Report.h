//IT21256028
#include "Item.h"
#include "Order.h"
#include "Payment.h"

//Report Class

class Report{
    private:
        Item *IT[20];
        Order *OR[20];
        Payment *PAY[20];

    public:
        Report();
        Report(Item *CIT[], Order *COR[], Payment *Cpay[]);
        void GenerateItemReport();
        void GenerateOrderReport();
        void GeneratePaymentReport();
        ~Report();

};