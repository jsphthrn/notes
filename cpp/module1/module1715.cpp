#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    int byte = 255;
    cout << setbase(16) << byte; // setbase manipulator included in *iomanip* header
				 // accepts 8, 10, 16
}

