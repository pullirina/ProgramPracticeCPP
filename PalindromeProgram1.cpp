////programs to check palindrome
//#include<iostream>
//using namespace std;
//
//int main() {
//	//int a = 121;
//	//char buffer[100];
//	//int intStr = _itoa_s(a, buffer, 100, 10);
//	//string str = string(buffer);
//	//string revStr = "";
//
//	//int len = str.length();
//
//	//for (int i = len - 1; i >= 0; i--) {
//	//	revStr.push_back(str[i]);
//	//}
//	//if (str == revStr)
//	//	cout << "same" << endl;
//	//else
//	//	cout << "Not same" << endl;
//
//	/////////////////////////////////////////////////////////////////////////
//	
//	int a, b, c, s = 0;
//	cout << "Enter number:" << endl;
//	cin >> a;
//	c = a;
//
//	// the number is reversed inside the while loop.
//	while (a > 0)
//	{
//		b = a % 10;
//		s = (s * 10) + b;
//		a = a / 10;
//	}
//
//	if (a == s)
//		cout << "Same" << endl;
//	else
//		cout << "Not same" << endl;
//
//	return 0;
//}