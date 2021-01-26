//Print Multiplication Table of input Number
#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter a number" << endl;
	cin >> num;
	cout << "Multiplication table of number" << endl;
	for (int i = 1; i <= 10; i++) {
		cout << num * i << endl;
	}
	return 0;
}