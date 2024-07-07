#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <cstring>
#include <vector>
#include <map>
#include <windows.h>
#include <conio.h>
using namespace std;

// Martin's variable used
int opt = 0;
int cartype = 0;
int bookingday = 0;
int selectcar = 0;
char goback = 'y';
const unsigned int sizeofBID = 7;
int numberBID[sizeofBID];
string full_name;
int x = 0;
int models = 0;
int model3 = 0;
int modelx = 0;
int i,j,a;
int totalcar=0;
void loading();
void printoptions();
void printcardetails();
void modelsplaid();
void model3performance();
void modelxplaid();
void bookingtime();
void printbookingID();
void maxbooking();
void optionpage();
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

// Wilson's varieble used
ofstream writeFile();
bool login();
void registerUser();
int enter_id, enter_password;
bool login_success = false;
char choice_login;
struct Data
{
    int user_id;
    int user_password;
    string user_name;
    int user_age;
    char user_lisence;
};

//Starla's variable used
void s_choice1();
void s_choice2();
void s_choice3();
void s_choice4();

//Zeelin's variable used
void s_login();
void u_login();
void s_menu();

int main()
{
    int choice,x;
    SetConsoleTextAttribute(h, 4);
    cout <<"  XXXXX XXXXXXX XX    X           XXXXXX  xxxxx  x     x xx    x xxxxxxxx\n";
    SetConsoleTextAttribute(h, 6);
    cout <<" X         X    X X   X          X       x     x x     x x x   x    x    \n";
    SetConsoleTextAttribute(h, 14);
    cout <<"X          X    X  X  X         X        x     x x     x x  x  x    x    \n";
    SetConsoleTextAttribute(h, 10);
    cout <<"X          X    X   X X         X        x     x x     x x   x x    x    \n";
    SetConsoleTextAttribute(h, 9);
    cout <<" X         X    X    XX          X       x     x x     x x    xx    x    \n";
    SetConsoleTextAttribute(h, 3);
    cout <<"  XXXXX XXXXXXX X     X XXXXXXX   XXXXXx  xxxxx   xxxxx  x     x    x    \n";
    SetConsoleTextAttribute(h, 5);

    SetConsoleTextAttribute(h,1);
    cout << "*-----------------------------------------*\n";
    cout << "|                                         |\n";
    cout << "|         ";
    SetConsoleTextAttribute(h,9);
    cout << "WELCOME To Tesla System";
    SetConsoleTextAttribute(h,1);
    cout << "         |\n";
    cout << "|                                         |\n";
    cout << "*-----------------------------------------*\n\n";
    SetConsoleTextAttribute(h,3);
    cout << "*----------------------------------------*\n";
    cout << "| ";
    SetConsoleTextAttribute(h,11);
    cout << "Log in as staff     - Press 1";
    SetConsoleTextAttribute(h,3);
    cout << "          |\n";
    cout << "| ";
    SetConsoleTextAttribute(h,11);
    cout << "Log in as user      - Press 2";
    SetConsoleTextAttribute(h,3);
    cout << "          |\n";
    cout << "| ";
    SetConsoleTextAttribute(h,11);
    cout << "Exit Tesla system   - Press 3";
    SetConsoleTextAttribute(h,3);
    cout << "          |\n";
    cout << "*----------------------------------------*\n\n";
    SetConsoleTextAttribute(h,15);
    cout << "Enter your choice    : ";
    cin >> choice;

    if(choice == 1){
        cin.clear();
        cin.ignore(100,'\n');
        system("pause");
        system("CLS");
        s_login();
    }
    else if(choice == 2){
        system("pause");
        system("CLS");
        u_login();
    }
    else if(choice == 3){
        SetConsoleTextAttribute(h, 10);
        cout << "Thank you for using Tesla System!!!" << endl;
        SetConsoleTextAttribute(h,15);
        exit(0);
    }
    else if(choice != 1 && choice != 2){
        SetConsoleTextAttribute(h,4);
        cout << "INVALID NUMBER" << endl;
        SetConsoleTextAttribute(h,15);
        system("pause");
        system("cls");
        cin.clear();
        cin.ignore(100,'\n');
        main();
    }
}
void s_login()
{       
    string staff;
    string pwd;
    string staff1 = "Martin0001",staff2 = "Wilson0002",staff3 = "Starla0003",staff4 = "ZeeLin0004";
    string pwd1 = "mar0001",pwd2 = "wil0002",pwd3 = "sta0003",pwd4 = "zee0004";
    int ch;
    SetConsoleTextAttribute(h,1);
    cout << "*----------------------------------------*\n";
    cout << "|                                        |\n";
    cout << "|      ";
    SetConsoleTextAttribute(h,9);
    cout << "WELCOME To Staff Log In Page";
    SetConsoleTextAttribute(h,1);
    cout << "      |\n";
    cout << "|                                        |\n";
    cout << "*----------------------------------------*\n\n";
    SetConsoleTextAttribute(h,11);
    cout << "\nStaff Code       : ";
    SetConsoleTextAttribute(h,15);
    getline(cin,staff);
    if(staff==staff1){
        SetConsoleTextAttribute(h,14);
        cout << "**ATTENTION: PLEASE INSERT THE PASSWORD CAREFULLY, EVERY CHARACTER YOU PRESS WILL INDICATE AS ONE CHARACTER OF PASSWORD**\n";
        SetConsoleTextAttribute(h,11);
        cout << "Password         : ";
        SetConsoleTextAttribute(h,15);
        ch = getch();
        while (ch != 13)
        {
            pwd.push_back(ch);
            cout << '*';
            ch = getch();
        }
        cout << "\n------------------------------------------------\n";
        if(pwd==pwd1){
            SetConsoleTextAttribute(h,2);
            cout <<"SUCESSFUL LOGIN" << endl;
            cout << "\n";
            SetConsoleTextAttribute(h,15);
            cout << "Great to see you again, ";
            SetConsoleTextAttribute(h,2);
            cout << "Martin";
            SetConsoleTextAttribute(h,15);
            cout << "." << endl;
            system("pause");
            system("CLS");
            s_menu();
        }
        else{
            SetConsoleTextAttribute(h,4);
            cout << "INVALID USERNAME AND PASSWORD" << endl;
            SetConsoleTextAttribute(h,15);
            cout << "\n\nDo you want to go back to the previous page (y/n): ";
            system("pause");
            system("cls");
            cin.clear();
            cin.ignore(100,'\n');
            s_login();    
        }    
    }
    else if(staff==staff2){
        SetConsoleTextAttribute(h,14);
        cout << "**ATTENTION: PLEASE INSERT THE PASSWORD CAREFULLY, EVERY CHARACTER YOU PRESS WILL INDICATE AS ONE CHARACTER OF PASSWORD**\n";
        SetConsoleTextAttribute(h,11);
        cout << "Password         : ";
        SetConsoleTextAttribute(h,15);
        ch = getch();
        while (ch != 13)
        {
            pwd.push_back(ch);
            cout << '*';
            ch = getch();
        }
        cout << "\n------------------------------------------------\n";
        if(pwd==pwd2){
            SetConsoleTextAttribute(h,2);
            cout <<"SUCESSFUL LOGIN" << endl;
            cout << "\n";
            SetConsoleTextAttribute(h,15);
            cout << "Great to see you again, ";
            SetConsoleTextAttribute(h,2);
            cout << "Wilson";
            SetConsoleTextAttribute(h,15);
            cout << "." << endl;
            system("pause");
            system("CLS");
            s_menu();
        }
        else{
            SetConsoleTextAttribute(h,4);
            cout << "INVALID USERNAME AND PASSWORD" << endl;
            SetConsoleTextAttribute(h,15);
            cout << "Press Enter to go back\n";
            system("pause");
            system("cls");
            cin.clear();
            cin.ignore(100,'\n');
            s_login();    
        }            
    }
    else if(staff==staff3){
        SetConsoleTextAttribute(h,14);
        cout << "**ATTENTION: PLEASE INSERT THE PASSWORD CAREFULLY, EVERY CHARACTER YOU PRESS WILL INDICATE AS ONE CHARACTER OF PASSWORD**\n";
        SetConsoleTextAttribute(h,11);
        cout << "Password         : ";
        SetConsoleTextAttribute(h,15);
        ch = getch();
        while (ch != 13)
        {
            pwd.push_back(ch);
            cout << '*';
            ch = getch();
        }
        cout << "\n------------------------------------------------\n";
        if(pwd==pwd3){
            SetConsoleTextAttribute(h,2);
            cout <<"SUCESSFUL LOGIN" << endl;
            cout << "\n";
            SetConsoleTextAttribute(h,15);
            cout << "Great to see you again, ";
            SetConsoleTextAttribute(h,2);
            cout << "Starla";
            SetConsoleTextAttribute(h,15);
            cout << "." << endl;
            system("pause");
            system("CLS");
            s_menu();
        }
        else{
            SetConsoleTextAttribute(h,4);
            cout << "INVALID USERNAME AND PASSWORD" << endl;
            SetConsoleTextAttribute(h,15);
            system("pause");
            system("cls");
            cin.clear();
            cin.ignore(100,'\n');
            s_login();    
        }           
    }
    else if(staff==staff4){
        SetConsoleTextAttribute(h,14);
        cout << "**ATTENTION: PLEASE INSERT THE PASSWORD CAREFULLY, EVERY CHARACTER YOU PRESS WILL INDICATE AS ONE CHARACTER OF PASSWORD**\n";
        SetConsoleTextAttribute(h,11);
        cout << "Password         : ";
        SetConsoleTextAttribute(h,15);
        ch = getch();
        while (ch != 13)
        {
            pwd.push_back(ch);
            cout << '*';
            ch = getch();
        }
        cout << "\n------------------------------------------------\n";
        if(pwd==pwd4){
            SetConsoleTextAttribute(h,2);
            cout <<"SUCESSFUL LOGIN" << endl;
            cout << "\n";
            SetConsoleTextAttribute(h,15);
            cout << "Great to see you again, ";
            SetConsoleTextAttribute(h,2);
            cout << "ZeeLin";
            SetConsoleTextAttribute(h,15);
            cout << "." << endl;
            system("pause");
            system("CLS");
            s_menu();
        }
        else{
            SetConsoleTextAttribute(h,4);
            cout << "INVALID USERNAME AND PASSWORD" << endl;
            SetConsoleTextAttribute(h,15);
            system("pause");
            system("cls");
            cin.clear();
            cin.ignore(100,'\n');
            s_login();    
        }            
    }
    else{
            SetConsoleTextAttribute(h,4);
            cout << "INVALID USERNAME AND PASSWORD" << endl;
            SetConsoleTextAttribute(h,15);
            system("pause");
            system("cls");
            cin.clear();
            cin.ignore(100,'\n');
            s_login();
    }
}
void s_menu()
{
    int menu;
    SetConsoleTextAttribute(h,1);
    cout << "*-----------------------------------------*\n";
    cout << "|                                         |\n";
    cout << "|           ";
    SetConsoleTextAttribute(h,9);
    cout << "MAIN MANU FOR STAFF";
    SetConsoleTextAttribute(h,1);
    cout << "           |\n";
    cout << "|                                         |\n";
    cout << "*-----------------------------------------*\n\n";
    SetConsoleTextAttribute(h,3);
    cout << "*-----------------------------------------*\n";
    cout << "| ";
    SetConsoleTextAttribute(h,11);
    cout << "USER DETAILS         - Press 1";
    SetConsoleTextAttribute(h,3);
    cout << "          |\n";
    cout << "| ";
    SetConsoleTextAttribute(h,11);
    cout << "USER CHECK IN        - Press 2";
    SetConsoleTextAttribute(h,3);
    cout << "          |\n";
    cout << "| ";
    SetConsoleTextAttribute(h,11);
    cout << "LOG OUT              - Press 3";
    SetConsoleTextAttribute(h,3);
    cout << "          |\n";
    cout << "*-----------------------------------------*\n\n";
    SetConsoleTextAttribute(h,11);
    cout << "ENTER YOUR CHOICE      : ";
    SetConsoleTextAttribute(h,15);
    cin >> menu;
    cout << "\n";
    
  switch(menu)
   {
        case 1:
            s_choice1();
            break;
       case 2:
            s_choice2();
            break;
       case 3:
            s_choice3();
          break;
        default:
            cout << "INVALID CHARACTER" << endl;
            cin.clear();
            cin.ignore(100,'\n');
            s_menu();
    }
}
void s_choice1()
{   
    string fullname, bookingcode, drivetime, carmodel;
    string fullname_out, bookingcode_out, drivetime_out, carmodel_out;
    string bookID;
    char yn1;
    int i=1;
    ifstream outputfile;

    cout << "*****************************USER DETAILS PAGE*****************************" << endl;
    cout << "\n";

    outputfile.open("bookinglist.txt");
    if (!outputfile)
    {
        cout << "Error opening file.";
        exit(-1);
    }

    if(outputfile.is_open()){
       while(outputfile >> fullname >> bookingcode >> drivetime >> carmodel){
            cout << "\nUser " << i << endl;
            cout << "-----------------------------------\n";
            cout << "Name          : " << fullname << endl;
            cout << "Booking Code  : " << bookingcode << endl;
            cout << "Drive Time    : " << drivetime << endl;
            cout << "Car Model     : " << carmodel << endl;
            i++;
       }
        outputfile.close();
    }

    cout << "Do you want to return to previous page (Y/N) :";
    cin >> yn1;

    switch(yn1)
    {
        case 'y':
        case 'Y':
            s_menu();
        case 'n':
        case 'N':
            s_choice1();
        default:
            cout << "INVALID CHARACTER" << endl;
            cin.clear();
            cin.ignore(100,'\n');
            s_choice1();
    }
}
void s_choice2()
{
    string fullname2; 
    char yn2, yn3, yn4;

    cout << "*****************************USER CHECK-IN PAGE*****************************" << endl;
    cout << "\n";

    cout << "Enter your name (fill the space with _) :";
    cin >> fullname2;

    cout << "User check-in status (Y/N) :";
    cin >> yn2;

    cout << "Test drive confirmation (Y/N) :";
    cin >> yn3;


    ofstream outData;
    outData.open("user_driven.txt");
    if(outData.is_open()){
    outData << fullname2 <<' '<< yn2 << ' ' << yn3 << endl;
    }
    outData.close();

    cout << "\nDo you want to return to previous page (Y/N) :";
    cin >> yn4;

    switch(yn4)
    {
        case 'Y':
        case 'y':
            s_menu();
        case 'N':
        case 'n':
            s_choice2();
        default:
            cout << "INVALID CHARACTER" << endl;
            cin.clear();
            cin.ignore(100,'\n');
            s_choice2();
    }
 
}

