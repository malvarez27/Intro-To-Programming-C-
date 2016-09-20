//Erick Juarez & Marissa Alvarez
//CPSC 120 sec 07-08
//Homework #1
//This program will simulate an online purchase by asking the user to input
//info about an item and it will display a detailed invoice
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    //declare variables needed
    const double SHIPPING_RATE = .09;   //shipping cost is 9% of the unit price
    const int PERCENT_TO_DECIMAL = 100;   // to convert a percentage into a decimal divide by 100
    string userName, productName;
    int itemQuantity;
    double unitPrice, taxRate, salesTax, subTotal, grandTotal, shippingPrice;
    
    
    // get info from user
    cout << "HELLO! WELCOME TO THE ONLINE YEEZY SHOP!" << endl;
    cout << "Enter your name: ";
    getline(cin, userName);
    cout << "Product name: ";
    getline(cin, productName);
    cout << "Unit Price: " ;
    cin >> unitPrice;
    cout << "Quantity: ";
    cin >> itemQuantity;
    cout << "Sales tax rate (%): ";
    cin >> taxRate;
    
    
    // calculate subTotal, sales tax, shipping, and grand total
    subTotal = unitPrice * itemQuantity;
    salesTax = subTotal * (taxRate / PERCENT_TO_DECIMAL);
    shippingPrice = subTotal * SHIPPING_RATE;
    grandTotal = subTotal + salesTax + shippingPrice;
    
    
    cout << "\n========================================\n           	INVOICE\n========================================\n\n";
    cout << "Name: " << userName << endl << endl;
    cout << "Qty Item" << setw(32) << right << "Unit Price" << endl;
    cout << fixed << setprecision(2);
    cout << left << setw(4) << itemQuantity << setw(26) << productName << right <<setw(10) << unitPrice <<endl;
    cout << setw(25) << "Subtotal:" << setw(15) << subTotal << endl;
    cout << setw(26) << "Sales tax:" << setw(14) << salesTax << endl;
    cout << setw(25) << "Shipping:" << setw(15) << shippingPrice << endl;
    cout << setw(28) << "Grand total:" << setw(12) << grandTotal << endl << endl;
    
    return 0;
}
