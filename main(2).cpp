//Project 2
//This program shows the distribution of electromagnetic radiation in frequency and wavelength.
//Colin Wilder
//2-25-2021

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    char again = 'Y';
    char c;
    double wavelength;
    double frequency;
    //re-run
    while (again == 'y' || again == 'Y') {
        
    //Start
    cout << "Please input F for frequency or W for wavelength: ";
    cin >> c;
    
    while (!((c == 'F') || (c == 'f') || (c == 'W') || (c == 'w'))){
        cout << "Invalid option. F(requency) or W(avelength) only: ";
        cin.clear();
        cin.ignore(100,'\n');
        cin >> c;
    }
        //Wavelength path
if (c == 'W' || c == 'w'){
    cout << "Enter (positive integer) wavelength(cm): ";
    cin >> wavelength;
    if (wavelength ==10){
            cout<<"Radio \n";
        }
        else if (wavelength >= 0.01 && wavelength <=10){
            cout<< "Microwave \n";
        }
        else if (wavelength >= .00004 && wavelength <= 0.01){
            cout<< "Infrared \n";
        }
        else if (wavelength >= .00004 && wavelength < .00007){
            cout<< "Visible \n";
        }
        else if (wavelength >= pow(10,-7) && wavelength < .00004){
            cout<< "Ultraviolet \n";
        }
        else if (wavelength >= pow(10,-9) && wavelength < pow(10,-7)){
            cout<< "X-Ray \n";
        }
}
//Frequency path
else if (c == 'f' || c== 'F'){
    cout << "Enter (positive integer) frequency (Hz): ";
    cin >> frequency;
    
    if (frequency < 3*pow(10,9))
        {
            cout << "Radio \n";
        }
        else if(frequency >= 3*pow(10,9) && frequency < 3*pow(10,12))
            {
            cout << "Microwave \n";
        }
        else if(frequency >= 3*pow(10,12) && frequency < 4.3*pow(10,14))
            {
            cout << "Infrared \n";
        }
        else if(frequency >= 4.3*pow(10,14) && frequency < 7.5*pow(10,14))
            {
            cout << "Visible \n";
        }
        else if(frequency >7.5*pow(10,14) && frequency < 3*pow(10,17))
            {
            cout << "Ultraviolet \n";
        }
        else if(frequency > 3*pow(10,17) && frequency < 3*pow(10,19))
            {
            cout << "X-Ray \n";
        }
        else if(frequency > 3*pow(10,19))
            {
            cout << "Gamma Rays \n";
}
cout << "Would you like to re-run the program? Press Y or N: \n";
cin >> again;

}
    }
    cout << "Program Terminated. \n";
    }