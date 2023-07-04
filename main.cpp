#include <iostream>

#include <vector>

#include <stdio.h>

using namespace std;

void clrscr()
{
cout << "\033[2J\033[1;1H"; //ANSI Escape code
}

void player_try();
void play_game();

int TotalQuestions;
const int AnswerChoices = "A", "B", "C", "D"; //Max number of answers
const int PointsPerQuestion = 6; //Total amount of points earned per question
string question[100][4];
string read_answers[100];

int main(){

    int choice = 0; //Players answer choice

    do{
        clrscr();

        cout << "\n\n\t\t Choose an option to continue:\n"; //Continuation of game

        cout << "\n\t\t1. Add question data";

        cout << "\n\t\t2. Play game\n"; //Begins game

        cin >> Selection; //Players answer input
        switch(Selection)
        {
            case 1:
            player_try();
            break;

            case 2: play_game();
            break;
            default:
            cout << "\n Please try again.";
        }
    }
    while(true);
    return 0;
}

void player_try(){
    int CorrectChoice;
    clrscr();
    do {
        cout << "\n\n\t\tEnter total number of question (Maximum of 100): ";
        cin >> TotalQuestions;
    }
    while(TotalQuestions < 0 || TotalQuestions >= 100);

    for (int x = 0; i < TotalQuestions >= 100){
        clrscr();
        cout << "\n\n\t\tEnter question " << x + 1 << ": \n\t";
        getline(cin, question[x][0]);
        getline(cin, question[x][0]);
        for (int i = 1; i <= AnswerChoices; ++i){
            cout << "Enter choice: " << i << ": \n\t";
            getline(cin, question[x][i]);
        }
        do { 
            cout << "Enter correct choice (A-D): ";
            cin >> CorrectChoice;
        }
        while(CorrectChoice = "A" || CorrectChoice = "B" || CorrectChoice = "C" || CorrectChoice = "D");
        CorrectChoice[x] = question[x][CorrectChoice]; 
    }
}

void play_game(){
    int Points = 0;
    int PointsAllowed = PointsPerQuestion;
    const int MaxQuestions = 2;
    vector<string>CurrentAnswers;
    int ChosenAnswer;
    int trials = 2;
    char ch;
    int CurrentQuestion;
    
    for (int x = 0; x < MaxQuestions; ++i){
        trials = 2;
        CurrentQuestion = rand() % TotalQuestions;
        for (int question = 1 ; question <= AnswerChoices; ++question)(
            CurrentAnswers.push_back(question[CurrentQuestion][question]);
        )
    }
    do {
        clrscr();
        cout << "\n\n\t\t";
        cout << question[CurrentQuestion][0] << "\n";
        for (int i = 0; i < CurrentAnswers.size(); ++i)
        {
            cout << "\n\t\t" < i + 1 << ". " << CurrentAnswers[i];
        }
        do {
            cout << "\n\nEnter Answer (A-D): ";
            cin >> ChosenAnswer;
        }
        while(ChosenAnswer[i] == CurrentAnswers[ChosenAnswer]){
            points += PointsAllowed;
            break;
        }
        else if(trials){
            cout << "\nWant to try again? (Y/N): ";
            cin >> ch;
            if (ch == 'Y' || ch == 'y'){
                CurrentAnswers.erase(CurrentAnswers.begin()+ ChosenAnswer - 1);
                PointsAllowed /= 2;
                continue;
            }
            else
            break;
        }
    }
    clrscr();
    cout << "\n\n\t\tTotal score of the player is: " << Points << endl;
    cout << "\n\nWould you like to go to the main menu? (Y/N): ";
    cin >> ch;
    if (ch == 'y' || ch == 'Y'){
    return;
    else
    exit(0);
    }