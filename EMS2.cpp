/*
                        *******************************************************
                        *              EMPLOY MANAGEMENT SYSTEM               *
                        *******************************************************
                                           SUBMITTED BY

Name....................Muhammad Usman Bin Farid
Roll NO.................2021-CS-142
Section.................C

                        *******************************************************
                        *                 USERNAME & PASSWORD                 *
                        *******************************************************

Admin:
   Username : Admin
   Password : 12345678

Employ:
   Username : Employ
   Password : 12345678

                        *******************************************************
                        *                  LET'S CODE BEGINS                  *
                        *******************************************************
*/
#include <iostream>//INPUT OUTPUT LIBRARY
#include <stdlib.h>//LIBRARY FOR USING system("cls") FUNCTION
#include <conio.h>//LIBRARY TO USE getch() FUNCTION

using namespace std;

void head(int n);// HEADER FILE
void clearscreen();// TO CLEAR SCREEN
void sortTask(int task1_time, int task2_time, int task3_time, int task4_time, string task_1, string task_2, string task_3, string task_4); // SORT TASKS
int adminEmploy(); // INTERFACE TO USER WANT TO LOGIN AS USER OR ADMIN
int adInterface(); // MAIN MENU OF ADMIN
int empInterface();// MAIN MENU FOR EMPLOY
bool adminLogin(string adm_name, string admin_p1); // ADMIN LOGIN
bool employLogin(string e_name, string employ_p1);  // EMPLOY LOGIN

