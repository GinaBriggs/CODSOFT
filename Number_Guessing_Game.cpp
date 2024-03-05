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
	cout << "Yes! The Number for you to find is hidden...\n" << endl;
    int number = rand() % 101;
    int guess;
    do {
        cout << "What would be your guess?\n Your Guess:";
        cin >> guess;
		// Conditions  - Must be a whole number, handle errors
        if (guess > number) {
            cout << "**warmer**" << endl;
        }
        else if (guess < number) {
            cout << "**colder**" << endl;
        }
        else {
            cout << "Welldone Detective! You found the Number!" << endl;
            break;
			}
            
    } while (guess != number);
    
    cout << "\n Would you like to play again?\n 1. Yes \n 2. No\n   Response=";
	        int response;
	        cin >> response;

	            if (response == 1) {
	                countdown();
	                game();
	            }
	            else if (response == 2) {
	                cout << "Good Job today though! Come back later when you are ready!  :)" << endl;
	            }
	            else {
	                cout << "Incorrect Response. Exiting Game." << endl;
	                return 0;
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
