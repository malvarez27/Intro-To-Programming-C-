//
//  main.cpp
//  icecream.cpp
//
//  Created by Marissa Alvarez on 3/2/16.
//  Copyright © 2016 Marissa Alvarez. All rights reserved.
//
// PA 3 icecream.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // DEFINE NAMED CONSTANTS HERE TO HOLD THE PRICES OF THE 3
    const double SINGLED_DELIGHT_DOLLAR = 1.49;
    const double DOUBLED_DELIGHT_DOLLAR = 2.49;
    const double TRIPLED_DELIGHT_DOLLAR = 3.49;
    double singled, doubled, tripled, total, total2;
    int num1,
    num2,
    num3;
    double delightful_single,
    delightful_double,
    delightful_triple;
    
    // SIZES OF ICE CREAM CONES. GIVE EACH ONE A DESCRIPTIVE
    // NAME AND AN APPROPRIATE DATA TYPE.
    
    // DECLARE ALL NEEDED VARIABLES HERE. GIVE EACH ONE A DESCRIPTIVE
    // NAME AND AN APPROPRIATE DATA TYPE.
    cout << "How many DELIGHTful cones did were sold today?" << endl;
    cin >> num1;
    
    cout << "How many Double DeLIGHT cones were sold today?" << endl;
    cin >> num2;
    
    cout << "How many Triple DeLIGHT cones were sold today?" << endl;
    cin >> num3;
    
    //calculated amount SINGLE SCOOP
    delightful_single = num1 * SINGLED_DELIGHT_DOLLAR;
    //calculate amount for double scoop
    delightful_double = num2 * DOUBLED_DELIGHT_DOLLAR;
    //CALCULATE amount for triple scoop
    delightful_triple = num3 * TRIPLED_DELIGHT_DOLLAR;
    //calculate total
    total = num1 + num2 + num3;
    //calculate total cost made
    total2 = delightful_single + delightful_double + delightful_triple;
    
    cout << " Number of single scoop cones sold:" << num1 << endl;
    cout << " Number of dounle scoop cones sold:" << num1 << endl;
    cout << " Number of triple scoop cones sold:" << num1 << endl;
    
    cout << fixed << setprecision(2);
    cout << left << setw(25) << "DeLIGHTful cones" << left << setw(5) << num1 << " " << delightful_single << endl;
    cout << left << setw(25) << "Double DeLIGHTful cones" << left << setw(5) << num2 << " " << delightful_double << endl;
    cout << left << setw(25) << "Triple DeLIGHTful cones" << left << setw(5) << num3 << " " << delightful_triple << endl;
    cout << left << setw(25) << "Total" << total << "  " << left << setw(5) << total2 << endl;
    
    
    
    // WRITE STATEMENTS HERE TO PROMPT FOR AND INPUT THE INFORMATION
    // THE PROGRAM NEEDS TO GET FROM THE USER.
    
    // WRITE STATEMENTS HERE TO PERFORM ALL NEEDED COMPUTATIONS
    // AND ASSIGN THE RESULTS TO VARIABLES.
    
    // WRITE STATEMENTS HERE TO DISPLAY THE REQUESTED INFORMATION.
    
    return 0;
}