#include <cmath>
#include <iostream>

using namespace std;

int main() {
	int time = 10;
	string result = (8 < time < 20) ? "Day time": "Night time";
	cout << result;
}