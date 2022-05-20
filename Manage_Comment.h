//( IT21252822 )
#include "Staff.h"
#include "Comment.h"

//Manage_Comment Class
 class manage_Comment
{
  private:
    Staff *Cstf[2];
    Comment *Ccom[2];

  public:
    manage_Comment(Staff *pCstf[],Comment *pCcom[]);
    void displaymanageComment_details();
}; 
  