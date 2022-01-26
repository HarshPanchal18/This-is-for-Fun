#include <iostream>
#include <conio.h>
#include <windows.h>
//#include <bits/stdc++.h>

using namespace std;

class bus
{
    int ac, seat, TicketCost;
    string name;
    char p;

public:
    bus() { ac = seat = TicketCost = 0; }
    ~bus() { ac = seat = TicketCost = 0; }
    void delhi();
    void mumbai();
    void kolkata();
    void bangalore();
    void hyderabad();
};

void bus::kolkata()
{
    system("cls");
    cout << "--------------------------\n";
    cout << "List of Buses for Kolkata : \n";
    cout << "Enter the S.No to proceed \n";
    cout << "1. AC , Cost Per Seat - 159INR \n2. Non AC , Cost Per Seat - 99INR\n";
    cin >> ac;

    switch (ac)
    {

    case 1:
        cout << "Enter your Full Name :  ";
        /*getline(cin,name);*/
        cin >> name;

    RepeatKolkata1:
        cout << "Enter your required no of seats : ";
        cin >> seat;

        if (seat < 1)
        {
            cout << "\nRetry...";
            goto RepeatKolkata1;
        }

        TicketCost = seat * 159;

        cout << "--------------------\n";
        cout << " Your total amount is : " << TicketCost << " \n Name : " << name << " \n Total seats : " << seat << " \n Do you want to confirm Y / N \n ";
        cin >> p;

        if (p == 'y' || p == 'Y')
        {
            cout << "Fetching for the payment server ..... \n ";

            Sleep(3000); /*delay(3000);*/

            cout << "Amout is successfully deducted from your Travel Id \n ";
            cout << "Reservation Success !!! \n Happy Journey ";
        }
        else
        {
            cout << "Order Cancelled ";
            exit;
        }
        break;

    case 2:
        cout << "Enter your Full Name :  ";
        /*getline(cin,name);*/
        cin >> name;

    RepeatKolkata2:
        cout << "Enter your required no of seats : ";
        cin >> seat;

        if (seat < 1)
        {
            cout << "\nRetry...";
            goto RepeatKolkata2;
        }

        TicketCost = seat * 99;

        cout << "--------------------\n";
        cout << " Your total amount is : " << TicketCost << " \n Name : " << name << " \n Total seats : " << seat << " \n Do you want to confirm Y / N \n ";
        cin >> p;

        if (p == 'y' || p == 'Y')
        {
            cout << "Fetching for the payment server ..... \n ";

            Sleep(3000); /*delay(3000);*/

            cout << "Amout is successfully deducted from your Travel Id \n ";
            cout << "Reservation Success !!! \n Happy Journey ";
        }
        else
        {
            cout << "Order Cancelled ";
            exit;
        }
        break;

    default:
        cout << "wrong Input ";
        break;
    }
    getch();
}

void bus::delhi()
{
    system("cls");
    cout << "--------------------------\n";
    cout << "List of Buses for Delhi : \n";
    cout << "Enter the S.No to proceed \n";
    cout << "1. AC , Cost Per Seat - 559INR \n2. Non AC , Cost Per Seat - 499INR\n";
    cin >> ac;

    switch (ac)
    {

    case 1:
        cout << "Enter your Full Name :  ";
        /*getline(cin,name);*/
        cin >> name;

    RepeatDelhi1:
        cout << "Enter your required no of seats : ";
        cin >> seat;

        if (seat < 1)
        {
            cout << "\nRetry...";
            goto RepeatDelhi1;
        }

        TicketCost = seat * 559;

        cout << "--------------------\n";
        cout << " Your total amount is : " << TicketCost << " \n Name : " << name << " \n Total seats : " << seat << " \n Do you want to confirm Y / N \n ";
        cin >> p;

        if (p == 'y' || p == 'Y')
        {
            cout << "Fetching for the payment server ..... \n ";

            Sleep(3000); /*delay(3000);*/

            cout << "Amount is successfully deducted from your Travel Id \n ";
            cout << "Reservation Success !!! \n Happy Journey ";
        }
        else
        {
            cout << "Order Cancelled ";
            exit;
        }
        break;

    case 2:
        cout << "Enter your Full Name :  ";
        /*getline(cin,name);*/
        cin >> name;

    RepeatDelhi2:
        cout << "Enter your required no of seats : ";
        cin >> seat;

        if (seat < 1)
        {
            cout << "\nRetry...";
            goto RepeatDelhi2;
        }

        TicketCost = seat * 499;

        cout << "--------------------\n";
        cout << " Your total amount is : " << TicketCost << " \n Name : " << name << " \n Total seats : " << seat << " \n Do you want to confirm Y / N \n ";
        cin >> p;

        if (p == 'y' || p == 'Y')
        {
            cout << "Fetching for the payment server ..... \n ";

            Sleep(3000); /*delay(3000);*/

            cout << "Amount is successfully deducted from your Travel Id \n ";
            cout << "Reservation Success !!! \n Happy Journey ";
        }
        else
        {
            cout << "Order Cancelled ";
            exit;
        }
        break;

    default:
        cout << "wrong Input ";
        break;
    }
    getch();
}

