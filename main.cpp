//MLB_04.01_03_Online Laundry System
#include <iostream>
#include <cstring>

#include "Comment.h"
#include "Item.h"
#include "RegisteredCustomer.h"
#include "NonRegisteredCustomer.h"
#include "Payment.h"
#include "Manage_Payment.h"
#include "Order.h"
#include "Manage_Order.h"
#include "Manage_Comment.h"
#include "Report.h"
#include "Staff.h"

int main()
{
 
  //comment main -- IT21254666
  Comment *com[2];
  com[0] = new Comment("984", "Fast delivery.");
  com[1] = new Comment("734", "Exellent service.");
  
  com[0] -> displayComDetails();
  com[1] -> displayComDetails();

  delete com[0];
  delete com[1];
  
  //Item main ( IT21252822 )
  
  Item *i[3];
  
  i[0] = new Item("IT2123", "ITEM 01", 200.0);
  i[1] = new Item("IT2124", "ITEM 02", 250.0);
  i[2] = new Item("IT2754", "ITEM 03", 330.0);

  i[0] -> displayItemDetails();
  i[1] -> displayItemDetails();
  i[2] -> displayItemDetails();

  delete i[0];
  delete i[1];
  delete i[2];

  //Payment main
  //IT21252754
  
    Payment *P1= new Payment();
    Payment *P2= new Payment();
  
    P1 -> displayPaymentDetails("P120425015", "visa", 3400, O[0], R[0]);
    P2 -> displayPaymentDetails("P125474521", "master", 2500, O[1], R[1]);
  
    delete P1;
    delete P2;

  //NonRegisteredCustomer main  (IT21249570)
    NonRegisteredCustomer *Nr[2];

    Nr[0] = new NonRegisteredCustomer (1000001, "Saman Perera", "A/201,Sooriya Mawatha,Negambo", 0712363423);
    Nr[1] = new NonRegisteredCustomer (1000002, "Kamal Gamage", "975 Fire Oak, Humble,", 0775642010);
  	Nr[0] ->displayDetails();
    Nr[1] ->displayDetails();
  	Nr[0]->displayDetails();
  	Nr[1]->displayDetails();
  
  	Nr[0]->~NonRegisteredCustomer();
  	Nr[1]->~NonRegisteredCustomer();

  //RegisteredCustomer main (IT21249570)
    RegisteredCustomer *R[2];
    R[0]= new RegisteredCustomer(1000001, "Saman Perera", "A/201,Sooriya Mawatha,Negambo", 0712363423,("kamal8546@gmail.com", "hD6fA$72");
    R[1]= new RegisteredCustomer(1000002, "Kamal Gamage", "975 Fire Oak, Humble,", 0775642010,"Sunil9878@gmail.com", "Hfged64#jh");
  
    R[0]->displayDetails();
    R[1]->displayDetails();
  
    R[0]->displayDetails();
    R[1]->displayDetails();
  
    R[0]->login();
    R[1]->login();

  //Order main -- IT21254666
    Order *O[2];
  
    O[0] = new Order("056", 5 , P1, R[0]);
    O[1] = new Order("082", 8, P2, R[1]);
  
    O[0] -> addItem(i[0],i[2]);
    O[1] -> addItem(i[1],i[2]);
  
    O[0] -> displayOrderDetails();
    O[1] -> displayOrderDetails();
  
    delete O[0];
    delete O[1];

    //IT21256028
    //Staff main
    Staff* stf1 = new       
    Staff("001","Nimal","nimal6345@gmail.com","6277");
    Staff* stf2 = new 
    Staff("002","Kamal","kamal2289@gmail.com","2552");
    
    stf1 -> setStaffDetails();
    stf1 -> displayStaffDetails();
    stf1 -> login();
    
    stf2 -> setStaffDetails();
    stf2 -> displayStaffDetails();
    stf2 -> login();
    
    delete stf1;
    delete stf2;

    //IT21256028
    //Report main
    Report *report1 = new Report();
    
    report1 -> GenerateItemReport();
    report1 -> GenerateOrderReport();
    report1 -> GeneratePaymentReport();
    
    delete report1;

  //manage_Payment ( IT21252754 )
  
  manage_Payment manage1(stf1, O[0]);
  manage_Payment manage2(stf2, O[1]);
  
  manage1.displaymanage_details();
  manage2.displaymanage_details();

  //manage_Order ( IT21252822 )
  
  manage_Order manage_Order1(stf1, O[0]);
  manage_Order manage_Order2(stf2, O[1]);
  
  manage_Order1.displaymanageorder_details();
  manage_Order2.displaymanageorder_details();

//manage_Comment
//IT21252754

  manage_Comment manage_Com1(stf1, com[0]);
  manage_Comment manage_Com2(stf2, com[1]);
  
  manage_Com1.displaymanageComment_details();
  manage_Com2.displaymanageComment_details();

  return 0;
}