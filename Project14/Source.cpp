/*
Bondarenko Alex
Group COI-21-1
Exercise #5
*/
#include <iostream>
using namespace std;

void equation(double a, double b)
{
    if (a == 0 && b == 0)
    {
        cout << "bezlich\n";
    }
    else if (a == 0)
    {
        cout << "nema\n";
    }
    else 
    {
        double x = -b / a; 
        cout << x << endl; 
    }
}

int main()
{
    double a, b; 

    while (true) 
    {
        cout << "\nSolve ax + b = 0\n"; 
        cout << "Input a b: "; 
        cin >> a >> b; 
        equation(a, b); 
    }
}
