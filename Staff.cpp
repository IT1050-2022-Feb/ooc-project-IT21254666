//IT21256028
#include <iostream>
#include <cstring>

#include "Staff.h"

using namespace std;
  
//Staff Implementation
  Staff::Staff()
  {
    
  }
          
  Staff::Staff(char SID[], char Sname[], char sEmail[], char SPw[])
  {
      strcpy(staffID, SID);
      strcpy(staffName, Sname);
      strcpy(staffEmail, sEmail);  
      strcpy(staffPassword, SPw);
  }

  void Staff::setStaffDetails(char setSID[],char setSname[],char setSEmail[],char setSPw[])
  {
    
  }

  void Staff::displayStaffDetails()
  {
    
  }
          
  void Staff::login(char StEmail,char StPw)
  {
  
  }          
  Staff:: ~Staff()
  {
  
  }