#include <iostream>
#include <random>
#include <string>
#include <ctype.h>
using namespace std;
void check(int num)
{
    string str;
    if (num == 1)
    {
        cout << "Stone";
    }
    else if (num == 2)
    {
        cout << "Paper";
    }
    else
    {
        cout << "Scissors";
    }

    // return str;
}
int main()
{
    string name;
    cout << "----------------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "--------------------------------------------------"
         << " : GAME : Stone Paper Scissors : GAME :"
         << "--------------------------------------------------" << endl;
    cout << "----------------------------------------------------------------------------------------------------------------------------------------" << endl;

    cout << "\nEnter Your Name: ";
    getline(cin, name);
    

    while (1)
    {
        int num, random;
        random = (rand() % 3);
        cout << "\n\n.......MENU.........\n"
             << "Press 1. Stone\n"
             << "Press 2. Paper\n"
             << "Press 3. Scissors\n"
             << "Press 4. Exit\n\n"
             << "Enter Your Choice: ";
        cin >> num;

        switch (num)
        {

        case 1:

            cout << "\n"
                 << name << " Choose: ";
            check(num);
            cout << endl;
            cout << "Computer Choose: ";
            check(random);
            cout << endl;

            if (num == 1 && random == 1)
            {
                cout << "\nOpps!..Game Draw..";
            }
            else if (num == 1 && random == 2)
            {
                cout << "\nWow... " << name << " Win...";
            }
            else
            {
                cout << "\nWow... " << name << " Win...";
            }
            break;

        case 2:

            cout << "\n"
                 << name << " Choose: ";
            check(num);
            cout << endl;
            cout << "Computer Choose: ";
            check(random);
            cout << endl;

            if (num == 2 && random == 1)
            {
                cout << "\nOoh!.. Sorry Computer Win...";
            }
            else if (num == 2 && random == 2)
            {
                cout << "\nOpps!..Game Draw..";
            }
            else
            {
                cout << "\nOoh!.. Sorry Computer Win...";
            }
            break;

        case 3:

            cout << "\n"
                 << name << " Choose: ";
            check(num);
            cout << endl;
            cout << "Computer Choose: ";
            check(random);
            cout << endl;


            if (num == 3 && random == 1)
            {
                cout << "\nOoh!.. Sorry Computer Win...";
            }
            else if (num == 3 && random == 2)
            {
                cout << "\nWow... " << name << " Win...";
            }
            else
            {
                cout << "\nOpps!..Game Draw..";
            }
            break;

        case 4:
            cout << "Thanks For Plying With Me..." << endl;
            cout << "Bye " << name << ".....";
            exit(0);
            // break;
        default:
            cout << "Please Choose Correct Option from Menu box...";
        }
    }

    return 0;
}