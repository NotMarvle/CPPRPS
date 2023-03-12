#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    string rps;
    string yn;

    cout << "Welcome to RPS!" << endl;

    cout << "Rock, paper or scissors?" << endl;

    cout << "" << endl;

    cout << "[R] - Rock" << endl;
    cout << "[P] - Paper" << endl;
    cout << "[S] - Scissors" << endl;

    cout << "" << endl;

    cout << "> ";
    cin >> rps;

    if (rps == "R" || rps == "r" || rps == "P" || rps == "p" || rps == "s" || rps == "S") {
        srand(time(0));
        
        string options[] = {"You win!", "Draw!", "You lose!"};
        
        int randomIndex = rand() % 3;
        
        cout << options[randomIndex] << endl;
    }
    else {
        cout << "Invalid RPS answer." << endl;
    }
}