#include <iostream>
using namespace std ;

int main() {
    char op ;
    double num1 ;
    cout << "Enter first number :";
    cin >> num1 ;
    cout <<endl ;

    double num2 ;
    cout << "Enter second number :";
    cin >> num2 ;
    cout << endl;
    cout << "1. Addition \n";
    cout << "2. Subtraction \n";
    cout << "3. Mutliplication\n";
    cout << "4. Division";
    cout << endl ;

    int choice ;
    cout << "Enter a choice :" ;
    cin >> choice ;
    cout << endl ;
 /*
    if (choice == 1) {
        cout << num1 + num2 ;
    }
    else if (choice == 2) {
        cout << num1 - num2 ;
    }
 */

    switch (op) {
        case 1 :
            cout << num1 + num2 ;
            break ;
        case 2 :
            cout << num1 - num2 ;
            break ;
        case 3 :
            cout << num1 * num2 ;
            break ;
        case 4 :
            cout << num1 / num2 ;
            break ;
        default :
            cout << "Enter a valid operation";


    }

}

