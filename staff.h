#include<iostream>
#include<fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <iterator> //for std::istream_iterator
#include <vector>
#include <iomanip>
using namespace std;



typedef struct staff
{
  string fst_name;//first name of Staff
 string lst_name;//last name of Staff
 string ID;//ID of Staff
 string age;
 string qualification;//Qualification of Staff
 string exp;//Experience of the person
 string pay;//Pay of the Staff
 string addrs;//Address of Staff
 string cel_no;
};


void newStaffRegistration()
{
    fstream outfile ("staffInfo.txt",ios::app);
    staff s1;
  cout<<"Enter First name: ";
  cin>>s1.fst_name;
  cout<<"Enter Last name:: ";
  cin>>s1.lst_name;
  cout<<"Enter ID :: ";
  cin>>s1.ID;
  cout<<"Enter  age:: ";
  cin>>s1.age;
  cout<<"Enter qualification: ";
  cin>>s1.qualification;
  cout<<"Enter experiance(year): ";
  cin>>s1.exp;
  cout<<"Enter pay: ";
  cin>>s1.pay;
  cout<<"Enter Address:: ";
  cin>>s1.addrs;
  cout<<"Enter Phone Number: ";
  cin>>s1.cel_no;

    outfile<<s1.fst_name<<endl<<s1.lst_name<<endl<<s1.ID<<endl<<s1.age<<endl
   <<s1.qualification<<endl<<s1.exp<<endl
   <<s1.pay<<endl<<s1.cel_no<<endl;;
    cout<<"\n**Successfully Added**\n";
    outfile.close();
    return;
}
void updateStaffInform()
{
    string sId;
    cout<<"\n Enter staff Id:\n";
    cin>>sId;

    staff s1;
    fstream infile ("staffInfo.txt");
    fstream tempfile ("tempInfo.txt",ios::app);
    string line;

    while(std::getline(infile, line))
    {

        istringstream ss(line);
        std::istream_iterator<std::string> begin(ss), end;
        //putting all the tokens in the vector
        std::vector<std::string> arrayTokens(begin, end);

        vector<string>::iterator it;
        int i=0,flag=0;
        for(it = arrayTokens.begin(); it != arrayTokens.end(); it++)
        {
            if(i==0 && sId==*it)
            {
                flag=1;
            }
            else
                break;
            i++;
        }
        if(flag==1)
        {
             cout<<"Enter First name: ";
  cin>>s1.fst_name;
  cout<<"Enter Last name:: ";
  cin>>s1.lst_name;
  cout<<"Enter ID :: ";
  cin>>s1.ID;
  cout<<"Enter  age:: ";
  cin>>s1.age;
  cout<<"Enter qualification: ";
  cin>>s1.qualification;
  cout<<"Enter experiance(year): ";
  cin>>s1.exp;
  cout<<"Enter pay: ";
  cin>>s1.pay;
  cout<<"Enter Address:: ";
  cin>>s1.addrs;
  cout<<"Enter Phone Number: ";
  cin>>s1.cel_no;
            tempfile<<s1.fst_name<<endl<<s1.lst_name<<endl<<s1.ID<<endl<<s1.age<<endl
   <<s1.qualification<<endl<<s1.exp<<endl
   <<s1.pay<<endl<<s1.cel_no<<endl;;
            cout<<"\n**Successfully updated**\n";

        }
        else
        {

            tempfile<<line<<endl;
        }
    }
    infile.close();
    tempfile.close();
    remove("staffInfo.txt");
    rename("tempInfo.txt","staffInfo.txt");

}
void deleteStaffInform()
{
        string sId;
    cout<<"\n Enter staff Id:\n";
    cin>>sId;

    staff s1;
    fstream infile ("staffInfo.txt");
    fstream tempfile ("tempInfo.txt",ios::app);
    string line;

    while(std::getline(infile, line))
    {

        istringstream ss(line);
        std::istream_iterator<std::string> begin(ss), end;
        //putting all the tokens in the vector
        std::vector<std::string> arrayTokens(begin, end);

        vector<string>::iterator it;
        int i=0,flag=0;
        for(it = arrayTokens.begin(); it != arrayTokens.end(); it++)
        {
            if(i==0 && sId==*it)
            {
                flag=1;
            }
            else
                break;
            i++;
        }
        if(flag!=1)
        {
            tempfile<<line<<endl;
        }
        else
        {
            cout<<"\n\n ** deleted successfully**\n";

        }
    }
    infile.close();
    tempfile.close();
    remove("staffInfo.txt");
    rename("tempInfo.txt","staffInfo.txt");

}

void listOfStaffs()
{

    fstream file ("staffInfo.txt");
    staff s1;
cout<<endl<<"\t\t\t\t !** STAFF LIST **!\t\t\n\n\n";
    cout<<setw(15)<<"S.ID"<<setw(15)<<"F.NAME:"<<setw(15)<<"L.NAME"<<setw(15)<<"PAY"<<setw(15)<<"QUALIFICATION"<<setw(15)<<"M.NUMBER"<<endl<<endl;
    string line;
    while(std::getline(file, line))
    {
        istringstream ss(line);
        std::istream_iterator<std::string> begin(ss), end;

        //putting all the tokens in the vector
        std::vector<std::string> arrayTokens(begin, end);

        vector<string>::iterator it;

        for(it = arrayTokens.begin(); it != arrayTokens.end(); it++)
        {

                cout<<setw(15)<<*it;// prints d.

        }
        cout<<endl;
    }
        cout<<endl;

}
