#include <iostream> // preprocessor directive call iostream in order to use cout.
		    // iostream is a header file
using namespace std; // namespace is an abstract container or environment created
		     // to hold a logical grouping of unique entities (blocks).

int main(){ // function declaration
	    // int stands for integer, the type that main() function returns.
	    // function must have a name. Every code should have at least a main
	    // funtion. But name can be anything.
	    // Finally what comes into the parenthesis is the arguments to be used
	    // in the function.
	    //
    cout << "It's me, your first program."; // << indicates an argument to cout 
    // std::cout << "It's me, your first program."; if std namespace wasn't 
    // declared
    return 0; // declaration of return interrupts execution. If a int function
	      // returns 0, typically means code executed with no issues. If a 
	      // function returns 1, typically means an error ocurred.
	      // main() does not necessary needs a return declaration, 0 is 
	      // assumed.
}

