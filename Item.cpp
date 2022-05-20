//( IT21252822 )
#include <iostream>
#include <cstring>

#include "Item.h"
  
//Item Implementation
  Item::Item()
  {
    
  }

  Item::Item(char icode[], string iname, float ifee)
  {
    strcpy(item_code, icode);
    item_name = iname ;
    item_fee = ifee ;
  }
  
  
  void Item::setItemDetails(char sicode[], string siname, float sifee)
  {
      
  }
  
  void Item::displayItemDetails()
  {
    
  }

  Item::~Item()
  {
  
  }