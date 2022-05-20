//IT21256028
//Staff Class
class Staff
{
  private: 
    char staffID[5];
    char staffName[20];
    char staffEmail[20];
    char staffPassword[15];

  public:
    Staff();
    Staff(char SID[],char Sname[],char sEmail[],char SPw[]);
    void setStaffDetails(char setSID[],char setSname[],char setSEmail[],char setSPw[]);
    void displayStaffDetails();
    void login(char StEmail,char StPw);  
    ~Staff();
};