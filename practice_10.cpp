//
// Created by sajeed on 12/10/22.
//
#include <iostream>
using namespace std ;

int main() {
    int x ;
    cout << "Enter a number :";
    cin >> x ;
    string result = (x == 22) ? "have a good day":"Better luck next time";
    cout << result ;
    return 0;
}