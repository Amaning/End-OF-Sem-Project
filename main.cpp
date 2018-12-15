#include <iostream>
#include<stdio.h>
#include<stdlib.h>

#include "student.h"
#include "staff.h"
#include "result.h"
using namespace std;

int main()
{
    int choice;
    for(;;)
    {
            cout <<endl<<endl;
            cout << "\t\t\t\t!...**WELCOME TO SCHOOL MANAGEMENT SYSTEM**...!"<< endl<<endl;
            cout << "1. Student Information"<< endl;
            cout << "2. Staff Information"<< endl;
            cout << "3. Result Information"<< endl;
            cout << "4. Exit"<< endl;
            cout << "Enter your choice:"<< endl;
            cin>>choice;

            system("cls");

            switch(choice)

            {
                case 1:
                            int studentC;
                            cout <<endl;
                            cout << " **STUDENT** "<< endl;
                            cout << "1. New Registration"<< endl;
                            cout << "2. Update student information"<< endl;
                            cout << "3. Delete student information"<< endl;
                            cout << "4. List All students"<< endl;
                            cout << "5. Exit"<< endl;
                            cout << "Enter your choice:"<< endl;
                            cin>>studentC;
                            switch(studentC)
                            {
                                case 1:
                                    newStudentRegistration();
                                    break;
                                    system("cls");
                                case 2:
                                    updateStudentInform();
                                    break;
                                    system("cls");
                                case 3:
                                    deleteStudentInform();
                                    break;
                                    system("cls");
                                case 4:
                                    listOfStudents();
                                    break;
                                    system("cls");
                                case 5:exit(0);
                                break;
                                system("cls");
                                default:
                                        cout<<"wrong option, please retry";
                            }
                    break;
                    system("cls");




                case 2:
                            int staffC;

                            cout <<endl;
                            cout << " **STAFF** "<< endl;
                            cout << "1. New Registration"<< endl;
                            cout << "2. Update staff information"<< endl;
                            cout << "3. Delete staff information"<< endl;
                            cout << "4. List All staffs"<< endl;
                            cout << "5. Exit"<< endl;
                            cout << "Enter your choice:"<< endl;
                            cin>>staffC;
                            switch(staffC)
                            {
                            case 1:
                                newStaffRegistration();
                                break;
                                system("cls");
                            case 2:
                                    updateStaffInform();
                                    break;
                                    system("cls");
                            case 3:
                                    deleteStaffInform();
                                    break;
                                    system("cls");
                            case 4:
                                    listOfStaffs();
                                    break;
                                    system("cls");

                            case 5:exit(0);
                            break;

                            system("cls");


                            default:
                                    cout<<"wrong option, please retry";
                            }
                    break;
                    system("cls");

                case 3:
                            int resultC;
                            cout <<endl;
                            cout << " **RESULT** "<< endl;
                            cout << "1. Add Result "<< endl;
                            cout << "2. Update Result"<< endl;
                            cout << "3. Delete Result"<< endl;
                            cout << "4. Check Grade "<< endl;
                            cout << "5. Exit"<< endl;
                            cout << "Enter your choice:"<< endl;
                            cin>>resultC;
                            switch(resultC)
                            {
                            case 1:
                                    newResultAdd();
                                    break;
                                    system("cls");
                            case 2:
                                    updateResultAdd();
                                    break;
                                    system("cls");
                            case 3:
                                    deleteResult();
                                    break;
                                    system("cls");
                            case 4:
                                    checkingGrade();
                                    break;
                                    system("cls");
                            case 5:exit(0);
                                break;
                                system("cls");
                                default:
                                        cout<<"wrong option, please retry";
                            }
                    break;


                    system("cls");



                case 4:exit(0);
                        break;
                default:cout<<"wrong entry, please re-try";
            }

    }
    return 0;
}
