#include <iostream>

using namespace std;

//A pointer is a variable that stores a memory address

string food = "Pizza";
string* ptr = &food;

//The type of the pointer has to match the type of the variable you're working with 


int main() {
	
	cout << food << endl;
	cout << ptr << endl;

	//Deference: points to the value being held at the memory address the pointer is pointing to
	cout << *ptr << endl;

	return 0;
}