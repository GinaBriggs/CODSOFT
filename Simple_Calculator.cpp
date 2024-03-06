//Gina's Simple Calculator

//Import all necessary Libraries
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <iomanip>
#include <limits>
using namespace std;

// Create functions for addition, subtraction, multiplication, division
int addition(float first, float second, char sign){
	cout << "\n---------------------------------------"<< endl;
	float result = first + second;
	cout << first << " "<< sign << " "<< second << "=" << result<< endl;
	cout << "---------------------------------------"<< endl;
	return 0;
}

int subtraction(float first, float second, char sign){
	float result = first - second;
	cout << "\n---------------------------------------"<< endl;
	cout << first << " "<< sign <<" " << second << "=" << result<< endl;
	cout << "---------------------------------------"<< endl;
	return 0;
}

int multiplication(float first, float second, char sign){
	float result = first * second;
	cout << "\n---------------------------------------"<< endl;
	cout << first <<" " << sign << " "<< second << "=" << result<< endl;
	cout << "---------------------------------------"<< endl;
	return 0;
}

int division(float first, float second, char sign){
	float result = first / second;
	cout << "\n---------------------------------------"<< endl;
	cout << first <<" "<< sign << " "<< second << " = " << result<< endl;
	cout << "---------------------------------------"<< endl;
	return 0;
}

//Welcome the User and Explain what the calculator is about
int main(){
        cout << "Welcome to Gina's Simple Calculator!"<< endl;
        cout << "------------------------------------"<< endl;
        cout << "This program is designed to perform basic arithmetic operations with floats/integers:\n\n" << endl;
        
        cout << setw(10) << "Addition(+)      "<< setw(30) << "    #    " <<setw(20) << "         " << setw(20) << " #   #" <<  setw(20) << "         " << endl;
		cout << setw(10) << "Subtraction(-)   "<< setw(30) << "    #    " << setw(20) << "         " << setw(20) << "  # # " <<  setw(20) << "    #    " << endl;
		cout << setw(10) << "Multiplication(*)"<<setw(30) << " ####### " << setw(20) << "#########" << setw(20) << "   #  " <<  setw(20) << "#########" << endl;
		cout << setw(10) << "Division(/)      " << setw(30) << "    #    " << setw(20) << "         " << setw(20) << "  # # " <<  setw(20) << "    #    " << endl;
		cout << setw(10) << "                 " << setw(30) << "    #    " << setw(20) << "         " << setw(20) << " #   #" <<  setw(20) << "         " << endl;

    	// Receive input of Two numbers from user
        float first, second;
        char sign;

        // Make a loop here
        while (true) {
            cout << "Enter first number: ";
            cin >> first;

            if (cin.fail()) {
                cout << "Invalid input. Please enter a number." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } else {
                break; 
            }
        }

        // Input loop for the operation
        while (true) {
            cout << "Enter operation (+, -, *, /): ";
            cin >> sign;

            if (cin.fail() || (sign != '+' && sign != '-' && sign != '*' && sign != '/')) {
                cout << "Invalid input. Please enter a valid operation (+, -, *, /)." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } else {
                break;
            }
        }

        // Input loop for the second number
        while (true) {
            cout << "Enter second number: ";
            cin >> second;

            if (cin.fail()) {
                cout << "Invalid input. Please enter a number." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } else {
                break; 
            }
        }

		    //Conditions  - Must be a whole number # handle errors //Allow user choose an operation to perform
       // while (true) {
			switch (sign) {
	            case '+':
	                addition(first, second, sign);
	                break;
	            case '-':
	                subtraction(first, second, sign);
	                break;
	            case '*':
	                multiplication(first, second, sign);
	                break;
	            case '/':
	                if (second == 0) {
	                    cout << "Undefined: Division by zero." << endl;
	                } else {
	                	division(first, second, sign);
	                }
	                break;
	            default:
	                cout << "Invalid operation." << endl;
	        }
   // }		
			cout << "\n Would you like to calculate again?\n 1. Yes \n 2. No\n";
			    while (true) {
			        int response;
			        cout << "Response=";
			        cin >> response;
			
			        if (response == 1) {
			        	system("cls");
			            main();
			        }
			        else if (response == 2) {
			        	cout << "--------------------------------"<< endl;
			            cout << "Calculator is Shutting Down" << endl;
			            exit(0);
			        }
			        else if (!(cin >> response)) {
			         		cout << "Invalid input. Please enter an integer." << endl;
					        cin.clear();
					        cin.ignore(numeric_limits<streamsize>::max(), '\n');}
			        else {
			            cout << "---------------------\nInput either 1 or 2\n---------------------" << endl;
			        }
		}
        
		return 0;
}