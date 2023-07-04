// Required libraries.
#include <iostream>
#include <fstream>
#include <queue>
#include <cctype>
using namespace std;

// Beginning of our program.
int main(){
ifstream fin;
ofstream fout;

// Opening the input file.

fin.open("input.txt");

// Blank queue of characters.
queue<char> q; 

string line;

// File fail/success check.
if(fin.fail())
cout << "ERROR: File input.txt not opened" << endl;

else{

fout.open("output_filter.txt"); // Opening our output file.

// While loop for the input file.
while(!fin.eof()){

// Reading a line from the file itself.
getline(fin, line);

// For loop inserting the characters of our line into the queue.
for(size_t i = 0;i < line.length(); i++)
q.push(line[i]);
}


while(!q.empty()){

fout << (char)toupper(q.front()); // Using toupper to convert the front char to uppercase.

q.pop(); // Removal of the front character from "q".
}

// Closing our files.
fin.close();
fout.close();
}

return 0; // End of program.
}