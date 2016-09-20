//
//  main.cpp
//  Average Rainfall
//
//  Created by Marissa Alvarez on 3/5/16.
//  Copyright © 2016 Marissa Alvarez. All rights reserved.
//
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string m1,
        m2,
        m3;
    int size = 3;
    double num1,
    num2,
    num3,
    sum_total,
    average;
    
    //get input for month1
    cout << "Enter month 1" << endl;
    cin >> m1;
    cout << "What was the amount of rain that fell in that month?" << endl;
    cin >> num1;
    
    //get input for month2
    cout << "Enter month 2" << endl;
    cin >> m2;
    cout << "What was the amount of rain that fell in that month?" << endl;
    cin >> num2;
    
    //get input for month3
    cout << "Enter month 3" << endl;
    cin >> m3;
    cout << "What was the amount of rain that fell in that month?" << endl;
    cin >> num3;
    
    //find the sum of three months
    sum_total= num1 + num2 + num3;
    
    //find average of three months
    average= sum_total/size;
    
    //display message
    cout << fixed << setprecision(2);
    cout << " The average rainfall for " << m1 << ", " << m2 << ", "  << m3 << " was" << average << endl;
    
    return 0;
}