#include <iostream>
using namespace std ;

int main() {
    float num1, num2, res ;
    int choice ;
    do {
        cout << "****** Calculator *******\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Division\n";
        cout << "4. Multiplication\n";
        cout << "5. Exit\n\n";
        cin >> choice;
        if (choice>=1 && choice<=4)
        {
            cout <<"\nEnter any two numbers: ";
            cin >> num1 >> num2 ;
        }
        switch (choice) {
            //This performs addition
            case 1 :
                res = num1 + num2 ;
                cout <<"\nResult = " <<res;
                break ;

                // This performs subtraction
            case 2 :
                res = num1 - num2 ;
                cout <<"\nResult = " <<res ;
                break ;

                // This performs division
            case 3 :
                res = num1 / num2 ;
                cout <<"\nResult = " <<res ;
                break ;

                //This performs multiplication

            case 4 :
                res = num1 * num2 ;
                cout <<"\nResult = " <<res ;
                break ;

            case 5 :
                return 0;

            default:
                cout <<"\nWrong Choice! ";
                break ;

        }
        cout <<"\n----------------------------------";
    }while(choice!=5);
    cout<<endl ;
    return 0 ;
}