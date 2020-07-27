#include <iostream>

using namespace std;

string food = "Pizza";
string &meal = food; //Creates a reference variable called meal to the food variable
					 // 'food' or 'meal' can be used to refer to the value of food

int main() {
	
	cout << food << endl;
	cout << meal << endl;

	//Output the memory address
	cout << &food;

	return 0;
}

// References and Pointers (which you will learn about in the next chapter) are important
// in C++, because they give you the ability to manipulate the data in the computer's memory 
// - which can reduce the code and improve the perfomance.