// scientific calculator
#include <iostream>
#include <cmath> //add library cmath for extra mathematic functions
using namespace std;

int main(){
    double num, num1, num2;
    char calc;
    int square;
    
    cout << "Enter type of calculation:\n"; //asks user which type of calculation
    cout << "a. Addition \n";
    cout << "b. Subtration \n";
    cout << "c. Multiplication \n";
    cout << "d. Division \n";
    cout << "e. Squared \n";
    cout << "f. Square root \n";
    cin >> calc;

    if (calc == 'f' || calc == 'F') {
        cout << "Enter a number: ";
        cin >> num;
        cout << "The square root of " << num << " is " << sqrt(num) << endl; //roots the number
        
    } else if (calc == 'e' || calc == 'E') {
        cout << "Enter a number: ";
        cin >> num;
        square = pow(num, 2); // powers the number
        cout << num << " squared is " << square << endl;
        
    } else { //if not F or E, the user is asked to input 2 numbers
        cout << "Enter two numbers: ";
        cin >> num1;
        cin >> num2;
        
        switch (calc) {
            case 'a':
            case 'A':
            cout << "The result is: " << num1 + num2 << endl; // adds both numbers
            break;
            
            case 'b':
            case 'B':
            cout << "The result is: " << num1 - num2 << endl; // subtracts both numbers
            break;
            
            case 'c':
            case 'C':
            cout << "The result is: " << num1 * num2 << endl; // multiplies both numbers
            break;
            
            case 'd':
            case 'D':
            cout << "The result is: " << num1/num2 << endl; // divides both numbers
            break;
        }
    }
    system("pause"); // tells user to press a key to exit the program
    return 0;
}