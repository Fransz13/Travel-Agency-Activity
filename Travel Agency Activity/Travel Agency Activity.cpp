// Travel Agency Activity.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    char package, mop,guide,hotel;
    int pax, amount, totalCost;
    double discount,totalInPackage;

    cout << "Hello, Welcome Travelgoers! Travel with no worries.\n"
        << "Please choose a package!:)\n\n"
        << "Coron P1:7k (ENTER 1)\n"
        << "Boracay P2:10K (ENTER 2)\n"
        << "Siargao P3:7.5k (ENTER 3)\n\n";
    cout << "We have an ongoing Christmass promo!.\n";
    cout << "How many Guest you will avail?";
    cin >> pax;


    cout << "What package will you select?\n";
    cin >> package;

    switch (package)
    {
    case '1':
        cout << "You chose Package 1\n"
            << "This will cost you a 7,000Php\n\n";
        amount = 7000 * pax;
        break;

    case '2':
        cout << "You chose Package 2\n"
            << "This will cost you a 10,000Php\n\n";
        amount = 10000 * pax;
        break;

    case '3':
        cout << "You chose Package 3\n"
            << "This will cost you a 7,500php\n\n";
        amount = 7500 * pax;
        break;

    default:
        cout << "\n"
            << "This is not given in the Option\n"
            << "Thankyou for selecting our packages!Please come again:)\n\n";
        break;
        return 0;

    }
    if (pax >= 4)
    {
        cout << "You are now eligible for our Christmass promo" << endl;
        
        discount = amount * 0.15;
        totalInPackage = amount - discount;

        cout << "You have a total amount of discount is " << amount << "Pesos and the discount is " << totalInPackage << "Pesos";
    }
    else

    {
        cout << "You have a total of " << amount << "Pesos.\n\n" << endl;

    }

    {
        cout << "Would you like a tour (1 if yes or 2 if no)?" << endl;
        cin >> guide;
    }
        switch (guide)
        {
        case '1':
            cout << "\n"
                << "You've chosen to have a guide.\n"
                << "This will cost 5k\n\n";
            totalCost = totalInPackage + 5000;

            

        }

 

        cout << "Would you like a hotel (1 if yes or 2 if no)?" << endl;
        cin >> hotel;

        switch (hotel)
        {
        case '1':
            cout << "\n"
                << "You've chosen to have hotel.\n"
                << "This will cost 10k\n\n";
            totalCost = totalInPackage + 10000;
            break;
         
        default:
            cout << "\n";
            break;
        }

        cout << "You have a total of " << totalCost << "Pesos";

        cout << "\n"
            << "Please select a mode of payment\n"
            << "Card 1\n"
            << "Cash 2\n\n";

        
       


        return 0;
    }










