// Project 3
//This program finds the root of a specific algebraic equation as well as it's bisections.
// Colin Wilder
//3-5-2021

#include<iostream>
#include<cmath>
using namespace std;

//Algebraic equation
double f(double x){
   return (atan(exp(4*x)/(pow(x,5)+1))-sqrt(log(1+3*x*x*x)));
}

//Bisection method
double bisection(double a, double b, int n, int & bisections){
   bisections=0;
   double c;
   
   while(abs (f (c)) > pow(10,-n)){
       c= (a + b) / 2;
       bisections += 1;
       if (f(a) * f(c) < 0)
       b = c;
       else
       a = c;
   }
   return c;
}

//Program execution
int main() {
    char again = 'Y';
    int n;
    int NoB=0;
    double roots = 0;
    
    //Restart program
while (again == 'y' || again == 'Y'){
    
    //Starting prompt
    cout<< "Please enter a positive integer between two and fifteen: \n";
    cin >> n;
    
    //False input check
    while (n < 2 || n > 15){
        cout << "Out of range specifications. Please try again: \n";
        cin.clear();
        cin.ignore(100,'\n');
        cin >> n;
    }
    
    //Correct input recieved
    if (n > 2 || n < 15){
        roots = bisection(0,5,n,NoB);
        cout << "The root is: " << roots << endl;
        cout << "The number of bisections: " << NoB << endl;
    }
    
    //Rerun verification
    cout << "\nWould you like to run this program again? Press Y or N: \n";
    cin >> again;
}
//end program
   cout << "Program terminated. \n"; 
}