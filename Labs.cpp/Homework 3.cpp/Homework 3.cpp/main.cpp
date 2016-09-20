// Marissa Alvarez
//  main.cpp
//  Homework 3.cpp (project 1)
// CPSC 120-07
//  Created by Marissa Alvarez on 4/30/16.
//  Copyright © 2016 Marissa Alvarez. All rights reserved.
//  

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int starting_bal, dep1, withdrawel, running_total;
    double interest_rate, running_interest=0.0, final1;
    
    
    
    cout << " What is your starting balance? " <<  endl;
    cin>> starting_bal;
    cout << " What is the annual interest rate for your account? " << endl;
    cin>> interest_rate;
    
    running_total = starting_bal;
    
    for(int i=0; i < 3; i++)
    {
        
        
        cout << "Month" << i+1 << ": ";
        cout << " What is the total amount deposited? " << endl;
        cin >> dep1;
        
        while(dep1 < 0)
        {
            cout << "Please enter a positive number for total deposit amount" << endl;
            cin >> dep1;
        }
        
        running_total += dep1;
        cout << " What is the amount withdrawn? " << endl;
        cin >> withdrawel;
        while(withdrawel < 0)
        {
            cout << "Please enter a positive number for total withdrawel amount" << endl;
        }
        
        running_total -= withdrawel;
        cout << "The balance for month " << i + 1 << " was $" << running_total << endl;
        
        while(interest_rate < 0)
        {
        cout << "Please enter a positive number for total interest amount" << endl;
        }

        interest_rate = interest_rate/1200;
        running_interest+= interest_rate;
        interest_rate = ((starting_bal + running_total)/2)*(running_interest);
        running_total += interest_rate;
        final1 =  running_total;
        cout << " The interest you received for this month is " << fixed << setprecision(2) << interest_rate << endl;
        cout << "The balance for month " << i + 1 << " was $" << running_total << endl;

    
    }
//print out
    cout << "Your initial balance was $" << starting_bal << endl;
    cout << "Your interest total from the three months " << running_interest << endl;
    cout << "Your final balance after three months is $" << final1 << endl;
    
    
    return 0;

}