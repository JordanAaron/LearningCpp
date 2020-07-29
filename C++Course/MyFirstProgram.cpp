#include <iostream>

using namespace std;

void swapNums(int& x, int& y) {
	int z = x;
	x = y;
	y = z;
}

void breadToToast(string& food) {
	food = "toasted bread";
}

int main() {
	int firstNum = 10;
	int secondNum = 20;

	cout << "Before swap: " << "\n";
	cout << firstNum << secondNum << "\n";

	// Call the function, which will change the values of firstNum and secondNum
	swapNums(firstNum, secondNum);

	cout << "After swap: " << "\n";
	cout << firstNum << secondNum << "\n";


	string bread = "bread";
	cout << bread << endl;

	breadToToast(bread);
	cout << bread << endl;

	return 0;
}