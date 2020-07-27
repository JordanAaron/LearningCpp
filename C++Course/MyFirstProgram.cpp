#include <iostream>
#include <string>

using namespace std;

string greeting = "Hello";
string alphabet = "abcdefghijklmnopqrstuvwxyz";
string s = "Bring me bread";
string str = "ABAABACCABA";
string fullName;


int main() {

	//Can concatenate with '+' or 'append()'
	cout << greeting << endl;
	greeting.append(" World");
	cout << greeting << endl;

	//Can use 'length()' or 'size()' to retrieve a strings length
	cout << alphabet.length() << endl;

	//Accessing characters and changing characters
	cout << s[0] << endl;
	s[0] = 'G';
	cout << s << endl;

	//User Input
	cout << "Type your full name: ";
	//getline(cin, fullName);
	cin >> fullName;
	cout << "Your name is: " << fullName;

	return 0;
}