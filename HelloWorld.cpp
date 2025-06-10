/*
	I am currently trying to learn and improve my C++ coding.
	In this practice I am going to learn about functions, variables, and user input.
*/

#include <iostream>
using std::cout;	//Writting it here allows for the entire code to use it
using std::endl;    //endl is the same as \n
using std::cin;     //Console input

int variable()		//Have to call function before main
{
	int slices;		//Defining
	slices = 5 + 1;

	int children = slices;	//Storing it into another variable
	cout << children << endl;

	return 0;
}

int variable_count()
{
	int slices = 5;
	cout << "You Have "<< slices << " slices of pizza." << endl;
	return 0;
}

int user_input()
{
	int slices;
	cout << "How many pieces of pizza did you eat?: ";
	cin >> slices;
	cout << "You eaten " << slices << " slices of pizza." << endl;
	return 0;
}

int main()	//using int since we are using intergers 
{
	variable();	//We have to call it in order for it to run
	variable_count();
	user_input();
	cout << "Hello, world!";	// \n makes new line
	
	return 0;
}