void s_choice3()
{
    cin.clear();
    SetConsoleTextAttribute(h,1);
    cout << "xxxxxxx  x     x  xxxxxxx  x     x  x    x    x     x  xxxxxxx  x     x" <<endl;
    SetConsoleTextAttribute(h,2);
    cout << "   x     x     x  x     x  x x   x  x  x       x   x   x     x  x     x" <<endl;
    SetConsoleTextAttribute(h,3);
    cout << "   x     xxxxxxx  xxxxxxx  x  x  x  xx           x     x     x  x     x" <<endl;
    SetConsoleTextAttribute(h,4);
    cout << "   x     x     x  x     x  x   x x  xx           x     x     x  x     x" <<endl;
    SetConsoleTextAttribute(h,5);
    cout << "   x     x     x  x     x  x    xx  x  x         x     x     x  x     x" <<endl;
    SetConsoleTextAttribute(h,6);
    cout << "   x     x     x  x     x  x     x  x    x       x     xxxxxxx  xxxxxxx\n\n";
    SetConsoleTextAttribute(h,7);
    exit(0);
}

void u_login()
{
    SetConsoleTextAttribute(h, 4);
    cout <<"  XXXXX XXXXXXX XX    X           XXXXXX  xxxxx  x     x xx    x xxxxxxxx\n";
    SetConsoleTextAttribute(h, 6);
    cout <<" X         X    X X   X          X       x     x x     x x x   x    x    \n";
    SetConsoleTextAttribute(h, 14);
    cout <<"X          X    X  X  X         X        x     x x     x x  x  x    x    \n";
    SetConsoleTextAttribute(h, 10);
    cout <<"X          X    X   X X         X        x     x x     x x   x x    x    \n";
    SetConsoleTextAttribute(h, 9);
    cout <<" X         X    X    XX          X       x     x x     x x    xx    x    \n";
    SetConsoleTextAttribute(h, 3);
    cout <<"  XXXXX XXXXXXX X     X XXXXXXX   XXXXXx  xxxxx   xxxxx  x     x    x    \n";
    SetConsoleTextAttribute(h, 5);

    while (login_success != true)
    {
    srand(time(0));
    cout << endl;
    SetConsoleTextAttribute(h, 7);
    cout << "Login Menu" << endl;
    cout << "Type 1 to "; 
    SetConsoleTextAttribute(h, 2);
    cout << "login" << endl;
    SetConsoleTextAttribute(h, 7);
    cout << "Type 2 to "; 
    SetConsoleTextAttribute(h, 9);
    cout << "Register" << endl;
    SetConsoleTextAttribute(h, 7);
    cout << "Type 3 to ";
    SetConsoleTextAttribute(h, 6);
    cout << "exit" << endl;
    SetConsoleTextAttribute(h, 7 );
    cout << "Your choice: ";
    cin >> choice_login;

    cout << endl;
    cout << endl;
    switch (choice_login)
    {
    case '3':
        SetConsoleTextAttribute(h, 10);
        cout << "Thank you for using Tesla app" << endl;
        // cout << "Thank you for using Tesla app, " << u_name << endl;
        cout << "Hava a nice day!" << endl;
        exit(0);

    case '1':
        login();
        break;

    case '2':
        registerUser();
        break;

    default:
        SetConsoleTextAttribute(h, 12);
        cout << "Invalid input, please enter (0/1/2/3/4): " << endl;
        cout << endl;
        break;
    }
    }
    loading();
    system("CLS");
    optionpage();
    exit(0);
}

