#include<iostream>
#include<fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <iterator>
#include <vector>
#include <iomanip>
using namespace std;



typedef struct result
{
 string rId;
 string course;
 string marks;

};



void newResultAdd()
{
    fstream outfile ("resultInfo.txt",ios::app);
    result s1;
    cout<<"Registration Id:";
    cin>>s1.rId;
    cout<<"Course:";
    cin>>s1.course;
    cout<<"Marks:";
    cin>>s1.marks;

    outfile<<s1.rId<<" "<<s1.course<<" "<<s1.marks<<endl;
    cout<<"\n**Successfully Added**\n";
    outfile.close();
    return;

}
void updateResultAdd()
{
    string rId,course;
    cout<<"\n Enter student registration Id:\n";
    cin>>rId;
    cout<<"\n Enter student Course:\n";
    cin>>course;

    result s1;
    fstream infile ("resultInfo.txt");
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
            if(i==0 && rId==*it)
            {
                flag=1;
            }
            else
                break;
            i++;
        }
        if(flag==1)
        {
            cout<<s1.course;
            cin>>s1.marks;

            tempfile<<rId<<" "<<course<<" "<<s1.marks<<endl;
            cout<<"\n**Successfully updated**\n";

        }
        else
        {
            tempfile<<line<<endl;

        }
    }
    infile.close();
    tempfile.close();
    remove("resultInfo.txt");
    rename("tempInfo.txt","resultInfo.txt");


}
void deleteResult()
{

        string rId,course;
    cout<<"\n Enter student registration Id:\n";
    cin>>rId;
    cout<<"\n Enter student Course:\n";
    cin>>course;

    result s1;
    fstream infile ("resultInfo.txt");
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
            if(i==0 && rId==*it)
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
            cout<<"\n\n ** deleted successfully**\n\n";
        }
    }
    infile.close();
    tempfile.close();
    remove("resultInfo.txt");
    rename("tempInfo.txt","resultInfo.txt");



}

void checkingGrade()
{
    string course;
    cout<<"Enter the Course:";
    cin>>course;

   {

int results;

cout << "Follow instructions to find out your grade"<<endl<<endl;


cout << "Enter your results"<<endl<<endl;



cin >> results;

if ((results >=80)&&(results<=100))
{

cout << "Your grade is A"<< endl;

}

else if (results>=75&&results<80)
{

cout << "Your Grade is B+"<< endl;

}

else if (results >=70&&results<74)
{

cout << "Your Grade is B"<<endl;


}
else if (results >=65&&results<69)
{

cout << "Your Grade is C+"<<endl;

}

else if (results >=60&&results<64)
{

cout << "Your Grade is c"<<endl;

}

else if (results >=55&&results<59)

{

cout << "Your Grade is D+"<<endl;

}
else if (results >=50&&results<54)

{

cout << "Your Grade is D"<<endl;

}
else if (results >=40&&results<49)

{

cout << "Your Grade is E"<<endl;

}
else if (results >=0&&results<40)

{

cout << "Your Grade is F"<<endl;

}
else {
        cout << "LOL Really"<<endl;
}


        cout<<endl;
}
