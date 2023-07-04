//Required libraries
#include <iostream>
#include <fstream>
#include <stack>
#include <string>
using namespace std;

// Start of our program.
int main(){

ifstream fin;
ofstream fout;

// Here we're opening our input file.
fin.open("input.txt");
stack<char> st; // This creates an empty character stack.

string line;

// File open fail/success check
if(fin.fail())

cout << "ERROR: File input.txt not opened" << endl;

else{

// open output file
fout.open("output_reverse.txt");

// Our while loop to push the input file characters into the stack.
while(!fin.eof()){

getline(fin, line); // This will read a line from our input file.

// This pushes each character into ST.
for(size_t i = 0; i < line.length(); i++)
st.push(line[i]);
}

// This will loop until the entire stack (st) is cleared.
while(!st.empty()){

fout << st.top(); // This grabs the top character and outputs it.

st.pop(); // Removal of the top character from ST.
}

// Closing our files.
fin.close();
fout.close();
}
return 0; //End
}