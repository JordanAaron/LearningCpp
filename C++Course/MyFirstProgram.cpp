#include <iostream>
using namespace std;

class MyClass {
	public:
		int myNum;
		string myString;

		void myMethod() {
			cout << "Hello World! \n";
		}

		void declaredOutside();
};

void MyClass::declaredOutside() {
	cout << "World Hello! \n";
}

int main() {
	MyClass myObj;

	myObj.myNum = 15;
	myObj.myString = "Some text";

	cout << myObj.myNum << " " << myObj.myString << endl;

	myObj.myMethod();
	myObj.declaredOutside();

	return 0;
}