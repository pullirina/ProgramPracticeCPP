#include<iostream>
using namespace std;

int main() {
	int arr[5]; int newArr[6];
	int element, pos;
	
	cout << "Enter the array of 5 elements:" << endl;
	for (int i = 0; i < 5; ++i)
		cin >> arr[i];

	cout << "Enter the element and its position:" << endl;
	cin >> element >> pos;

	for (int i = 0; i < pos; ++i) {
			newArr[i] = arr[i];
	}
	newArr[pos] = element;
	for (int j = pos+1; j < 6; j++) {
		newArr[j] = arr[j-1];
	}

	for (int i = 0; i < 6; ++i) {
		cout << newArr[i] << endl;
	}
	return 0;
}