void bus::hyderabad()
{
    system("cls");
    cout << "--------------------------\n";
    cout << "List of Buses for Hydeabad : \n";
    cout << "Enter the S.No to proceed \n";
    cout << "1. AC , Cost Per Seat - 359INR \n2. Non AC , Cost Per Seat - 199INR\n";
    cin >> ac;

    switch (ac)
    {

    case 1:
        cout << "Enter your Full Name :  ";
        /*getline(cin,name);*/
        cin >> name;

    RepeatHyd1:
        cout << "Enter your required no of seats : ";
        cin >> seat;

        if (seat < 1)
        {
            cout << "\nRetry...";
            goto RepeatHyd1;
        }

        TicketCost = seat * 359;

        cout << "--------------------\n";
        cout << " Your total amount is : " << TicketCost << " \n Name : " << name << " \n Total seats : " << seat << " \n Do you want to confirm Y / N \n ";
        cin >> p;

        if (p == 'y' || p == 'Y')
        {
            cout << "Fetching for the payment server ..... \n ";

            Sleep(3000); /*delay(3000);*/

            cout << "Amount is successfully deducted from your Travel Id \n ";
            cout << "Reservation Success !!! \n Happy Journey ";
        }
        else
        {
            cout << "Order Cancelled ";
            exit;
        }
        break;

    case 2:
        cout << "Enter your Full Name :  ";
        /*getline(cin,name);*/
        cin >> name;

    RepeatHyd2:
        cout << "Enter your required no of seats : ";
        cin >> seat;

        if (seat < 1)
        {
            cout << "\nRetry...";
            goto RepeatHyd2;
        }

        TicketCost = seat * 199;

        cout << "--------------------\n";
        cout << " Your total amount is : " << TicketCost << " \n Name : " << name << " \n Total seats : " << seat << " \n Do you want to confirm Y / N \n ";
        cin >> p;

        if (p == 'y' || p == 'Y')
        {
            cout << "Fetching for the payment server ..... \n ";

            Sleep(3000); /*delay(3000);*/

            cout << "Amount is successfully deducted from your Travel Id \n ";
            cout << "Reservation Success !!! \n Happy Journey ";
        }
        else
        {
            cout << "Order Cancelled ";
            exit;
        }
        break;

    default:
        cout << "wrong Input ";
        break;
    }
    getch();
}

void bus::bangalore()
{
    system("cls");
    cout << "--------------------------\n";
    cout << "List of Buses for Bangalore : \n";
    cout << "Enter the S.No to proceed \n";

    cout << "1. AC , Cost Per Seat - 459INR \n2. Non AC , Cost Per Seat - 299INR\n";
    cin >> ac;

    switch (ac)
    {

    case 1:
        cout << "Enter your Full Name :  ";
        /*getline(cin,name);*/
        cin >> name;

    RepeatBang1:
        cout << "Enter your required no of seats : ";
        cin >> seat;

        if (seat < 1)
        {
            cout << "\nRetry...";
            goto RepeatBang1;
        }

        TicketCost = seat * 459;

        cout << "--------------------\n";
        cout << " Your total amount is : " << TicketCost << " \n Name : " << name << " \n Total seats : " << seat << " \n Do you want to confirm Y / N \n ";
        cin >> p;

        if (p == 'y' || p == 'Y')
        {
            cout << "Fetching for the payment server ..... \n ";

            Sleep(3000); /*delay(3000);*/

            cout << "Amount is successfully deducted from your Travel Id \n ";
            cout << "Reservation Success !!! \n Happy Journey ";
        }
        else
        {
            cout << "Order Cancelled ";
            exit;
        }
        break;

    case 2:
        cout << "Enter your Full Name :  ";
        /*getline(cin,name);*/
        cin >> name;

    RepeatBang2:
        cout << "Enter your required no of seats : ";
        cin >> seat;

        if (seat < 1)
        {
            cout << "\nRetry...";
            goto RepeatBang2;
        }

        TicketCost = seat * 299;

        cout << "--------------------\n";
        cout << " Your total amount is : " << TicketCost << " \n Name : " << name << " \n Total seats : " << seat << " \n Do you want to confirm Y / N \n ";
        cin >> p;

        if (p == 'y' || p == 'Y')
        {
            cout << "Fetching for the payment server ..... \n ";

            Sleep(3000); /*delay(3000);*/

            cout << "Amount is successfully deducted from your Travel Id \n ";
            cout << "Reservation Success !!! \n Happy Journey ";
        }
        else
        {
            cout << "Order Cancelled ";
            exit;
        }

        break;

    default:
        cout << "wrong Input ";
        break;
    }
    getch();
}

