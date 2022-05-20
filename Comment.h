//IT21254666
#include <iostream>

using namespace std;

class Comment
{
  private:
    char comID[5];
    string comDescription;
  public:
    Comment();
    Comment(char pcomID[], string pcomDescription);
    void setCommentDetails(char id, string description);
    void displayComDetails();
    ~Comment();
};