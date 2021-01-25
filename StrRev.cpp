//#include<iostream>
//using namespace std;
//
//int main() {
//	string str = "Rina";
//	string revStr;
//
//	for (int i = str.length() - 1; i >= 0; i--)
//		revStr.push_back(str[i]);
//	cout << "Reversed string is " << revStr << endl;
//	////////////////////////////////////////////////////////////////
//	int n = 0;
//	int mid = str.length() / 2;
//	for (int i = (str.length() - 1); i >= mid; i--) {
//		char c = str[i];
//		str[i] = str[n];
//		str[n] = c;
//		n++;
//	}
//	cout << "Reversed string is " << str << endl;
//	////////////////////////////////////////////////////////////////
//	int len = str.length();
//	int n = len - 1;
//	for (int i = 0; i < (len / 2); i++)
//	{
//		swap(str[i], str[n]);
//		n = n - 1;
//	}
//	cout << "Reversed string is " << str << endl;
//	return 0;
//}