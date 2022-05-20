//( IT21252822 )
#include <iostream>
using namespace std;

//Item Class
class Item{
    private:
        char item_code[6];
        string item_name;
        float item_fee;
    public:
        Item();
        Item(char icode[], string iname, float ifee);
        void setItemDetails(char sicode[], string siname, float sifee);
        void displayItemDetails();
        ~Item();
};