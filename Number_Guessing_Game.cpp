// Gina's Number Guessing Game

// Import all necessary Libraries
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <iomanip>
using namespace std;

// Game countdown
int countdown(){
	system("cls");
				cout << setw(40) << "Game Starts in..." << endl;
				system("cls");
				system("cls");
				cout << setw(40) << "3..." << endl;
				system("cls");
				system("cls");
				cout << setw(40) << "..." << endl;
				system("cls");
				system("cls");
				cout << setw(40) << "2..." << endl;
				system("cls");
				system("cls");
				cout << setw(40) << "..." << endl;
				system("cls");
				system("cls");
				cout << setw(40) << "1..." << endl;
				system("cls");
				system("cls");
				cout << setw(40) << "..." << endl;
				system("cls");
				system("cls");
				return 0;
}

// Game Function
int game(){
	// Generate Random Number
	cout<< "Yes! The Number for you to find is hidden..." << endl;
	int number = 0 + (rand() % 100);
	int guess;
	cout << number;
	while(0 < number && number > 100){
		cout<< "What would be your guess?\n Your Guess:" << endl;
		process:
		cin >> guess;
		// Conditions  - Must be a whole number, handle errors
	    if(guess > number){
	      cout << "**warmer**" << endl;
		  cout << "Guess Again!\n Your Guess:";
		  goto process;}
	    if(guess < number){
	      cout << "**colder**" << endl;
		  cout << "Guess Again!\n Your Guess:";
		  goto process;}
		if(guess == number){
			cout << "Welldone Detective! You found the Number! \n\n Would you like to play again?\n Response=";
			int response;
		    cin >> response;
		    if(response == 1){
				countdown;
				game();
			}
			else{
				system("cls");
				cout<<"Good Job today though! Come back later when you are ready!"<< endl;
				return 0;
				}
		}
		else{
			cout << "Input a valid number ";
		}
    }
   return 0;
}

// Welcome the User and Explain what the game is about
int main(){
        cout << "Welcome to Gina's Number Guessing Game!"<< endl;
        cout << "---------------------------------------"<< endl;
        cout << "Hello there Number Detective... Put on your detective hat!\n\nI've hidden a number somewhere between 0 and 100,\ncan you use your sharp mind and logic to uncover it in the fewest tries? " << endl;
        cout << "\nJust type your guess and press enter.\nI'll whisper in your ear if you're getting **warmer** (too low) or **colder** (too high).\n\nGood luck, detective!" << endl;
        int response;
		cout << "\n\n Are you ready to start?\n 1.Yes\n 2.No\n Response=";
	    cin >> response;
	    if(response == 1){
			countdown();
			game();
		}
	else{
		system("cls");
		cout<<"No pressure! Come back later when you are ready."<< endl;
		return 0;
		}
		return 0;
}
