// CPP program 
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string line, response; //Creates Strings
	cout << "Hello Github!" << endl; // Says Hi
	ifstream file_squestns; //Creates infile reference
	file_squestns.open("StudentQuestions.txt"); // Opens in file
	ofstream file_sanswers; //Creates outfile reference
	file_sanswers.open("StudentAnswers.txt"); // Openns out file
	while (getline(file_squestns, line)) //reads lines from infile
	{
		cout << line << " "; // prints line + a space
		cin >> response; // gets a response from the user
		file_sanswers << response << endl; //adds response to out file
	}
	cout << "Goodbye Github!" << endl; //says bye
	return 0;
}
