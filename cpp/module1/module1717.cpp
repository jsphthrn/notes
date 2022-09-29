#include <iostream>

using namespace std;

int main () {

    char i = 'X';
    int c = i;
    cout << i << " " << static_cast<int>(i);
    cout << " " << c << " " << static_cast<char>(c);

}
