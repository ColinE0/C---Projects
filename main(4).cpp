//Project 4
//This program creates random two-dimensional arrays of integer numbers.
//Colin Wilder
//3-23-2021
#include <iostream>
#include <time.h>
using namespace std; 

#define max 10

//Random number generator
int rand_numb(int low, int high) 
{ 
        //rand() function generates random number 
        int num = (rand()% (high - low + 1)) + low; 
        return num; 
} 

//Display product
void display_product(int size, int a[max][max], int b[max][max]){
        
    cout<<"Product of Matrix A & B: "<<endl;
    for(int d = 0; d < size; d++){
    for(int c = 0; c < size ; c++){
            cout<<a[d][c]*b[d][c]<<" ";
        }
        cout<<endl;
    }
}

//Function determining whether or not the matricies is different with its conditions
void verification(int size, int count){
        cout<<"Matrix A & B: ";
        if(size%2==0){
            if(count >= (size*size) / 2){
                cout<<"This matrices is distinct."<<endl;
            }
            else {
                cout<<"This is not a distinct matricies." << endl;
                        }
        }
        else {
        if (count >= ((size*size)-1) / 2){
            cout<<"This matrices is distinct."<<endl;
            }
            else{ cout<<"This is not a distinct matricies."<<endl; }
        }
        cout << endl;
}
int main (){
//Re-run loop 
    char again = 'Y';
    while(again == 'y' || again == 'Y'){
        int size;
        //Input check
        cout<<"Please input the size of the matrix: \n";
        while(1){
            cin>> size;
            if (size <= 8 and size >= 3){
                break;
            }
            else {
            cout<<"The size must be between 3 and 8: ";
            continue;
            }
        }
        
        srand(time(0));
        int a[max][max], b[max][max];
        
        //Conditions between -12 and 8
        for(int d=0; d < size;d++){
            for(int c=0;c<size;c++){
                int numb = rand_numb( -12 , 8);
                a[d][c]=numb;
            }
        }
        for(int d=0; d<size; d++){
            for(int c=0;c<size; c++){
                int numb = rand_numb(-12,8);
                b[d][c]=numb;
            }
        }
        int count=0;
        for(int d=0; d<size; d++){
            for(int c=0; c<size; c++){
                if(a[d][c]!=b[d][c])count++;}
        }
        
        verification(size, count);
        //Displaying the sum
        cout<<"Sum of Matrix of A and B: "<< endl;
        for(int d=0;d<size;d++){
            for(int c=0;c<size;c++){
                cout<< a[d][c] + b[d][c] <<" ";
            }
            cout<<endl;
        }
        
        cout<<endl;
        
        //Calculating and Printing Trace of Matrix A and B.
        int trace_a=0, trace_b=0;
        for(int d=0;d<size;d++){
            for(int c=0;c<size;c++){
                if (d==c) trace_a += a[d][c], trace_b += b[d][c];
            }
        }
        cout << "Trace A: "<<trace_a<< endl;
        cout << "Trace B: "<<trace_b<< endl;
        
        cout << endl;
        //Displaying Product of Matrix A and B.
        display_product(size, a, b); 
        
//Rerun verification
    cout << "\nWould you like to run this program again? Press Y or N: \n";
    cin >> again;
}
//end program
   cout << "Program terminated. \n"; 
}