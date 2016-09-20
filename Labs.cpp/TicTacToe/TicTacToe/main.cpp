//  Marissa Alvarez
//  CPSC 120-07
//  TicTacToe
//  Homework #2
//  Created by Marissa Alvarez on 4/4/16.
//  Copyright © 2016 Marissa Alvarez. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d,e,f,g,h,i;
    cout<< "Enter 9 integers between 0-2" <<endl;
    cout << "what is your 1st number" <<endl;
    cin>> a;
    cout << "what is your 2nd number" <<endl;
    cin >> b;
    cout << "what is your 3rd number" <<endl;
    cin >> c;
    cout<< "4th number" <<endl;
    cin >> d;
    cout << "5th number" <<endl;
    cin >> e;
    cout << "6th number "<<endl;
    cin >> f;
    cout << " 7th number" <<endl;
    cin >>g;
    cout << "8th number " << endl;
    cin >> h;
    cout <<  "9th number" <<endl;
    cin >> i;
    
    cout << "CURRENT BOARD:" << endl;
    
    cout<< "-------" << endl;
    cout<< "|"<< a << "|" << b << "|" << c<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< d << "|" << e << "|" << f<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< g << "|" << h << "|" << i<< "|" <<endl;
    
    cout << "NEW BOARD:" << endl;
    
    //win
    if ( d ==1 && g == 1)
    {
    a = 1;
    cout<< "-------" << endl;
    cout<< "|"<< a << "|" << b << "|" << c<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< d << "|" << e << "|" << f<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< g << "|" << h << "|" << i<< "|" <<endl;
    }
    else if ( e ==1 && i == 1)
    {
    a = 1;
    cout<< "-------" << endl;
    cout<< "|"<< a << "|" << b << "|" << c<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< d << "|" << e << "|" << f<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< g << "|" << h << "|" << i<< "|" <<endl;
    }
    else if ( b ==1 && c == 1)
    {
    a =1;
    cout<< "-------" << endl;
    cout<< "|"<< a << "|" << b << "|" << c<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< d << "|" << e << "|" << f<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< g << "|" << h << "|" << i<< "|" <<endl;
    }
    else if ( e == 1 && h ==1)
    {
    b=1;
    cout<< "-------" << endl;
    cout<< "|"<< a << "|" << b << "|" << c<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< d << "|" << e << "|" << f<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< g << "|" << h << "|" << i<< "|" <<endl;

    }
    else if ( a ==1 && c ==1)
    {
    b =1;
    cout<< "-------" << endl;
    cout<< "|"<< a << "|" << b << "|" << c<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< d << "|" << e << "|" << f<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< g << "|" << h << "|" << i<< "|" <<endl;
    }
    else if (a==1 && b ==1)
    {
    c=1;
    cout<< "-------" << endl;
    cout<< "|"<< a << "|" << b << "|" << c<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< d << "|" << e << "|" << f<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< g << "|" << h << "|" << i<< "|" <<endl;
    }
    else if ( f ==1 && i ==1 )
    {
    c  = 1;
    cout<< "-------" << endl;
    cout<< "|"<< a << "|" << b << "|" << c<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< d << "|" << e << "|" << f<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< g << "|" << h << "|" << i<< "|" <<endl;
    }
    else if ( e == 1 && g ==1)
    {
    c = 1;
    cout<< "-------" << endl;
    cout<< "|"<< a << "|" << b << "|" << c<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< d << "|" << e << "|" << f<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< g << "|" << h << "|" << i<< "|" <<endl;
    }
    
    //block
    else if (d ==2 && g == 2)
    {
    a = 1;
    cout<< "-------" << endl;
    cout<< "|"<< a << "|" << b << "|" << c<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< d << "|" << e << "|" << f<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< g << "|" << h << "|" << i<< "|" <<endl;
    }
    else if ( e ==2 && i == 2)
    {
    a = 1;
    cout<< "-------" << endl;
    cout<< "|"<< a << "|" << b << "|" << c<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< d << "|" << e << "|" << f<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< g << "|" << h << "|" << i<< "|" <<endl;
    }
    else if ( b ==2 && c == 2)
    {
    a =1;
    cout<< "-------" << endl;
    cout<< "|"<< a << "|" << b << "|" << c<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< d << "|" << e << "|" << f<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< g << "|" << h << "|" << i<< "|" <<endl;
    }
    else if ( e == 2 && h ==2)
    {
    b=1;
    cout<< "-------" << endl;
    cout<< "|"<< a << "|" << b << "|" << c<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< d << "|" << e << "|" << f<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< g << "|" << h << "|" << i<< "|" <<endl;
    }
    else if ( a ==2 && c ==2)
    {
    b =1;
    cout<< "-------" << endl;
    cout<< "|"<< a << "|" << b << "|" << c<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< d << "|" << e << "|" << f<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< g << "|" << h << "|" << i<< "|" <<endl;
    }
    else if (a==2 && b ==2)
    {
    c=1;
    cout<< "-------" << endl;
    cout<< "|"<< a << "|" << b << "|" << c<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< d << "|" << e << "|" << f<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< g << "|" << h << "|" << i<< "|" <<endl;
    }
    else if ( f ==2 && i ==2)
    {
    c  = 1;
    cout<< "-------" << endl;
    cout<< "|"<< a << "|" << b << "|" << c<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< d << "|" << e << "|" << f<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< g << "|" << h << "|" << i<< "|" <<endl;
    }
    else if ( e == 2 && g ==2)
    {
    c = 1;
    cout<< "-------" << endl;
    cout<< "|"<< a << "|" << b << "|" << c<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< d << "|" << e << "|" << f<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< g << "|" << h << "|" << i<< "|" <<endl;
    }
    //move
    else if ((d==0 && g==1 && a!=2) || (d==1 && g==0 && a!=2))
    {
    a=1;
    cout<< "-------" << endl;
    cout<< "|"<< a << "|" << b << "|" << c<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< d << "|" << e << "|" << f<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< g << "|" << h << "|" << i<< "|" <<endl;
    }
    else if ((d==0 && g==1 && a==2) || (d==1 && g==0 && a==2))
    {
    e=1;
    cout<< "-------" << endl;
    cout<< "|"<< a << "|" << b << "|" << c<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< d << "|" << e << "|" << f<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< g << "|" << h << "|" << i<< "|" <<endl;
    }
    else if ((e==0 && g==1 && c!=2) || (e==1 && g==0 && c!=2))
    {
    c=1;
    cout<< "-------" << endl;
    cout<< "|"<< a << "|" << b << "|" << c<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< d << "|" << e << "|" << f<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< g << "|" << h << "|" << i<< "|" <<endl;
    }
    else if ((e==0 && g==1 && c==2) || (e==1 && g==0 && c==2))
    {
    a=1;
    cout<< "-------" << endl;
    cout<< "|"<< a << "|" << b << "|" << c<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< d << "|" << e << "|" << f<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< g << "|" << h << "|" << i<< "|" <<endl;
    }
    else if ((e==0 && h==1 && b!= 2) || (e==1 && h==0 && b!=2))
    {
    b=1;
    cout<< "-------" << endl;
    cout<< "|"<< a << "|" << b << "|" << c<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< d << "|" << e << "|" << f<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< g << "|" << h << "|" << i<< "|" <<endl;
    }
    else if ((e==0 && h==1 && b== 2) || (e==1 && h==0 && b==2))
    {
    g=1;
    cout<< "-------" << endl;
    cout<< "|"<< a << "|" << b << "|" << c<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< d << "|" << e << "|" << f<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< g << "|" << h << "|" << i<< "|" <<endl;
    }
    else if ((e ==0 && i==1 && c!=2) || (e ==1 && i==0 && c!=2))
    {
    c=1;
    cout<< "-------" << endl;
    cout<< "|"<< a << "|" << b << "|" << c<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< d << "|" << e << "|" << f<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< g << "|" << h << "|" << i<< "|" <<endl;
    }
    else if ((e ==0 && i==1 && c==2) || (e ==1 && i==0 && c==2))
    {
    b=1;
    cout<< "-------" << endl;
    cout<< "|"<< a << "|" << b << "|" << c<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< d << "|" << e << "|" << f<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< g << "|" << h << "|" << i<< "|" <<endl;
    }
    else if (( f==0 && i==1 && a!=2) || ( f==1 && i==0 && a!=2))
    {
    a=1;
    cout<< "-------" << endl;
    cout<< "|"<< a << "|" << b << "|" << c<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< d << "|" << e << "|" << f<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< g << "|" << h << "|" << i<< "|" <<endl;
    }
    else if (( f==0 && i==1 && a==2) || ( f==1 && i==0 && a==2))
    {
    c=1;
    cout<< "-------" << endl;
    cout<< "|"<< a << "|" << b << "|" << c<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< d << "|" << e << "|" << f<< "|" <<endl;
    cout<< "-------" << endl;
    cout<< "|"<< g << "|" << h << "|" << i<< "|" <<endl;
    }
    else
    {
    a=1;
    b=1;
    c=1;
    d=1;
    e=1;
    f=1;
    g=1;
    i=1;
    }
    
    return 0;
}
