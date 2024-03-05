//Gina's Simple Calculator

//Import all necessary Libraries
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <iomanip>
using namespace std;

// Create functions for addition, subtraction, multiplication, division
int addition(int first, int second, char sign){
	int result = first + second;
	cout << first << sign << second << "=" << result;
	return 0;
}

int subtraction(int first, int second, char sign){
	int result = first - second;
	cout << first << sign << second << "=" << result;
	return 0;
}

int multiplication(int first, int second, char sign){
	int result = first * second;
	cout << first << sign << second << "=" << result;
	return 0;
}

int division(int first, int second, char sign){
	int result = first / second;
	cout << first << sign << second << "=" << result;
	return 0;
}

//Welcome the User and Explain what the calculator is about
int main(){
        cout << "Welcome to Gina's Simple Calculator!"<< endl;
        cout << "------------------------------------"<< endl;
        cout << "This program is designed to perform basic arithmetic operations:\n addition, subtraction, multiplication, and division.\n\nHere's how to use it: " << endl;
        // Receive input of Two numbers from user
        int first, second;
        char sign;
		cout << "Enter first number:" << endl;
		cin >> first;
		cout << "Enter operation:" << endl;
		cin >> sign;
		cout << "Enter second number:" << endl;
	    cin >> second;
	    //Conditions  - Must be a whole number # handle errors //Allow user choose an operation to perform
	    if(sign = '+'){
			additon(first, second, sign);
		}
		if(sign = '-'){
			subtraction(first, second, sign);
		}
		if(sign = "x"){
			multiplication(first, second, sign);
		}
		if(sign = "/"){
			division(first, second, sign);
		}
        else{
			system("cls");
			cout<<"Enter a correct sign, either '+', '-', 'x' or '/' " << endl;
			return 0;
		}
		return 0;
}

// add while loop