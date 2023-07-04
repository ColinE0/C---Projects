#include <iostream>
#include <string>
#include <fstream> // For file reading
#include <vector>  // Easier organization of data
using namespace std;
char Name;
int QNum;
char AnswerChoices = {'A', 'B', 'C', 'D'};

void clrscr(){cout << "\033[2J\033[1;1H";} //ANSI Escape code to clear the screen of characters.
// Read questions function to read the questions that are inside of the file.
void read_questions(){
inFS.open("questions.txt");

cout << "Opening questions.txt file." << endl; // Message display notifying the user that the file is being opened.
    if (!inFS.is_open()){
        cout << "The text file is not open." << endl; //Error message if the file is not opened correctly
        return 1;
    }   
}
// Read answers function for reading the answers inside of the text file.
void read_answers(){
inFS.open("answers.txt");

cout << "Opening answers.txt file." << endl; // Message display notifying the user that the file is being opened.
    if (!inFS.is_open()){
        cout << "Answers text file is not currently opened." << endl; //Error message if the file is not opened correctly.
    }
}




// Show Question function to display a question and it's responses. (A to D)
void show_question(const string& Question,const vector<string>& AnswerChoice){
    
    for(x = 0; x < Question.size(); ++x) {
      cout << Name << "Here's Question Number: " << QNum << endl;
      
    }
}




// Main code
int main(){
 return 0;
}