// User Login function
bool login()
{
    Data forlogin;
    ifstream fin("CustomerData.dat");
    cout << "Please enter your id: ";
    cin >> enter_id;
    // check_id(enter_id, u_id, validation1);
    cout << "Please enter your password: ";
    cin >> enter_password;
    // check_password(enter_password, u_password, validation2);
    //  fin.read((char *)&forlogin, sizeof(forlogin));
    map<int, int> mp;
    int user_id, user_password, user_age;
    string user_name;
    char user_lisence;
    while (fin >> user_id >> user_password >> user_name >> user_age >> user_lisence)
    {

        forlogin.user_id = user_id;
        forlogin.user_password = user_password;
        mp[user_id] = user_password;
    }
    if (mp[enter_id] == enter_password)
    {
        cout << "Login Success! Welcome to Tesla !";
        login_success = true;
        cout << endl;
    }
    if (mp[enter_id] != enter_password)
    {
        SetConsoleTextAttribute(h, 12);
        cout << "Login Error! Return to Login Page.." << endl;
        SetConsoleTextAttribute(h, 7);
        cout << endl;
        cout << endl;
        login_success = false;
    }
    fin.close();
    return false;
}

// User Register function
void registerUser()
{
    ofstream outFile = writeFile();
    char u_license;
    int u_age, u_id, u_password;
    string u_name;

    cin.ignore(100, '\n');
    cout << "Please enter your name(Please use '_' instead of space): ";
    getline(cin, u_name);

    cout << "Please enter your age: ";
    cin >> u_age;

    cout << "Do you have a driving license?(Y/N): ";
    cin >> u_license;

    cout << "Enter your password(Must be integer): ";
    cin >> u_password;

    u_id = rand() % 9000000 + 1000000;

    outFile << u_id << " ";
    outFile << u_password << " ";
    outFile << u_name << " ";
    outFile << u_age << " ";
    outFile << u_license << "\n";
    outFile.close();

    cout << endl;
    cout << "Sign up successful! Your id is #" << u_id << endl;
    cout << "(You may use your ID to log in)" << endl;
    cout << endl;
}

/// ------- Get ofstream ---------
ofstream writeFile()
{
    ofstream outFile;

    outFile.open("CustomerData.dat", ios_base::app);

    if (!outFile)
    {
        cout << "Error opening database file";
        exit(1);
    }
    else
    {
        return outFile;
    }
}

//----------
//----------
// Martin's Function
//----------
//----------

// User option page function
//menu for option page
void printoptions(){
    SetConsoleTextAttribute(h,1);
    cout << "---------------------------------------------------"<<endl;
    cout << "|     Welcome to Cin_Cout registration system     |"<<endl;
    cout << "---------------------------------------------------"<<endl;
    SetConsoleTextAttribute(h,7);
    cout << "|                                                 |"<<endl;
    cout << "| Details of the cars we offered-PRESS 1          |"<<endl;
    cout << "| Booking for test drive        -PRESS 2          |"<<endl;
    cout << "| Details of booking ticket     -PRESS 3          |"<<endl;
    cout << "| Log-out                       -PRESS 4          |"<<endl;
    cout << "---------------------------------------------------"<<endl;
}

//loading screen
void loading(){
    cout << "loading";
for (i=0; i<=4; i++)
{
    for (j = 0; j<100000000; j++)
    a=j;
    cout << ".";
}
}

//function for printing car details
void printcardetails(){
    SetConsoleTextAttribute(h,1);
    cout << "-----------------------------------------------------------------"<<endl;
    cout << "|                          CAR DETIALS                          |"<<endl;
    cout << "-----------------------------------------------------------------"<<endl;
    SetConsoleTextAttribute(h,7);
    cout << "| Please choose the car to wish to better understand:           |"<<endl;
    cout << "| Tesla Model S Plaid                               -PRESS 1    |"<<endl;
    cout << "| Tesla Model 3 Performance                         -PRESS 2    |"<<endl;
    cout << "| Tesla Model X Plaid                               -PRESS 3    |"<<endl;
    cout << "| Back to Option page                               -PRESS 4    |"<<endl;
    cout << "-----------------------------------------------------------------"<<endl;
}

