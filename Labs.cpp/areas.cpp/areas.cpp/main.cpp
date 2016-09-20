// PA 4 areas.cpp
// WRITE A COMMENT BRIEFLY DESCRIBING THE PROGRAM.
// PUT YOUR NAME HERE.
// INCLUDE ANY NEEDED FILES HERE.
#include <iomanip>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void displayMenu();
double findSquareArea();
double findCircleArea();
double findTriangleArea();
string choice4();
int getChoice(int, int);

int main()
{
    
    int menu = 0;
    //double squarelength = findSquareArea();
    /*double sizeRadius = findCircleArea();
     double  areaTri = findTriangleArea();*/
    string choice = choice4();
    
    do {
        displayMenu();
        menu = getChoice(1, 4);
        switch (menu)
        {
            case 1:
                findSquareArea();
                break;
            case 2:
                findCircleArea();
                break;
            case 3:
                findTriangleArea();
                break;
            case 4:
                cout << choice << endl;
                
                
                break;
            default:
                cout << " please ener a valid option " << endl;
                break;
        }
    } while (menu != 4);
}
void displayMenu()
{
    
    cout << "Choose the type of shape of which area you would like to find" << endl;
    cout << "1 square \n" << "2 circle \n" << "3 right triangle \n" << "4 quit \n";
    
    
}

double findSquareArea()
{
    
    double squarelength, areaS;
    cout << "what is the length of the side of your square?" << endl;
    cin >> squarelength;
    areaS = squarelength * squarelength;
    cout << " This is the square area " << areaS << endl;
    return areaS;
    
}

double findCircleArea()
{
    
    double const VALUE_PIE = 3.14159;
    double sizeRadius;
    cout << "what is the size of the radius of your circle?" << endl;
    cin >> sizeRadius;
    cout << " This is the area of the circle " << VALUE_PIE * pow(sizeRadius, 2) << endl;
    return VALUE_PIE * pow(sizeRadius, 2);
    
}

double findTriangleArea()
{
    
    double sizeLeg1, sizeLeg2, areaT = 0.0;
    cout << "what is the size of the first leg of your right triangle" << endl;
    cin >> sizeLeg1;
    cout << "what is the size of the second leg of your right triangle" << endl;
    cin >> sizeLeg2;
    areaT = (sizeLeg1 * sizeLeg2) / 2;
    cout << " This is the area of the triangle " << areaT << endl;
    return areaT;
}

string choice4()
{
    
    return "invalid choice";
}

int getChoice(int min, int max)
{
    int input;
    
    //  Get and validate the input
    cin >> input;
    while (input < min || input > max)
    {
        cout << "Invalid input. Enter an integer between " + min << " and " + max << " : ";
        cin  >> input;
    }
    return input;
}