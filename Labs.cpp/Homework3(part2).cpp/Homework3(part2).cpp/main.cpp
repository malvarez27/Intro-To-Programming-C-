//Marissa Alvarez
// main.cpp
// Homework3(project 2).cpp
// CPSC 120-07
// Will drop the highest and lowest scores and average out the three leftover scores.
//  Created by Marissa Alvarez on 4/30/16.
//  Copyright © 2016 Marissa Alvarez. All rights reserved.
#include <iomanip>
#include <iostream>
#include <string>
#include <cmath>
#include <iostream>
using namespace std;

//Function prototypes
void getJudgeDate(double*, int);
double calcScore(double*, int, double, double);
double findlowest(double*, int);
double findhighest(double*, int);

//main
int main()
{
    const int SIZE = 5;
    double arr[SIZE] ;
    getJudgeDate(arr, SIZE);
    double high = findhighest(arr, SIZE);
    double low = findlowest(arr, SIZE);
    cout << " The final score from the judges: " << fixed << setprecision(2)<< calcScore(arr, SIZE, high, low) << endl;
}

void getJudgeDate(double*judgearr, int SIZE)
{
    for (int i = 0; i<SIZE; i++) {
        cout << " What is the " << i+1 << " score that you give betweeen 0-10 " <<endl;
        cin >> judgearr[i] ;
    }
    
}
double findhighest(double*judgearr, int SIZE)
{
    
    double high = judgearr[0];
    for (int i= 1; i < SIZE; i++ ){
        if(judgearr[i] > high)
        {
            high = judgearr[i];
        }
    }
    return high;
}

double findlowest(double*judgearr, int SIZE)
    
{
        double low = judgearr[0];
        for (int i= 1; i < SIZE; i++ ){
            if(judgearr[i] < low)
            {
                low = judgearr[i];
            }
        }
    return low;
}

double calcScore(double*judgearr, int SIZE, double high, double low)
{
    double final=0.0;
    
    for(int i =0; i<SIZE; i++)
        final += judgearr[i];
    
    final = final - high - low;
    final = final/(SIZE-2);
    return final;
    
}