//details for model S plaid
void modelsplaid(){
        system("CLS");
        cout << "**********Tesla Model S Plaid(5 person seat)**********"<<endl<<endl;
        cout << "***************PERFORMANCE***************"<<endl;
        cout << "Range\t\t:348-396mi"<<endl;
        cout << "0 to 60mph\t:1.99s"<<endl;
        cout << "Top speed\t:200mph"<<endl;
        cout << "Peak power\t:1020hp"<<endl<<endl;
        cout << "***************INTERIOR***************"<<endl;
        cout << "Touchscreen\t:17 inch (2200 x 1300) resolution"<<endl;
        cout << "Steering\t:Yoke steering"<<endl;
        cout << "Interior\t:Carbon fiber"<<endl;
        cout << "Audio\t\t:22-speaker audio with active Road Noise Reduction"<<endl<<endl;
        cout << "*************** AUTOPILOT***************"<<endl;
        cout << "**NOTE: The full self-driving capability is not available right now!!!**"<<endl<<endl;
        cout << "Navigation on autopilit"<<endl;
        cout << "Auto lane changer"<<endl;
        cout << "Autopark"<<endl;
        cout << "Summon"<<endl;
        cout << "Smart summon"<<endl<<endl<<endl;
        cout << "**Information may change please visit the tesla website for more information!**";
}

//details for model 3 performance
void model3performance(){
        system("CLS");
        cout << "**********Tesla Model 3 Performance(5 person seat)**********"<<endl<<endl;
        cout << "***************PERFORMANCE***************"<<endl;
        cout << "Range\t\t:315mi"<<endl;
        cout << "0 to 60mph\t:3.1s"<<endl;
        cout << "Top speed\t:162mph"<<endl;
        cout << "Drivetrain\t:Dual Motor All-wheel drive"<<endl<<endl;
        cout << "***************INTERIOR***************"<<endl;
        cout << "Touchscreen\t:15 inch display"<<endl;
        cout << "Steering\t:Yoke steering"<<endl;
        cout << "Interior\t:Vegan interior"<<endl;
        cout << "Audio\t\t:13 speakers, 1 subwoofer, 2 amps, and immersive sound"<<endl<<endl;
        cout << "*************** AUTOPILOT***************"<<endl;
        cout << "**NOTE: The full self-driving capability is not available right now!!!**"<<endl<<endl;
        cout << "Navigation on autopilit"<<endl;
        cout << "Auto lane changer"<<endl;
        cout << "Autopark"<<endl;
        cout << "Summon"<<endl;
        cout << "Smart summon"<<endl<<endl<<endl;
        cout << "**Information may change please visit the tesla website for more information!**";
}

//details for model x plaid
void modelxplaid(){
        system("CLS");
        cout << "**********Tesla Model X Plaid (7 person car)**********"<<endl<<endl;
        cout << "***************PERFORMANCE***************"<<endl;
        cout << "Range\t\t:310-335mi"<<endl;
        cout << "0 to 60mph\t:2.5s"<<endl;
        cout << "Top speed\t:163mph"<<endl;
        cout << "Drivetrain\t:Tri Motor All-wheel drive"<<endl<<endl;
        cout << "***************INTERIOR***************"<<endl;
        cout << "Touchscreen\t:17 inch (2200 x 1300) resolution"<<endl;
        cout << "Steering\t:Yoke steering"<<endl;
        cout << "Interior\t:Refer to Tesla website"<<endl;
        cout << "Audio\t\t:2-speaker, 960-watt audio system"<<endl<<endl;
        cout << "*************** AUTOPILOT***************"<<endl;
        cout << "**NOTE: The full self-driving capability is not available right now!!!**"<<endl<<endl;
        cout << "Navigation on autopilit"<<endl;
        cout << "Auto lane changer"<<endl;
        cout << "Autopark"<<endl;
        cout << "Summon"<<endl;
        cout << "Smart summon"<<endl<<endl<<endl;
        cout << "**Information may change please visit the tesla website for more information!**";
}

//booking time
void bookingtime(){
    SetConsoleTextAttribute(h,1);
    cout << "----------------------------------------------------------------------------------------------"<<endl;
    cout << "|                                     BOOKING FOR TEST DRIVE                                 |"<<endl;
    cout << "----------------------------------------------------------------------------------------------"<<endl;
    SetConsoleTextAttribute(h,7);
    cout << "| Come and have fun by driving a Tesla on 1st of October at Subnag International Airport!!   |"<<endl;
    cout << "|                                                                                            |"<<endl;
    cout << "| MORNING SECTION                                                                            |"<<endl;
    cout << "| 9.00AM TO 10.00AM     -PRESS 1                                                             |"<<endl;
    cout << "| 10.00AM TO 11.00AM    -PRESS 2                                                             |"<<endl;
    cout << "|                                                                                            |"<<endl;
    cout << "| AFTERNOON SECTION                                                                          |"<<endl;
    cout << "| 2.00PM TO 3.00PM      -PRESS 3                                                             |"<<endl;
    cout << "| 3.00PM TO 4.00PM      -PRESS 4                                                             |"<<endl;
    cout << "|                                                                                            |"<<endl;
    cout << "| NIGHT SECTION                                                                              |"<<endl;
    cout << "| 8.00PM TO 9.00PM      -PRESS 5                                                             |"<<endl;
    cout << "| 9.00PM TO 10.00PM     -PRESS 6                                                             |"<<endl;
    cout << "----------------------------------------------------------------------------------------------"<<endl<<endl;
}

//generates one booking ID for test drive
void printbookingID(){
    srand(time(0));

    for(int x =0; x < sizeofBID; x++){
        numberBID[x] = rand()%9;
        cout << numberBID[x];
    }    
}

//validate for test drive
void maxbooking(){
    SetConsoleTextAttribute(h,4);
    cout<< "The booking capacity has reach it's limit."<<endl;
    cout << "UNSUCCESSFUL BOOKING"<<endl;
    SetConsoleTextAttribute(h,7);
}

