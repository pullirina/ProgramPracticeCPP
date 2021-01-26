//// You are building an educational website and want to create a simple calculator for students to use. The calculator will only allow addition and subtraction of non-negative integers.
//
//// Given an expression string using the "+" and "-" operators like "5+16-2", write a function to find the total.
//
//// Sample input/output:
//// calculate("6+9-12")  => 3
//// calculate("1+2-3+4-5+6-7") => -2
//// calculate("100+200+300") => 600
//// calculate("1-2-3-0") => -4
//// calculate("255") => 255
//// calculate("0-1-2-3") => -6
//
//// n: length of the input string
//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int calculate(string expr) {
//    //expression1 = "6-9+12"; // = 3
//
//    /*
//    6+9-12.
//    find the first operator '+ or -'
//
//
//    */
//
//    int finalVal = 0;
//    int i = 0;
//    while (i < expr.length()) {
//        size_t plusFound = expr.find("+");
//        size_t minusFound = expr.find("-");
//        if (plusFound > 0) {
//            string x = expr.substr(i, plusFound);
//            //cout<<x;
//            //cout<<"before"<<endl;
//           // string::size_type sz;//
//            //check is x is numeric
//            int ix = stoi(x);//, &sz);
//            cout << ix;
//            //cout<<"after"<<endl;
//            finalVal = finalVal + ix;
//            cout << "****" << finalVal << "*****" << endl;
//            i = i + x.length() + 1;
//        }
//        else if (minusFound > 0) {
//            string x = expr.substr(i, minusFound);
//            cout << x << endl;
//            cout << "Helllllo minus";
//            //string::size_type sz;
//            int ix = stoi(x);//, &sz);
//            cout << ix << endl;
//            finalVal = finalVal - ix;
//            i = i + x.length() + 1;
//        }
//    }
//    return finalVal;
//}
//
//int main() {
//
//    string expression1 = "6+9-12"; // = 3 // 15-12
//    string expression2 = "1+2-3+4-5+6-7"; // = -2 // 3-3+4-5+6-7 //0+4
//    string expression3 = "100+200+300"; // = 600 //300+300 // return 600
//                      // 100+200 -> 300  "300+300" return the string. 
//    string expression4 = "1-2-3-0"; // = -4
//    string expression5 = "255"; // = 255
//    string expression6 = "0-1-2-3"; // = -6
//
//    cout << calculate(expression1) << endl;
//    return 0;
//}