void bus::mumbai()
{
    system("cls");
    cout << "--------------------------\n";
    cout << "List of Buses for Mumbai : \n";
    cout << "Enter the S.No to proceed \n";
    cout << "1. AC , Cost Per Seat - 109INR \n2. Non AC , Cost Per Seat - 59INR\n";
    cin >> ac;
    switch (ac)
    {

    case 1:
        cout << "Enter your Full Name :  ";
        /*getline(cin,name);*/
        cin >> name;

    RepeatMum1:
        cout << "Enter your required no of seats : ";
        cin >> seat;

        if (seat < 1)
        {
            cout << "\nRetry...";
            goto RepeatMum1;
        }

        TicketCost = seat * 109;

        cout << "--------------------\n";
        cout << " Your total amount is : " << TicketCost << " \n Name : " << name << " \n Total seats : " << seat << " \n Do you want to confirm Y / N \n ";
        cin >> p;

        if (p == 'y' || p == 'Y')
        {
            cout << "Fetching for the payment server ..... \n ";

            Sleep(3000); /*delay(3000);*/

            cout << "Amount is successfully deducted from your Travel Id \n ";
            cout << "Reservation Success !!! \n Happy Journey ";
        }
        else
        {
            cout << "Order Cancelled ";
            exit;
        }
        break;

    case 2:
        cout << "Enter your Full Name :  ";
        /*getline(cin,name);*/
        cin >> name;

    RepeatMum2:
        cout << "Enter your required no of seats : ";
        cin >> seat;
        if (seat < 1)
        {
            cout << "\nRetry...";
            goto RepeatMum2;
        }

        TicketCost = seat * 59;

        cout << "--------------------\n";
        cout << " Your total amount is : " << TicketCost << " \n Name : " << name << " \n Total seats : " << seat << " \n Do you want to confirm Y / N \n ";
        cin >> p;

        if (p == 'y' || p == 'Y')
        {
            cout << "Fetching for the payment server ..... \n ";
            Sleep(3000); /*delay(3000);*/
            cout << "Amount is successfully deducted from your Travel Id \n ";
            cout << "Reservation Success !!! \n Happy Journey ";
        }
        else
        {
            cout << "Order Cancelled ";
            exit;
        }
        break;

    default:
        cout << "wrong Input ";
        break;
    }
    getch();
}

int main()
{
    /*
        A Simple Software to Stimulate Ticketing Using C++ .
        A DOS Based Software.
        Every bus has a different Charge to go to Destination.
        Password : 1234Abc* (Case Sensitive)
        :-)
    */
    system("cls");
    system("color 0A");
    int a;
    char b;
    bus obj;
    string un, c, pass = "1234Abc*";

    cout << "\t\t\t\t\t\t\t\t\t !!! Welcome !!! \n\t\t\t\t\t\t\t\t We cover all your Destinations \n"
         << endl;

    cout << "Enter Your Travel Id Password to confirm \n ";

    cout << "\nEnter Password : ";
    getline(cin, c);

    if (c == pass)
    {
        cout << "Enter the S.No to proceed \n ";

        cout << "1. Delhi \n 2. Mumbai \n 3. Kolkata \n 4. Bangalore \n 5. hyderabad \n";
        cin >> a;

        switch (a)
        {

        case 1:
            obj.delhi();
            break;

        case 2:
            obj.mumbai();
            break;

        case 3:
            obj.kolkata();
            break;

        case 4:
            obj.bangalore();
            break;

        case 5:
            obj.hyderabad();
            break;

        default:
            cout << "Wrong Selection";
            break;
        }
    }
    else
    {
        cout << "Wrong password";
        getch();
        exit;
    }
    return 0;
}
/* THE END */