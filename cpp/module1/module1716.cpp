#include <iostream>

using namespace std;

int main () {
    char character = 'X', minus = '-';
    float decimal = 2.5;
    cout << character << " " << minus << " " << decimal << "\n";
    // output will be:
    // X - 2.5
    
    bool verdict = 1 > 0;
    cout << verdict << "\n";
    // cout stream handles bool types as int. Thus, output will be 1 instead of true.

}
