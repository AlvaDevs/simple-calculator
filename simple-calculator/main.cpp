//
//  main.cpp
//  simple-calculator
//
//  Created by Alvaro Alvarez on 13/07/23.
//

#include <iostream>

using namespace std;

int main() {
    int option = 0;
    float a = 0, b = 0;

//    Welcome
    cout << "Welcome to a small project of a very simple calculator... \nHere you will only be able to do the four basic operations and with only two numbers, but I hope you enjoy it. \nFirst thing first, what operation do you want to do? \n\n";
    
//    Operations
    cout << "Select an option: \n1. Addition \n2. Subtraction \n3. Multiplication \n4. Division \n: ";
    cin >> option;
    
    if (option >= 1 && option <= 4) {
//    Numbers
        cout << "Perfect, now tell me the two numbers to do the operation (in their order from left to rigth) \na: ";
        cin >> a;
        cout << "b: ";
        cin >> b;
        
//    Time to calculate!
        switch (option) {
            case 1:
                cout << "I think the result you were looking for was this: " << a + b << "\n";
                break;
            case 2:
                cout << "I think the result you were looking for was this: " << a - b << "\n";
                break;
            case 3:
                cout << "I think the result you were looking for was this: " << a * b << "\n";
                break;
            case 4:
                cout << "I think the result you were looking for was this: " << a / b << "\n";
                break;
        }
    } else {
        cout << "That option isn't in our possibilities at the moment, sorry for the inconvenience :( \n";
    }
    return 0;
}