main() // STARTING MAIN
{
    // INITIALIZING CHARECHTERS
    char i = '0', j = '0', k = '0'; 

    // INITIALIZING INTEGERS
    int admin_password = 0, admin_employ = 0, employ_password = 0, emp_rank = 0, emp_pay = 0, emp_reward = 0;
    int emp_comp_task = 0, task4_time = 0, emp_deduct = 0, we_years, emp_rank1, n = 0, x = 0, y = 0;
    int emp_absence = 0, emp_attendance = 0, emp_duduct = 0, task1_time = 0, task2_time = 0, task3_time = 0;
 
 // INITIALIZING STRINGS
    string admin_user, employ_user, emp_name, adm_name, e_name, task_1, task_2, task_3, task_4, remarks;
    string employ_p1, admin_p1, previous_pass;

    // assighning password

    adm_name = "Admin";
    admin_p1 = "12345678"; // USER NAME & PASSWORD OF ADMIN

    e_name = "Employ";
    employ_p1 = "12345678"; // USER NAME & PASSWORD OF EMPLOY

    while (i != 3) // STARTING FIRST WHILE LOOP FOR adminEmploy() FUNCTION
    {
        head(n); // ADDING HEADER
        n++;
        i = adminEmploy(); // SAVING VALUE OF FUNCTION IN A CHARECTER ARRAY

        if (i == 1) // STARTING OF IF
        {
            head(n);                                  // ADDING HEADER
            bool tf = adminLogin(adm_name, admin_p1); // CHEAKING IS USER ENTER CORRECT USERNAME & PASSWORD

            if (tf = true) // IF USER ENTERS CORRECT USERNAME & PASSWORD
            {
                while (j != 15) // NEATED WHILE LOOP FOR ADMIN
                {
                    head(n);           // ADDING HEADER
                    j = adInterface(); // STORING VALUE IN CHARACHTER

                    head(n);    // ADDING HEADER
                    if (j == 1) // STARTING MOST NESTED IF
                    {
                        cout << "Main Menu > Add Employ." << endl;
                        cout << "-----------------------------" << endl;
                        cout << "Enter Employ Name : ";
                        cin >> emp_name;
                        cout << "Enter Employ rank : ";
                        cin >> emp_rank;
                    }                // END OF MOST NESTED IF
                    else if (j == 2) // STARTING MOST NESTED ELSE IF
                    {
                        cout << "Main Menu > Assighn Username / Password" << endl;
                        cout << "-----------------------------------------" << endl;
                        cout << "Enter username of employ : ";
                        cin >> e_name;
                        cout << "Enter password of employ : ";
                        cin >> employ_p1;
                    }                // END MOST NESTED ELSE IF
                    else if (j == 3) // STARTING MOST NESTED ELSE IF
                    {
                        cout << "Main Menu > Release Pay" << endl;
                        cout << "-----------------------------------------" << endl;
                        cout << "Enter pay of Employ 1 : ";
                        cin >> emp_pay;
                    }                // END MOST NESTED ELSE IF
                    else if (j == 4) // STARTING MOST NESTED ELSE IF
                    {
                        cout << "Main Menu > Grant / Reward or Bonus." << endl;
                        cout << "-----------------------------------------" << endl;
                        cout << "Enter Reward of Employ 1 : ";
                        cin >> emp_reward;
                    }                // END MOST NESTED ELSE IF
                    else if (j == 5) // STARTING MOST NESTED ELSE IF
                    {
                        cout << "Main Menu > Attendance" << endl;
                        cout << "-----------------------------------------" << endl;
                        cout << "Enter how many days out 0f 30 employ 1 present : ";
                        cin >> emp_attendance;
                        emp_absence = 30 - emp_attendance;
                        cout << "employ 1 is absent " << emp_absence << " day(s)." << endl;
                    }                // END MOST NESTED ELSE IF
                    else if (j == 6) // STARTING MOST NESTED ELSE IF
                    {
                        cout << "Main Menu > Deductions" << endl;
                        cout << "-----------------------------------------" << endl;
                        cout << "employ 1 is absent " << emp_absence << " day(s)." << endl;
                        emp_deduct = emp_absence * 100;
                        cout << "Employ deductions : " << emp_deduct;
                    }                // END MOST NESTED ELSE IF
                    else if (j == 7) // STARTING MOST NESTED ELSE IF
                    {
                        cout << "Main Menu > Remove Employ." << endl;
                        cout << "----------------------------" << endl;
                        cout << "Do you wanna remove employ(y or n) : ";
                        cin >> y;

                        if (y == 'y') // STARTING MOST MOST NESTED ELSE IF
                        {
                            emp_name = "NIL";
                            emp_rank = 0;
                            cout << "Employ removed." << endl;
                            break;
                        } // END MOST MOST NESTED ELSE IF
                    }
                    else if (j == 8) // STARTING MOST NESTED ELSE IF
                    {
                        cout << "Main Menu > Employ List" << endl;
                        cout << "-----------------------------------------" << endl;
                        cout << "Srno\t"
                             << "Name\t"
                             << "Rank" << endl;
                        if (emp_rank != 0)
                        {
                            cout << "1.  \t" << emp_name << "\t" << emp_rank << endl;
                        }
                    }                // END MOST NESTED ELSE IF
                    else if (j == 9) // STARTING MOST NESTED ELSE IF
                    {
                        cout << "Main Menu > Assighn Tasks / Duties" << endl;
                        cout << "-----------------------------------------" << endl;
                        cout << "Enter task 1 : ";
                        cin >> task_1;
                        cout << "Enter Task 1 time : ";
                        cin >> task1_time;
                        cout << "Enter task 2 : ";
                        cin >> task_2;
                        cout << "Enter Task 2 time : ";
                        cin >> task2_time;
                        cout << "Enter task 3 : ";
                        cin >> task_3;
                        cout << "Enter Task 3 time : ";
                        cin >> task3_time;
                        cout << "Enter task 4 : ";
                        cin >> task_4;
                        cout << "Enter Task 4 time : ";
                        cin >> task4_time;
                    }                 // END MOST NESTED ELSE IF
                    else if (j == 10) // STARTING MOST NESTED ELSE IF
                    {
                        cout << "Main Menu > Changes by Employ." << endl;
                        cout << "----------------------------" << endl;

                        if (employ_p1 != "12345678")
                        {
                            cout << "Employ changed his password to : " << employ_p1 << endl;
                        }
                        else
                        {
                            cout << "No change by employ." << endl;
                        }
                    }                 // END MOST NESTED ELSE IF
                    else if (j == 11) ////STARTING MOST NESTED ELSE IF
                    {
                        cout << "Main Menu > Employ Performance." << endl;
                        cout << "----------------------------" << endl;
                        cout << "No of task completed by employ : ";
                        if (emp_comp_task != 0)
                        {
                            cout << emp_comp_task << endl;
                        }
                        else
                        {
                            cout << "Nil" << endl;
                        }
                    }                 // END MOST NESTED ELSE IF
                    else if (j == 12) // STARTING MOST NESTED ELSE IF
                    {
                        cout << "Main Menu > Change Password of employ." << endl;
                        cout << "----------------------------" << endl;
                        cout << "Do you wanna change password of employ (y or n) : ";
                        cin >> x;

                        if (x == 'y')
                        {
                            cout << "Enter new employ password : ";
                            cin >> employ_p1;
                            cout << "Password updated!";
                        }
                    }                 // END MOST NESTED ELSE IF
                    else if (j == 13) // STARTING MOST NESTED ELSE IF
                    {
                        cout << "Main Menu > Give Promotion." << endl;
                        cout << "----------------------------" << endl;
                        cout << "Enter new employ rank : ";
                        cin >> emp_rank;
                    }                 // END MOST NESTED ELSE IF
                    else if (j == 14) // STARTING MOST NESTED ELSE IF
                    {
                        cout << "Main Menu > History of employ." << endl;
                        cout << "----------------------------" << endl;
                        cout << "Enter rank of employ : ";
                        cin >> emp_rank1;
                        cout << "Enter work experience : ";
                        cin >> we_years;
                        cout << "Enter Your remarks : ";
                        cin >> remarks;
                    }    // END MOST NESTED ELSE IF
                    else // STARTING MOST NESTED ELSE
                    {
                        cout << "Enter valid value.";
                    } // END MOST NESTED ELSE
                }     // END NESTED WHILE
            }         // END NESTED IF
        }
        else if (i == 2) // STARTING ELSE IF
        {
            head(n);                                   // ADDING HEADER
            bool ft = employLogin(adm_name, admin_p1); // CHEAKING USER ENTER CORRECT USERNAME & PASSWORD
            if (ft = true)                             // START OF NEATED IF
            {
                while (k != 11) // START OF NESTED WHILE
                {
                    head(n);            // ADDING HEADER
                    k = empInterface(); // CHEAKING WHAT REQUIRMENT IS ENTERED BY USER

                    head(n);    // ADDING HEADER
                    if (k == 1) // STARTING MOST NESTED ELSE IF
                    {
                        cout << "Main Menu > Change Password" << endl;
                        cout << "----------------------------------" << endl;
                        x = 0;
                        for (int z = 0; z < 3; z++) // STARTING MOST NESTED LOOP
                        {
                            cout << "Enter Previous Password : ";
                            cin >> previous_pass;
                            if (previous_pass == employ_p1) // STARTING MOST MOST NESTED ELSE IF
                            {
                                cout << "Enter new password : ";
                                cin >> employ_p1;
                                cout << "Password updated." << endl;
                                x++;
                                break;
                            }    // END MOST MOST NESTED ELSE IF
                            else // STARTING MOST MOST NESTED ELSE
                            {
                                cout << "Again." << endl;
                            } // END MOST MOST NESTED ELSE
                        }
                        if (x == 0) // STARTING MOST MOST NESTED IF
                        {
                            cout << "You are log out!" << endl;
                            break;
                        }            // END MOST MOST NESTED IF
                    }                // END MOST NESTED ELSE IF
                    else if (k == 2) // STARTING MOST NESTED ELSE IF
                    {
                        cout << "Main Menu > View salary" << endl;
                        cout << "----------------------------------" << endl;
                        if (emp_pay != 0)
                        {
                            cout << "Your salary status : " << emp_pay << endl;
                        }
                        else
                        {
                            cout << "No salary." << endl;
                        }
                    }                // END MOST NESTED ELSE IF
                    else if (k == 3) // STARTING MOST NESTED ELSE IF
                    {
                        cout << "Main Menu > View Grant / Reward or Bonus." << endl;
                        cout << "--------------------------------------------" << endl;
                        if (emp_reward != 0)
                        {
                            cout << "Your Grant / Reward or bonus : " << emp_reward << endl;
                        }
                        else
                        {
                            cout << "No reward." << endl;
                        }
                    }                // END MOST NESTED ELSE IF
                    else if (k == 4) // STARTING MOST NESTED ELSE IF
                    {
                        cout << "Main Menu > View Attendance." << endl;
                        cout << "--------------------------------" << endl;
                        if (emp_attendance != 0)
                        {
                            cout << "Your attendance : " << emp_attendance << endl;
                            cout << "Your absence out of 30 : " << emp_absence << endl;
                        }
                        else
                        {
                            cout << "No Attendance updated, or you are absent through out month." << endl;
                        }
                    }                // END MOST NESTED ELSE IF
                    else if (k == 5) // STARTING MOST NESTED ELSE IF
                    {
                        cout << "Main Menu > View Deductions." << endl;
                        cout << "--------------------------------" << endl;
                        if (emp_duduct != 0)
                        {
                            cout << "Your deduction in salary : " << emp_deduct << endl;
                        }
                        else
                        {
                            cout << "No deductions." << endl;
                        }
                    }                // END MOST NESTED ELSE IF
                    else if (k == 6) // STARTING MOST NESTED ELSE IF
                    {
                        cout << "Main menu > View assighned Tasks / Duties." << endl;
                        cout << "----------------------------------------------" << endl;
                        sortTask(task1_time, task2_time, task3_time, task4_time, task_1, task_2, task_3, task_4);
                    }                // END MOST NESTED ELSE IF
                    else if (k == 7) // STARTING MOST NESTED ELSE IF
                    {
                        cout << "Main menu > Completed Tasks / Duties." << endl;
                        cout << "-----------------------------------------" << endl;
                        cout << "Enter no of completed tasks : ";
                        cin >> emp_comp_task;
                    }                // END MOST NESTED ELSE IF
                    else if (k == 8) // STARTING MOST NESTED ELSE IF
                    {
                        cout << "Main menu > View your Balance." << endl;
                        cout << "-----------------------------------------" << endl;
                        cout << "Your Salary : " << emp_pay << endl;
                        cout << "Your bonus : " << emp_reward << endl;
                        cout << "your deductions : " << emp_deduct << endl;
                        int balance = emp_pay + emp_reward - emp_deduct;
                        cout << "Your balance : " << balance;
                    }                // END MOST NESTED ELSE IF
                    else if (k == 9) // STARTING MOST NESTED ELSE IF
                    {
                        cout << "Main menu > See your Status." << endl;
                        cout << "-----------------------------------------" << endl;
                        cout << "Your name : " << emp_name << endl;
                        cout << "Your rank : " << emp_rank << endl;
                        cout << "Your Salary : " << emp_pay << endl;
                        cout << "Your bonus : " << emp_reward << endl;
                        cout << "your deductions : " << emp_deduct << endl;
                        int balance = emp_pay + emp_reward - emp_deduct;
                        cout << "Your balance : " << balance;
                    }                 // END MOST NESTED ELSE IF
                    else if (k == 10) // STARTING MOST NESTED ELSE IF
                    {
                        cout << "Main menu > See your history." << endl;
                        cout << "-----------------------------------------" << endl;
                        cout << "Your experience : " << we_years << endl;
                        cout << "your rank : " << emp_rank1 << endl;
                        cout << "Remarks of admin : " << remarks << endl;
                    }    // END MOST NESTED ELSE IF
                    else // STARTING MOST NESTED ELSE
                    {
                        cout << "Enter valid value.";
                    }    // END MOST NESTED ELSE
                }        // END NESTED LOOP
            }            // END OF NESTED IF
        }                // END ELSE IF
        else if (i == 3) // STARTING ELSE IF
        {
            cout << "Good Bye!" << endl;
            cout << "Thankyou! for using EMS." << endl;
        }    // END ELSE IF
        else // STARTING ELSE
        {
            cout << "Enter valid value.";
        } // END ELSE
    }
}//END OF MAIN

