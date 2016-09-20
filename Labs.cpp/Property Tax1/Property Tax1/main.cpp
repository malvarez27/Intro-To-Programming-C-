//
//  main.cpp
//  Property Tax1
//
//  Created by Marissa Alvarez on 3/7/16.
//  Copyright © 2016 Marissa Alvarez. All rights reserved.
//
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
 {
     const double ACCESSED_VAL = .6;
     int house_val = 0;
     double accessVal, taxOwed,taxR, taxRate;
     
     cout << " Enter the house value" << endl;
     cin >> house_val;
     
     cout << " enter tax rate for each $100.00" << endl;
     cin >> taxR;
     taxRate = taxR / 100.0;
     
     accessVal = house_val * ACCESSED_VAL;
     taxOwed = accessVal * taxRate;
     
     cout << " You will owe " << taxOwed << " at the end of the year" << endl;
    
    
    return 0;
}
