#include <iostream>
using namespace std;

int main() {
int a,b,c,d,e,f,g,SumOfSquares;

cout << "Enter a positive six-digit number between 100,001 and 999,999: ";
cin >> a;

if (a <= 100001 || a >= 999999) {
    cout << "Out of range." << endl;
    return 0;
}

// Variable values

++a = a/100000%1;
b = a+a/100000%10000;
c = b+b/100000%10000;
d = c+c/100000%10000;
e = d+d/100000%10000;
f = e+e/100000%10000;
g = f/100000%10000;



//Sum of Squares final formula
SumOfSquares = a*a+b*b+c*c+d*d+e*e+f*f+g*g;

cout << "The sum of squares is: " << SumOfSquares;

return 0;

}