void head(int n) // HEADER FILE
{
    if (n != 0) // TO INITIATE THAT CLEARSCREEN DOES NOT WORK FIRST TIME
    {
        clearscreen();
    }
    cout << "*******************************************************" << endl;
    cout << "*              EMPLOY MANAGEMENT SYSTEM               *" << endl;
    cout << "*******************************************************" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
}
void clearscreen() // TO CLEAR SCREEN
{
    cout << "Enter any key to continue : ";
    getch();
    system("cls");
}
int adminEmploy() // TO CHEAK USER WANT TO ENTER AS ADMIN OR EMPLOY
{
    int admin_employ;
    cout << "Login" << endl;
    cout << "----------------" << endl;
    cout << "Select one of the following." << endl;
    cout << "1. Admin Login." << endl;
    cout << "2. Employ login." << endl;
    cout << "3. Exit." << endl;
    cout << "Select one option : ";
    cin >> admin_employ;
    return admin_employ;
}
bool adminLogin(string adm_name, string admin_p1) // ADMIN LOGIN
{
    string admin_password;
    string admin_use;
    bool tf = false;
    cout << "Admin enter username : ";
    cin >> admin_use;
    cout << "Admin enter password : ";
    cin >> admin_password;
    if (admin_use == adm_name && admin_password == admin_p1)
    {
        tf = true;
    }
    return tf;
}
bool employLogin(string e_name, string employ_p1) // EMPLOY LOGIN
{
    bool tf = false;
    string employ_user;
    string employ_password;
    cout << "Employ enter username : ";
    cin >> employ_user;
    cout << "Employ enter password : ";
    cin >> employ_password;
    if (employ_user == e_name && employ_password == employ_p1)
    {
        tf = true;
    }
    return tf;
}
int adInterface() // ADMIN MAIN MENU
{
    int admin_employ = 0;
    cout << "Main Menu." << endl;
    cout << "--------------" << endl;
    cout << "Select one of the following." << endl;
    cout << "1.  Add Employ." << endl;
    cout << "2.  Assign Username / Password to Employ." << endl;
    cout << "3.  Release Pay." << endl;
    cout << "4.  Grant / Reward or Bonus." << endl;
    cout << "5.  Attendance." << endl;
    cout << "6.  Deductions." << endl;
    cout << "7.  Remove Employ" << endl;
    cout << "8.  Employ List" << endl;
    cout << "9.  Assighn Tasks / Duties" << endl;
    cout << "10. Changes by Employ." << endl;
    cout << "11. Employ Performance." << endl;
    cout << "12. Change Password of employ." << endl;
    cout << "13. Give promotion." << endl;
    cout << "14. History of employ." << endl;
    cout << "15. LogOut." << endl;
    cout << "Select one option : ";
    cin >> admin_employ;
    return admin_employ;
}
int empInterface() // EMPLOY MAIN MENU
{
    int admin_employ = 0;
    cout << "Main Menu." << endl;
    cout << "--------------" << endl;
    cout << "Select one of the following." << endl;
    cout << "1.  Change password." << endl;
    cout << "2.  View salary." << endl;
    cout << "3.  View Grant / Reward or Bonus." << endl;
    cout << "4.  View Attendance." << endl;
    cout << "5.  View Deductions." << endl;
    cout << "6.  View assighned Tasks / Duties." << endl;
    cout << "7.  Completed Tasks / Duties." << endl;
    cout << "8.  View your Balance." << endl;
    cout << "9.  View your status." << endl;
    cout << "10. see your history." << endl;
    cout << "11. LogOut." << endl;
    cout << "Select one option : ";
    cin >> admin_employ;
    return admin_employ;
}
void sortTask(int task1_time, int task2_time, int task3_time, int task4_time, string task_1, string task_2, string task_3, string task_4) // FOR SORTING
{
    if (task1_time > task2_time && task2_time > task3_time && task3_time > task4_time)
    {
        cout << "No  Task \t\t"
             << "Task time" << endl;
        cout << "1. " << task_1 << "\t\t" << task1_time << endl;
        cout << "2. " << task_2 << "\t\t" << task2_time << endl;
        cout << "3. " << task_3 << "\t\t" << task3_time << endl;
        cout << "4. " << task_4 << "\t\t" << task4_time << endl;
    }
    else if (task1_time > task2_time && task2_time > task4_time && task4_time > task3_time)
    {
        cout << "NO  Task \t\t"
             << "Task time" << endl;
        cout << "1. " << task_1 << "\t\t" << task1_time << endl;
        cout << "2. " << task_2 << "\t\t" << task2_time << endl;
        cout << "3. " << task_4 << "\t\t" << task4_time << endl;
        cout << "4, " << task_3 << "\t\t" << task3_time << endl;
    }
    else if (task1_time > task3_time && task3_time > task2_time && task2_time > task4_time)
    {
        cout << "No  Task \t\t"
             << "Task time" << endl;
        cout << "1. " << task_1 << "\t\t" << task1_time << endl;
        cout << "2. " << task_3 << "\t\t" << task3_time << endl;
        cout << "3. " << task_2 << "\t\t" << task2_time << endl;
        cout << "4. " << task_4 << "\t\t" << task4_time << endl;
    }
    else if (task1_time > task3_time && task3_time > task4_time && task4_time > task2_time)
    {
        cout << "NO  Task \t\t"
             << "Task time" << endl;
        cout << "1. " << task_1 << "\t\t" << task1_time << endl;
        cout << "2. " << task_3 << "\t\t" << task3_time << endl;
        cout << "3. " << task_4 << "\t\t" << task4_time << endl;
        cout << "4. " << task_2 << "\t\t" << task2_time << endl;
    }
    else if (task1_time > task4_time && task4_time > task3_time && task3_time > task2_time)
    {
        cout << "NO  Task \t\t"
             << "Task time" << endl;
        cout << "1. " << task_1 << "\t\t" << task1_time << endl;
        cout << "2. " << task_4 << "\t\t" << task4_time << endl;
        cout << "3. " << task_3 << "\t\t" << task3_time << endl;
        cout << "4. " << task_2 << "\t\t" << task2_time << endl;
    }
    else if (task1_time > task4_time && task4_time > task2_time && task2_time > task3_time)
    {
        cout << "NO  Task \t\t"
             << "Task time" << endl;
        cout << "1. " << task_1 << "\t\t" << task1_time << endl;
        cout << "2. " << task_4 << "\t\t" << task4_time << endl;
        cout << "3. " << task_2 << "\t\t" << task2_time << endl;
        cout << "4. " << task_3 << "\t\t" << task3_time << endl;
    }
    else if (task2_time > task1_time && task1_time > task3_time && task3_time > task4_time)
    {
        cout << "NO  Task \t\t"
             << "Task time" << endl;
        cout << "1. " << task_2 << "\t\t" << task2_time << endl;
        cout << "2. " << task_1 << "\t\t" << task1_time << endl;
        cout << "3. " << task_3 << "\t\t" << task3_time << endl;
        cout << "4. " << task_4 << "\t\t" << task4_time << endl;
    }
    else if (task2_time > task3_time && task3_time > task1_time && task1_time > task4_time)
    {
        cout << "NO  Task \t\t"
             << "Task time" << endl;
        cout << "1. " << task_2 << "\t\t" << task2_time << endl;
        cout << "2. " << task_3 << "\t\t" << task3_time << endl;
        cout << "3. " << task_1 << "\t\t" << task1_time << endl;
        cout << "4. " << task_4 << "\t\t" << task4_time << endl;
    }
    else if (task2_time > task4_time && task4_time > task3_time && task3_time > task1_time)
    {
        cout << "NO  Task \t\t"
             << "Task time" << endl;
        cout << "1. " << task_2 << "\t\t" << task2_time << endl;
        cout << "2. " << task_4 << "\t\t" << task4_time << endl;
        cout << "3. " << task_3 << "\t\t" << task3_time << endl;
        cout << "4. " << task_1 << "\t\t" << task1_time << endl;
    }
    else if (task2_time > task4_time && task4_time > task1_time && task1_time > task3_time)
    {
        cout << "NO  Task \t\t"
             << "Task time" << endl;
        cout << "1. " << task_2 << "\t\t" << task2_time << endl;
        cout << "2. " << task_4 << "\t\t" << task4_time << endl;
        cout << "3. " << task_1 << "\t\t" << task1_time << endl;
        cout << "4. " << task_3 << "\t\t" << task1_time << endl;
    }
    else if (task2_time > task3_time && task3_time > task4_time && task4_time > task1_time)
    {
        cout << "NO  Task \t\t"
             << "Task time" << endl;
        cout << "1. " << task_2 << "\t\t" << task2_time << endl;
        cout << "2. " << task_3 << "\t\t" << task3_time << endl;
        cout << "3. " << task_4 << "\t\t" << task4_time << endl;
        cout << "4. " << task_3 << "\t\t" << task1_time << endl;
    }
    else if (task2_time > task1_time && task1_time > task4_time && task4_time > task3_time)
    {
        cout << "NO  Task \t\t"
             << "Task time" << endl;
        cout << "1. " << task_2 << "\t\t" << task2_time << endl;
        cout << "2. " << task_1 << "\t\t" << task1_time << endl;
        cout << "3. " << task_4 << "\t\t" << task4_time << endl;
        cout << "4. " << task_3 << "\t\t" << task3_time << endl;
    }
    else if (task3_time > task2_time && task2_time > task1_time && task1_time > task4_time)
    {
        cout << "NO  Task \t\t"
             << "Task time" << endl;
        cout << "1. " << task_3 << "\t\t" << task3_time << endl;
        cout << "2. " << task_2 << "\t\t" << task2_time << endl;
        cout << "3. " << task_1 << "\t\t" << task1_time << endl;
        cout << "4. " << task_4 << "\t\t" << task4_time << endl;
    }
    else if (task3_time > task2_time && task2_time > task4_time && task4_time > task1_time)
    {
        cout << "NO  Task \t\t"
             << "Task time" << endl;
        cout << "1. " << task_3 << "\t\t" << task3_time << endl;
        cout << "2. " << task_2 << "\t\t" << task2_time << endl;
        cout << "3. " << task_4 << "\t\t" << task4_time << endl;
        cout << "4. " << task_1 << "\t\t" << task1_time << endl;
    }
    else if (task3_time > task4_time && task4_time > task1_time && task1_time > task2_time)
    {
        cout << "NO  Task \t\t"
             << "Task time" << endl;
        cout << "1. " << task_3 << "\t\t" << task3_time << endl;
        cout << "2. " << task_4 << "\t\t" << task4_time << endl;
        cout << "3. " << task_1 << "\t\t" << task1_time << endl;
        cout << "4. " << task_2 << "\t\t" << task2_time << endl;
    }
    else if (task3_time > task4_time && task4_time > task2_time && task2_time > task1_time)
    {
        cout << "NO  Task \t\t"
             << "Task time" << endl;
        cout << "1. " << task_3 << "\t\t" << task3_time << endl;
        cout << "2. " << task_4 << "\t\t" << task4_time << endl;
        cout << "3. " << task_2 << "\t\t" << task2_time << endl;
        cout << "4. " << task_1 << "\t\t" << task1_time << endl;
    }
    else if (task3_time > task1_time && task1_time > task4_time && task4_time > task2_time)
    {
        cout << "NO  Task \t\t"
             << "Task time" << endl;
        cout << "1. " << task_3 << "\t\t" << task3_time << endl;
        cout << "2. " << task_1 << "\t\t" << task1_time << endl;
        cout << "3. " << task_4 << "\t\t" << task4_time << endl;
        cout << "4. " << task_2 << "\t\t" << task2_time << endl;
    }
    else if (task3_time > task1_time && task1_time > task2_time && task2_time > task4_time)
    {
        cout << "NO  Task \t\t"
             << "Task time" << endl;
        cout << "1. " << task_3 << "\t\t" << task3_time << endl;
        cout << "2. " << task_1 << "\t\t" << task1_time << endl;
        cout << "3. " << task_2 << "\t\t" << task2_time << endl;
        cout << "4. " << task_4 << "\t\t" << task4_time << endl;
    }
    else if (task4_time > task3_time && task3_time > task2_time && task2_time > task1_time)
    {
        cout << "NO  Task \t\t"
             << "Task time" << endl;
        cout << "1. " << task_4 << "\t\t" << task4_time << endl;
        cout << "2. " << task_3 << "\t\t" << task3_time << endl;
        cout << "3. " << task_2 << "\t\t" << task2_time << endl;
        cout << "4. " << task_1 << "\t\t" << task1_time << endl;
    }
    else if (task4_time > task3_time && task3_time > task1_time && task1_time > task2_time)
    {
        cout << "NO  Task \t\t"
             << "Task time" << endl;
        cout << "1. " << task_4 << "\t\t" << task4_time << endl;
        cout << "2. " << task_3 << "\t\t" << task3_time << endl;
        cout << "3. " << task_1 << "\t\t" << task1_time << endl;
        cout << "4. " << task_2 << "\t\t" << task2_time << endl;
    }
    else if (task4_time > task2_time && task2_time > task1_time && task1_time > task3_time)
    {
        cout << "NO  Task \t\t"
             << "Task time" << endl;
        cout << "1. " << task_4 << "\t\t" << task4_time << endl;
        cout << "2. " << task_2 << "\t\t" << task2_time << endl;
        cout << "3. " << task_1 << "\t\t" << task1_time << endl;
        cout << "4. " << task_3 << "\t\t" << task3_time << endl;
    }
    else if (task4_time > task2_time && task2_time > task3_time && task3_time > task1_time)
    {
        cout << "NO  Task \t\t"
             << "Task time" << endl;
        cout << "1. " << task_4 << "\t\t" << task4_time << endl;
        cout << "2. " << task_2 << "\t\t" << task2_time << endl;
        cout << "3. " << task_3 << "\t\t" << task3_time << endl;
        cout << "4. " << task_1 << "\t\t" << task1_time << endl;
    }
    else if (task4_time > task1_time && task1_time > task2_time && task2_time > task3_time)
    {
        cout << "NO  Task \t\t"
             << "Task time" << endl;
        cout << "1. " << task_4 << "\t\t" << task4_time << endl;
        cout << "2. " << task_1 << "\t\t" << task1_time << endl;
        cout << "3. " << task_2 << "\t\t" << task2_time << endl;
        cout << "4. " << task_3 << "\t\t" << task3_time << endl;
    }
    else if (task4_time > task1_time && task1_time > task3_time && task3_time > task2_time)
    {
        cout << "NO  Task \t\t"
             << "Task time" << endl;
        cout << "1. " << task_4 << "\t\t" << task4_time << endl;
        cout << "2. " << task_1 << "\t\t" << task1_time << endl;
        cout << "3. " << task_3 << "\t\t" << task3_time << endl;
        cout << "4. " << task_2 << "\t\t" << task2_time << endl;
    }
}