//option page
void optionpage(){
    while(goback== 'y' || goback== 'Y') //if user wants to go back option page
{
cin.clear();
printoptions(); //print option page
cout << "\n\nPlease enter your choice: ";
cin >> opt;

//validation
while (!(opt==1 || opt==2 || opt==3 || opt==4))
{
    SetConsoleTextAttribute(h,4);
    cout << "INVALID input"<<endl;
    SetConsoleTextAttribute(h,7);
    cout << "Please only input (1/2/3/4): ";
    cin.clear();
    cin.ignore(100, '\n');
    cin >> opt;
}
system("pause");
system("CLS");

//if else statement for option page
    //choice 1 (car details)
    if(opt==1){

    printcardetails();
    cout << "\nPlease enter your choice: ";
    cin >> cartype;
    while(!(cartype==1 || cartype==2 || cartype==3 || cartype==4))
    {
        SetConsoleTextAttribute(h,4);
        cout << "INVALID input"<<endl;
        SetConsoleTextAttribute(h,7);
        cout << "Please only input (1/2/3/4): ";
        cin.clear();
        cin.ignore(100, '\n');
        cin >> cartype;
    }

    if(cartype==1){
        modelsplaid(); //print car details for model s
    }

    else if(cartype==2){
        model3performance(); //print car details for model 3
    }

    else if(cartype==3){
        modelxplaid(); //print car details for model x
    }
    }

    //choice 2 booking time
    else if(opt==2){
    cout << "Can you put in your full name ";
    SetConsoleTextAttribute(h,3);
    cout << "(If your name got space please include _ for the space): ";
    SetConsoleTextAttribute(h,7);
    cin.ignore(100,'\n');
    getline(cin,full_name);
    system("CLS");
    bookingtime();

    cout << "\n\nPlease choose (1/2/3/4/5/6): ";
    cin >> bookingday;

    //validation
    while(!(bookingday==1 || bookingday==2 || bookingday==3 || bookingday==4 || bookingday==5 || bookingday==6)){
        SetConsoleTextAttribute(h,4);
        cout << "Invalid input"<<endl;
        SetConsoleTextAttribute(h,7);
        cout << "Please enter only(1/2/3/4/5/6): ";
        cin.clear();
        cin.ignore(100, '\n');
        cin >> bookingday;
    }
    
    //booking time for 9.00am to 10.00am
    if(bookingday==1){
    system("CLS");
    cout << "Please choose your car: " <<endl<<endl;
    cout << "Tesla Model S Plaid(5 person seat)- PRESS 1"<<endl;
    cout << "Tesla Model 3 Performance(5 person seat)- PRESS 2"<<endl;
    cout << "Tesla Model X Plaid (7 person car)- PRESS 3"<<endl;
    cout << "Please enter your choice: ";
    cin >> selectcar; 
    while(!(selectcar==1 || selectcar==2 || selectcar==3)){
        SetConsoleTextAttribute(h,4);
        cout << "Invalid input"<<endl;
        SetConsoleTextAttribute(h,7);
        cout << "Please only enter (1/2/3): ";
        cin.clear();
        cin.ignore(100, '\n');
        cin >> selectcar;
    }

    if(totalcar>=5){
        maxbooking();
        goto exit;
    }

    if(selectcar==1){
        loading();
        SetConsoleTextAttribute(h,10);
        cout <<"\n\nBooking is SUCCESSFUL!"<<endl;
        SetConsoleTextAttribute(h,7);
        cout << "Your booking ID is: #TSLA";
        printbookingID();
        SetConsoleTextAttribute(h,14);
        cout <<"\n\n***ATTENTION! PLEASE TAKE A SCREENSHOT OF THIS PAGE FOR OUR STAFF TO CHECK."<<endl;
        SetConsoleTextAttribute(h,7);
        models++;
        ofstream martinsFile;  //output data into file
        martinsFile.open("bookinglist.txt", ios::app);
        if(martinsFile.is_open()){
            srand(time(0));
             martinsFile <<full_name << ' ' << "#TSLA" << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9;
             martinsFile << ' ' << "09.00am-10.00am" << ' ' << "Model-S\n" <<endl;
        }
        else{
            martinsFile << "ERROR";
        }
        
        martinsFile.close();
    }

    else if(selectcar==2){
        loading();
        SetConsoleTextAttribute(h,10);
        cout <<"\n\nBooking is SUCCESSFUL!"<<endl;
        SetConsoleTextAttribute(h,7);
        cout << "Your booking ID is: #TSLA";
        printbookingID();
        SetConsoleTextAttribute(h,14);
        cout <<"\n\n***ATTENTION! PLEASE TAKE A SCREENSHOT OF THIS PAGE FOR OUR STAFF TO CHECK."<<endl;
        SetConsoleTextAttribute(h,7);
        model3++;
        ofstream martinsFile;
        martinsFile.open("bookinglist.txt", ios::app);
        if(martinsFile.is_open()){
            srand(time(0));
            martinsFile <<full_name << ' ' <<"#TSLA" << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9;
            martinsFile << ' ' << "09.00am-10.00am" << ' ' << "Model-3\n";
        }
        else{
           martinsFile << "ERROR";
        }
        
       martinsFile.close();
    }

    else if(selectcar==3){
        loading();
        SetConsoleTextAttribute(h,10);
        cout <<"\n\nBooking is SUCCESSFUL!"<<endl;
        SetConsoleTextAttribute(h,7);
        cout << "Your booking ID is: #TSLA";
        printbookingID();
        SetConsoleTextAttribute(h,14);
        cout <<"\n\n***ATTENTION! PLEASE TAKE A SCREENSHOT OF THIS PAGE FOR OUR STAFF TO CHECK."<<endl;
        SetConsoleTextAttribute(h,7);
        modelx++;
        ofstream martinsFile;
        martinsFile.open("bookinglist.txt", ios::app);
        if(martinsFile.is_open()){
            srand(time(0));
             martinsFile <<full_name << ' ' <<"#TSLA" << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9;
            martinsFile << ' ' << "09.00am-10.00am" << ' ' << "Model-X\n" << endl;
        }
        else{
           martinsFile << "ERROR";
        }
        
       martinsFile.close();
    }
    }

    //booking time for 10.00am to 11.00am
    else if(bookingday==2){
    system("CLS");
    cout << "Please choose your car: " <<endl<<endl;
    cout << "Tesla Model S Plaid(5 person seat)- PRESS 1"<<endl;
    cout << "Tesla Model 3 Performance(5 person seat)- PRESS 2"<<endl;
    cout << "Tesla Model X Plaid (7 person car)- PRESS 3"<<endl;
    cout << "Please enter your choice: ";
    cin >> selectcar; 
    while(!(selectcar==1 || selectcar==2 || selectcar==3)){
        SetConsoleTextAttribute(h,4);
        cout << "Invalid input"<<endl;
        SetConsoleTextAttribute(h,7);
        cout << "Please only enter (1/2/3): ";
        cin.clear();
        cin.ignore(100, '\n');
        cin >> selectcar;
    }

    if(totalcar>=5){
        maxbooking();
        goto exit;
    }

    if(selectcar==1){
        loading();
        SetConsoleTextAttribute(h,10);
        cout <<"\n\nBooking is SUCCESSFUL!"<<endl;
        SetConsoleTextAttribute(h,7);
        cout << "Your booking ID is: #TSLA";
        printbookingID();
        SetConsoleTextAttribute(h,14);
        cout <<"\n\n***ATTENTION! PLEASE TAKE A SCREENSHOT OF THIS PAGE FOR OUR STAFF TO CHECK."<<endl;
        SetConsoleTextAttribute(h,7);
        models++;
        ofstream martinsFile;
        martinsFile.open("bookinglist.txt", ios::app);
        if(martinsFile.is_open()){
            srand(time(0));
            martinsFile <<full_name << ' ' << "#TSLA" << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9;
            martinsFile << ' ' << "10.00am-11.00am" << ' ' << "Model-S\n" << endl;
        }
        else{
            martinsFile << "ERROR";
        }
        
        martinsFile.close();
        
    }

    else if(selectcar==2){
        loading();
        SetConsoleTextAttribute(h,10);
        cout <<"\n\nBooking is SUCCESSFUL!"<<endl;
        SetConsoleTextAttribute(h,7);
        cout << "Your booking ID is: #TSLA";
        printbookingID();
        SetConsoleTextAttribute(h,14);
        cout <<"\n\n***ATTENTION! PLEASE TAKE A SCREENSHOT OF THIS PAGE FOR OUR STAFF TO CHECK."<<endl;
        SetConsoleTextAttribute(h,7);
        model3++;
        ofstream martinsFile;
        martinsFile.open("bookinglist.txt", ios::app);
        if(martinsFile.is_open()){
            srand(time(0));
            martinsFile <<full_name << ' ' << "#TSLA" << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9;
            martinsFile << ' ' << "10.00am-11.00am" << ' ' << "Model-3\n" << endl;
        }
        else{
           martinsFile << "ERROR";
        }
        
       martinsFile.close();
    }

     else if(selectcar==3){
        loading();
        SetConsoleTextAttribute(h,10);
        cout <<"\n\nBooking is SUCCESSFUL!"<<endl;
        SetConsoleTextAttribute(h,7);
        cout << "Your booking ID is: #TSLA";
        printbookingID();
        SetConsoleTextAttribute(h,14);
        cout <<"\n\n***ATTENTION! PLEASE TAKE A SCREENSHOT OF THIS PAGE FOR OUR STAFF TO CHECK."<<endl;
        SetConsoleTextAttribute(h,7);
        modelx++;
        ofstream martinsFile;
        martinsFile.open("bookinglist.txt", ios::app);
        if(martinsFile.is_open()){
            srand(time(0));
            martinsFile <<full_name << ' ' << "#TSLA" << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9;
            martinsFile << ' ' << "10.00am-11.00am" << ' ' << "Model-X\n" << endl;
        }
        else{
           martinsFile << "ERROR";
        }
        
       martinsFile.close();
    }

    }

    //booking time for 2.00pm to 3.00pm
    else if(bookingday==3){
    system("CLS");
    cout << "Please choose your car: " <<endl<<endl;
    cout << "Tesla Model S Plaid(5 person seat)- PRESS 1"<<endl;
    cout << "Tesla Model 3 Performance(5 person seat)- PRESS 2"<<endl;
    cout << "Tesla Model X Plaid (7 person car)- PRESS 3"<<endl;
    cout << "Please enter your choice: ";
    cin >> selectcar; 
    while(!(selectcar==1 || selectcar==2 || selectcar==3)){
        SetConsoleTextAttribute(h,4);
        cout << "Invalid input "<<endl;
        SetConsoleTextAttribute(h,4);
        cout << "Please only input (1/2/3): ";
        cin.clear();
        cin.ignore(100, '\n');
        cin >> selectcar;
    }

    if(totalcar>=5){
        maxbooking();
        goto exit;
    }

    if(selectcar==1){
        loading();
        SetConsoleTextAttribute(h,10);
        cout <<"\n\nBooking is SUCCESSFUL!"<<endl;
        SetConsoleTextAttribute(h,7);
        cout << "Your booking ID is: #TSLA";
        printbookingID();
        SetConsoleTextAttribute(h,14);
        cout <<"\n\n***ATTENTION! PLEASE TAKE A SCREENSHOT OF THIS PAGE FOR OUR STAFF TO CHECK."<<endl;
        SetConsoleTextAttribute(h,7);
        models++;
        ofstream martinsFile;
        martinsFile.open("bookinglist.txt", ios::app);
        if(martinsFile.is_open()){
            srand(time(0));
             martinsFile <<full_name << ' ' << "#TSLA" << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9;
            martinsFile << ' ' << "02.00pm-03.00pm" << ' ' << "Model-S\n" << endl;
        }
        else{
            martinsFile << "ERROR";
        }
        
        martinsFile.close();
        
    }

    else if(selectcar==2){
        loading();
        SetConsoleTextAttribute(h,10);
        cout <<"\n\nBooking is SUCCESSFUL!"<<endl;
        SetConsoleTextAttribute(h,7);
        cout << "Your booking ID is: #TSLA";
        printbookingID();
        SetConsoleTextAttribute(h,14);
        cout <<"\n\n***ATTENTION! PLEASE TAKE A SCREENSHOT OF THIS PAGE FOR OUR STAFF TO CHECK."<<endl;
        SetConsoleTextAttribute(h,7);
        model3++;
        ofstream martinsFile;
        martinsFile.open("bookinglist.txt", ios::app);
        if(martinsFile.is_open()){
            srand(time(0));
            martinsFile <<full_name << ' ' <<"#TSLA" << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9;
            martinsFile << ' ' << "02.00pm-03.00pm" << ' ' << "Model-3\n" << endl;
        }
        else{
           martinsFile << "ERROR";
        }
        
       martinsFile.close();
    }

     else if(selectcar==3){
        loading();
        SetConsoleTextAttribute(h,10);
        cout <<"\n\nBooking is SUCCESSFUL!"<<endl;
        SetConsoleTextAttribute(h,7);
        cout << "Your booking ID is: #TSLA";
        printbookingID();
        SetConsoleTextAttribute(h,14);
        cout <<"\n\n***ATTENTION! PLEASE TAKE A SCREENSHOT OF THIS PAGE FOR OUR STAFF TO CHECK."<<endl;
        SetConsoleTextAttribute(h,7);
        modelx++;
        ofstream martinsFile;
        martinsFile.open("bookinglist.txt", ios::app);
        if(martinsFile.is_open()){
            srand(time(0));
            martinsFile <<full_name << ' ' << "#TSLA" << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9;
            martinsFile << ' ' << "02.00pm-03.00pm" << ' ' << "Model-X\n" << endl;
        }
        else{
           martinsFile << "ERROR";
        }
        
       martinsFile.close();
    }
    }

    //booking time for 3.00pm to 4.00pm
    else if(bookingday==4)
    {
    system("CLS");
    cout << "Please choose your car: " <<endl<<endl;
    cout << "Tesla Model S Plaid(5 person seat)- PRESS 1"<<endl;
    cout << "Tesla Model 3 Performance(5 person seat)- PRESS 2"<<endl;
    cout << "Tesla Model X Plaid (7 person car)- PRESS 3"<<endl;
    cout << "Please enter your choice ";
    cin >> selectcar; 
    while(!(selectcar==1 || selectcar==2 || selectcar==3)){
        SetConsoleTextAttribute(h,4);
        cout << "Invalid input"<<endl;
        SetConsoleTextAttribute(h,7);
        cout << "Please only enter (1/2/3): ";
        cin.clear();
        cin.ignore(100, '\n');
        cin >> selectcar;
    }

    if(totalcar>=5){
        maxbooking();
        goto exit;
    }

    if(selectcar==1){
        loading();
        SetConsoleTextAttribute(h,10);
        cout <<"\n\nBooking is SUCCESSFUL!"<<endl;
        SetConsoleTextAttribute(h,7);
        cout << "Your booking ID is: #TSLA";
        printbookingID();
        SetConsoleTextAttribute(h,14);
        cout <<"\n\n***ATTENTION! PLEASE TAKE A SCREENSHOT OF THIS PAGE FOR OUR STAFF TO CHECK."<<endl;
        SetConsoleTextAttribute(h,7);
        models++;
        ofstream martinsFile;
        martinsFile.open("bookinglist.txt", ios::app);
        if(martinsFile.is_open()){
            srand(time(0));
             martinsFile <<full_name << ' ' << "#TSLA" << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9;
            martinsFile << ' ' << "03.00pm-04.00pm" << ' ' << "Model-S\n" << endl;
        }
        else{
            martinsFile << "ERROR";
        }
        
        martinsFile.close();
        
    }

    else if(selectcar==2){
        loading();
        SetConsoleTextAttribute(h,10);
        cout <<"\n\nBooking is SUCCESSFUL!";
        SetConsoleTextAttribute(h,7);
        cout << "Your booking ID is: #TSLA";
        printbookingID();
        SetConsoleTextAttribute(h,14);
        cout <<"\n\n***ATTENTION! PLEASE TAKE A SCREENSHOT OF THIS PAGE FOR OUR STAFF TO CHECK."<<endl;
        SetConsoleTextAttribute(h,7);
        model3++;
        ofstream martinsFile;
        martinsFile.open("bookinglist.txt", ios::app);
        if(martinsFile.is_open()){
            srand(time(0));
             martinsFile <<full_name << ' ' << "#TSLA" << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9;
            martinsFile << ' ' << "03.00pm-04.00pm" << ' ' << "Model-3\n" << endl;
        }
        else{
           martinsFile << "ERROR";
        }
        
       martinsFile.close();
    }

     else if(selectcar==3){
        loading();
        SetConsoleTextAttribute(h,10);
        cout <<"\n\nBooking is SUCCESSFUL!"<<endl;
        SetConsoleTextAttribute(h,7);
        cout << "Your booking ID is: #TSLA";
        printbookingID();
        SetConsoleTextAttribute(h,14);
        cout <<"\n\n***ATTENTION! PLEASE TAKE A SCREENSHOT OF THIS PAGE FOR OUR STAFF TO CHECK."<<endl;
        SetConsoleTextAttribute(h,7);
        modelx++;
        ofstream martinsFile;
        martinsFile.open("bookinglist.txt", ios::app);
        if(martinsFile.is_open()){
            srand(time(0));
             martinsFile <<full_name << ' ' << "#TSLA" << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9;
            martinsFile << ' ' << "03.00pm-04.00pm" << ' ' << "Model-X\n" << endl;
        }
        else{
           martinsFile << "ERROR";
        }
        
       martinsFile.close();
    }    
    }

    //booking time for 8.00pm to 9.00pm
    else if(bookingday==5)
    {
    system("CLS");
    cout << "Please choose your car: " <<endl<<endl;
    cout << "Tesla Model S Plaid(5 person seat)- PRESS 1"<<endl;
    cout << "Tesla Model 3 Performance(5 person seat)- PRESS 2"<<endl;
    cout << "Tesla Model X Plaid (7 person car)- PRESS 3"<<endl;
    cout << "Please enter your choice: ";
    cin >> selectcar; 
    while(!(selectcar==1 || selectcar==2 || selectcar==3)){
        SetConsoleTextAttribute(h,4);
        cout << "Invalid input"<<endl;
        SetConsoleTextAttribute(h,7);
        cout << "Please only input (1/2/3): ";
        cin.clear();
        cin.ignore(100, '\n');
        cin >> selectcar;
    }

    if(totalcar>=5){
        maxbooking();
        goto exit;
    }

    if(selectcar==1){
        loading();
        SetConsoleTextAttribute(h,10);
        cout <<"\n\nBooking is SUCCESSFUL!"<<endl;
        SetConsoleTextAttribute(h,7);
        cout << "Your booking ID is: #TSLA";
        printbookingID();
        SetConsoleTextAttribute(h,14);
        cout <<"\n\n***ATTENTION! PLEASE TAKE A SCREENSHOT OF THIS PAGE FOR OUR STAFF TO CHECK."<<endl;
        SetConsoleTextAttribute(h,7);
        models++;
        ofstream martinsFile;
        martinsFile.open("bookinglist.txt", ios::app);
        if(martinsFile.is_open()){
            srand(time(0));
             martinsFile <<full_name << ' ' << "#TSLA" << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9;
            martinsFile << ' ' << "08.00pm-09.00pm" << ' ' << "Model-S\n" << endl;
        }
        else{
            martinsFile << "ERROR";
        }
        
        martinsFile.close();
        
    }

    else if(selectcar==2){
        loading();
        SetConsoleTextAttribute(h,10);
        cout <<"\n\nBooking is SUCCESSFUL!"<<endl;
        SetConsoleTextAttribute(h,7);
        cout << "Your booking ID is: #TSLA";
        printbookingID();
        SetConsoleTextAttribute(h,14);
        cout <<"\n\n***ATTENTION! PLEASE TAKE A SCREENSHOT OF THIS PAGE FOR OUR STAFF TO CHECK."<<endl;
        SetConsoleTextAttribute(h,7);
        model3++;
        ofstream martinsFile;
        martinsFile.open("bookinglist.txt", ios::app);
        if(martinsFile.is_open()){
            srand(time(0));
            martinsFile <<full_name << ' ' << "#TSLA" << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9;
            martinsFile << ' ' << "08.00pm-09.00pm" << ' ' << "Model-3\n" << endl;
        }
        else{
           martinsFile << "ERROR";
        }
        
       martinsFile.close();
    }

     else if(selectcar==3){
        loading();
        SetConsoleTextAttribute(h,10);
        cout <<"\n\nBooking is SUCCESSFUL!"<<endl;
        SetConsoleTextAttribute(h,7);
        cout << "Your booking ID is: #TSLA";
        printbookingID();
        SetConsoleTextAttribute(h,14);
        cout <<"\n\n***ATTENTION! PLEASE TAKE A SCREENSHOT OF THIS PAGE FOR OUR STAFF TO CHECK."<<endl;
        SetConsoleTextAttribute(h,7);
        modelx++;
        ofstream martinsFile;
        martinsFile.open("bookinglist.txt", ios::app);
        if(martinsFile.is_open()){
            srand(time(0));
             martinsFile <<full_name << ' ' << "#TSLA" << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9;
            martinsFile << ' ' << "08.00pm-09.00pm" << ' ' << "Model-X\n" << endl;
        }
        else{
           martinsFile << "ERROR";
        }
        
       martinsFile.close();
    }
    }

    //booking time for 9.00pm to 10.00pm
    else if(bookingday==6)
    {
    system("CLS");
    cout << "Please choose your car: " <<endl<<endl;
    cout << "Tesla Model S Plaid(5 person seat)- PRESS 1"<<endl;
    cout << "Tesla Model 3 Performance(5 person seat)- PRESS 2"<<endl;
    cout << "Tesla Model X Plaid (7 person car)- PRESS 3"<<endl;
    cout << "Please enter your choice: ";
    cin >> selectcar; 
    while(!(selectcar==1 || selectcar==2 || selectcar==3)){
        SetConsoleTextAttribute(h,4);
        cout << "Invalid input"<<endl;
        SetConsoleTextAttribute(h,7);
        cout << "Please only enter (1/2/3): ";
        cin.clear();
        cin.ignore(100, '\n');
        cin >> selectcar;
    }

    if(totalcar>=5){
        maxbooking();
        goto exit;
    }

    if(selectcar==1){
        loading();
        SetConsoleTextAttribute(h,10);
        cout <<"\n\nBooking is SUCCESSFUL!"<<endl;
        SetConsoleTextAttribute(h,7);
        cout << "Your booking ID is: #TSLA";
        printbookingID();
        SetConsoleTextAttribute(h,14);
        cout <<"\n\n***ATTENTION! PLEASE TAKE A SCREENSHOT OF THIS PAGE FOR OUR STAFF TO CHECK."<<endl;
        SetConsoleTextAttribute(h,7);
        models++;
        ofstream martinsFile;
        martinsFile.open("bookinglist.txt", ios::app);
        if(martinsFile.is_open()){
            srand(time(0));
             martinsFile <<full_name << ' ' << "#TSLA" << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9;
            martinsFile << ' ' << "09.00pm-10.00pm" << ' ' << "Model-S\n" << endl;
        }
        else{
            martinsFile << "ERROR";
        }
        
        martinsFile.close();
        
    }

    else if(selectcar==2){
        loading();
        SetConsoleTextAttribute(h,10);
        cout <<"\n\nBooking is SUCCESSFUL!"<<endl;
        SetConsoleTextAttribute(h,7);
        cout << "Your booking ID is: #TSLA";
        printbookingID();
        SetConsoleTextAttribute(h,14);
        cout <<"\n\n***ATTENTION! PLEASE TAKE A SCREENSHOT OF THIS PAGE FOR OUR STAFF TO CHECK."<<endl;
        SetConsoleTextAttribute(h,7);
        model3++;
        ofstream martinsFile;
        martinsFile.open("bookinglist.txt", ios::app);
        if(martinsFile.is_open()){
            srand(time(0));
             martinsFile <<full_name << ' ' << "#TSLA" << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9;
            martinsFile << ' ' << "09.00pm-10.00pm" << ' ' << "Model-3\n" << endl;
        }
        else{
           martinsFile << "ERROR";
        }
        
       martinsFile.close();
    }

     else if(selectcar==3){
        loading();
        SetConsoleTextAttribute(h,10);
        cout <<"\n\nBooking is SUCCESSFUL!"<<endl;
        SetConsoleTextAttribute(h,7);
        cout << "Your booking ID is: #TSLA";
        printbookingID();
        SetConsoleTextAttribute(h,14);
        cout <<"\n\n***ATTENTION! PLEASE TAKE A SCREENSHOT OF THIS PAGE FOR OUR STAFF TO CHECK."<<endl;
        SetConsoleTextAttribute(h,7);
        modelx++;
        ofstream martinsFile;
        martinsFile.open("bookinglist.txt", ios::app);
        if(martinsFile.is_open()){
            srand(time(0));
             martinsFile <<full_name << ' ' << "#TSLA" << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9 << rand()%9;
            martinsFile << ' ' << "09.00pm-10.00pm" << ' ' << "Model-X\n" << endl;
        }
        else{
           martinsFile << "ERROR";
        }
        
       martinsFile.close();
    }
    }
    }

    //choice 3 (booking ticket)
    else if(opt==3)
    {
    totalcar= models + model3 + modelx;
    SetConsoleTextAttribute(h,1);
    cout << "-------------------------------------------------------------------------"<<endl;
    cout << "|                          YOUR BOOKING TICKET                          |"<<endl;
    cout << "|                                                                       |"<<endl;
    cout << "-------------------------------------------------------------------------"<<endl;
    SetConsoleTextAttribute(h,7);
    cout << "|Number of tesla vehicles that you have booked                          |"<<endl;
    cout << "|Tesla Model S Plaid: " << models <<             "\t\t\t\t\t\t\t|"<<endl;
    cout << "|Tesla Model 3 Performance: " << model3 <<       "\t\t\t\t\t\t|"<<endl;
    cout << "|Tesla Model X Plaid: " << modelx <<             "\t\t\t\t\t\t\t|"<<endl;
    cout << "------------------------------------------------------------------------"<<endl;
    cout << "|Total vehicles: " << totalcar <<                "\t\t\t\t\t\t\t|"<<endl;
    cout << "-------------------------------------------------------------------------"<<endl;
    cout << "-------------------------------------------------------------------------"<<endl;
    cout << "| FULL NAME    BOOKING ID      TIME SLOT       CAR TYPE                 |"<<endl;
    cout << "-------------------------------------------------------------------------"<<endl;

    ifstream outputfile;
    outputfile.open("bookinglist.txt");
    if(outputfile.is_open()){
       string name;
       string id;
       string time;
       string CAR;
       while(outputfile >> name >> id >> time >> CAR){
            cout << name << " , " << id << " , " << time << " , " <<CAR<<endl;
       }
        outputfile.close();
   }
    }

    //choice 4(log out)
    else if(opt==4){
    SetConsoleTextAttribute(h,10);
    cout << "Your account has successfully logged-out from our system!"<<endl<<endl;
    SetConsoleTextAttribute(h,2);
    cout << "xxxxxxx  x     x  xxxxxxx  x     x  x    x    x     x  xxxxxxx  x     x" <<endl;
    SetConsoleTextAttribute(h,3);
    cout << "   x     x     x  x     x  x x   x  x  x       x   x   x     x  x     x" <<endl;
    SetConsoleTextAttribute(h,4);
    cout << "   x     xxxxxxx  xxxxxxx  x  x  x  xx           x     x     x  x     x" <<endl;
    SetConsoleTextAttribute(h,5);
    cout << "   x     x     x  x     x  x   x x  xx           x     x     x  x     x" <<endl;
    SetConsoleTextAttribute(h,6);
    cout << "   x     x     x  x     x  x    xx  x  x         x     x     x  x     x" <<endl;
    SetConsoleTextAttribute(h,13);
    cout << "   x     x     x  x     x  x     x  x    x       x     xxxxxxx  xxxxxxx";
    SetConsoleTextAttribute(h,3);
    cout << "\n\n--------------------------------------------------------"<<endl;
    cout << "|FOR USING CIN_COUT TESLA TEST DRIVE RESERVATION SYSTEM|"<<endl;
    cout << "--------------------------------------------------------"<<endl;
    SetConsoleTextAttribute(h,7);
    return;
    }

        exit:
        //asking user for going back option page
        cout << "\n\nDo you want to go back to the previous page (y/n): ";
        cin >> goback;

        //validation page
        while(!((goback== 'Y' || goback== 'y' || goback== 'N' || goback== 'n')))
        {
            SetConsoleTextAttribute(h,4);
            cout << "Invalid input"<<endl;
            SetConsoleTextAttribute(h,7);
            cout << "Please only enter (Y/N): ";
            cin.clear();
            cin.ignore(100, '\n');
            cin >> goback;

        }
        system("CLS");

}
    //if no
    if(goback== 'N' || goback== 'n')
    {   
        cin.clear();
        SetConsoleTextAttribute(h,1);
        cout << "xxxxxxx  x     x  xxxxxxx  x     x  x    x    x     x  xxxxxxx  x     x" <<endl;
        SetConsoleTextAttribute(h,2);
        cout << "   x     x     x  x     x  x x   x  x  x       x   x   x     x  x     x" <<endl;
        SetConsoleTextAttribute(h,3);
        cout << "   x     xxxxxxx  xxxxxxx  x  x  x  xx           x     x     x  x     x" <<endl;
        SetConsoleTextAttribute(h,4);
        cout << "   x     x     x  x     x  x   x x  xx           x     x     x  x     x" <<endl;
        SetConsoleTextAttribute(h,5);
        cout << "   x     x     x  x     x  x    xx  x  x         x     x     x  x     x" <<endl;
        SetConsoleTextAttribute(h,6);
        cout << "   x     x     x  x     x  x     x  x    x       x     xxxxxxx  xxxxxxx\n\n";
        SetConsoleTextAttribute(h,7);
        return;
    }
}
