//IT21256028
#include <iostream>
#include "Report.h"


//Report Implementation
  Report::Report()
  {
    
  }
  
  Report::Report( Item *CIT[], Order *COR[], Payment *Cpay[])
  {
      IT = CIT ;
      OR = COR ;
      PAY = Cpay ;
  }
          
  void Report::GenerateItemReport()
  {
  
  }
          
  void Report::GenerateOrderReport()
  {
  
  }
          
  void Report::GeneratePaymentReport()
  {
  
  }
          
  Report::~Report()
  {
    
  }