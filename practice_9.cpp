#include <iostream>
using namespace std ;

int main() {
    int x;
    cout << "Enter a number :" ;
    cin >> x ;

    int y ;
    cout << "Enter a number :" ;
    cin >> y ;

    if (x > y) {
        cout << x << " is greater than " << y;
    }
    else if (x == y) {
        cout << x << " is eqals to " << y;
    }
    else {
        cout << y << " is greater than " << x ;
    }
    return 0 ;
}