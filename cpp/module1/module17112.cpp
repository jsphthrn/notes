#include <iostream>
#include <cmath> // Header for math

using namespace std;

int main () {
    
    float userInput;
    cout << "Insert a number and the square root will be returned: ";
    cin >> userInput;

    if (userInput >= 0.0) {
        
        cout << "Your input: " << userInput << endl;
	cout << "Square root: " << sqrtf(userInput) << endl; // sqrtf() returns the square root of a float.

    }

}
