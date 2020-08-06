#include <iostream>
using namespace std;

class MyClass {
	private:
		string name;

	public:
		void setName(string s) {
			name = s;
		}
		
		string getName() {
			return name;
		}
};

int main() {
	MyClass myClass;

	myClass.setName("Nadroj");

	cout << myClass.getName() << endl;

	return 0;
}