// Gina's Number Guessing Game

// Import all necessary Libraries
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <iomanip>
#include <ctime>
#include <cmath>
#include <limits>
using namespace std;

// Game countdown
int countdown(){
	system("cls");
				cout << setw(40) << "Game Starts in..." << endl;
				system("cls");
				system("cls");
				cout << setw(40) << "  #####  " << endl;
				cout << setw(40) << "      ##" << endl;
				cout << setw(40) << "      ##" << endl;
				cout << setw(40) << "  #####" << endl;
				cout << setw(40) << "      ##" << endl;
				cout << setw(40) << "      ##" << endl;
				cout << setw(40) << "  #####  " << endl;
				system("cls");
				cout << setw(40) << "  #####  " << endl;
				cout << setw(40) << "      ##" << endl;
				cout << setw(40) << "      ##" << endl;
				cout << setw(40) << "  #####" << endl;
				cout << setw(40) << " ##     " << endl;
				cout << setw(40) << " ##     " << endl;
				cout << setw(40) << " ###### " << endl;
				system("cls");
				cout << setw(40) << "    ##" << endl;
				cout << setw(40) << "  ####" << endl;
				cout << setw(40) << "    ##" << endl;
				cout << setw(40) << "    ##" << endl;
				cout << setw(40) << "    ##" << endl;
				cout << setw(40) << "    ##" << endl;
				cout << setw(40) << "    ##" << endl;
				system("cls");
				return 0;
}


// Game Function
int game(){
	// Generate Random Number
	srand(time(NULL));
	cout << "Yes! The Number for you to find between 0 and 100 is hidden..." << endl;
    int number = rand() % 101;
    cout << number;
    int guess;
		// Conditions  - Must be a whole number, handle errors
    while (true) {
        cout << "\nWhat would be your guess?\n Your Guess: ";
        cin >> guess;

        if (0 <= guess && guess <= 100) {
            int difference = abs(guess - number);
            if (difference > 70 && guess > number) {
                cout << "Scorching" << endl;
            }
            else if (50 < difference && difference <= 70 && guess > number) {
                cout << "Very Hot" << endl;
            }
            else if (30 < difference && difference <= 50 && guess > number) {
                cout << "Hot" << endl;
            }
            else if (10 < difference && difference <= 30 && guess > number) {
                cout << "Warm" << endl;
            }
            else if (0 < difference && difference <= 10) {
                cout << "Almost There" << endl;
            }
            else if (10 < difference && difference <= 30 && guess < number) {
                cout << "Cool" << endl;
            }
            else if (30 < difference && difference <= 50 && guess < number) {
                cout << "Cold" << endl;
            }
            else if (50 < difference && difference <= 70 && guess < number) {
                cout << "Very Cold" << endl;
            }
            else if (difference > 70 && guess < number) {
                cout << "Freezing" << endl;
            }
            else {
                cout << "Welldone Detective! You found the Number!" << endl;
                break;
            }
        }
        else {
            cout << "--------------------------------\nInput a number between 0 and 100\n--------------------------------" << endl;
        }
    }

    cout << "\n Would you like to play again?\n 1. Yes \n 2. No\n";
    while (true) {
        int response;
        cout << "Response=";
        cin >> response;

        if (response == 1) {
            countdown();
            game();
        }
        else if (response == 2) {
            cout << "Good Job today though! Come back later when you are ready!  :)" << endl;
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

       
// Welcome the User and Explain what the game is about
int main(){
        cout << "Welcome to Gina's Number Guessing Game!"<< endl;
        cout << "---------------------------------------\n"<< endl;
        cout << setw(10) << "   ,#####, " << endl;
        cout << setw(10) << "   #_   _# " <<setw(80) << "Hello there Number Detective... Put on your detective hat!" << endl;
        cout << setw(10) << "   |a` `a| " <<endl;
        cout << setw(10) << "   |  u  | " << endl;
        cout << setw(10) << "   \\  =  / " << endl;
        cout << setw(10) << "   |\\___/| " <<setw(80) << "I've hidden a number somewhere between 0 and 100," << endl;
        cout << setw(10) << "  /       \\ " << endl;
        cout << setw(10) << " / /     \\ \\ " <<endl;
        cout << setw(10) << "/ /       \\ \\ " <<endl;
        cout << setw(10) << "\\_\\       /_/ " <<  setw(80) << "can you use your sharp mind and logic to uncover it in the fewest tries?" << endl;
        cout << setw(10) << "   `'---'` " << endl;
        cout << "\nJust type your guess and press enter.\nI'll whisper in your ear if you're getting **warmer** (too high) or **colder** (too low).\n\nGood luck, detective!\n\n" << endl;
        cout << " Are you ready to start?\n 1.Yes\n 2.No" << endl;
	    while(true){
	    	int response;
			cout<< "Response=";
		    cin >> response;
	    	if(response == 1){
				countdown();
				game();
			}
			else if(response == 2){
				system("cls");
				cout<<"No pressure! Come back later when you are ready."<< endl;
				return 0;
			}
			else if(!(cin >> response)) {
         		cout << "Invalid input. Please enter an integer." << endl;
		        cin.clear();
		        cin.ignore(numeric_limits<streamsize>::max(), '\n');}
		    else{
				cout << "---------------------\nInput either 1 or 2\n---------------------" << endl;
			}
		}
		return 0;
}
