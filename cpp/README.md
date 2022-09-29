# C++ Notes
Notes from my C++ learning

## Concepts

| Word (Abbreviations) | Concept |
| --- | --- |
| Instruction list (IL) | A set of well-known commands/instructions |
| Portability | Code compatibility for many different computer IL |
| Compiler | Tool that aid the programer to compile code |
| Compile | Process of translation high-level code to machine code |
| Linking | The process made by the compiler to join different executable code into a single executable file |
| Preprocessor directive | A modifier activated before the source code is processed. Generally to add header files.|
| Header file | Similar to a library containing additional IL |
| Prototype | It can be interpreted like a template of how a function will be used| Function body | The code that a specific function will execute when called |
| Keyword | Special words in a specific combination of characters one cannot use for naming variables, functions, etc. |
| Implementation dependent issue | Data management differences among systems on certain conditions |
| Operator | Symbol used by the language to command execute operations |
| Manipulator | Entity that commands the stream to change some data into a desired form |

## Keywords

|Keyword | Use |
| --- | --- |
| and | AND operator used to connect logical operations |
| asm | - |
| auto | - |
| bitand | - |
| bitor | - |
| bool | Declare a boolean type variable |
| break | Interrupt a loop |
| char | Declare a char (character) type variable |
| const | Declare a constant |
| continue | Skip to next iteration in a loop |
| default | - |
| delete | Deletes a vaariable (?) |
| do | Initial declaration of a *do-while* loop |
| else | Code execution in case a given condition in a *if* statement is not meet |
| export | - |
| false | False boolean value |
| float | Declare a float-point type variable |
| goto | - |
| int | Declare a integer type variable |
| long | Modifier to declare a integer 64 bits long |
| namespace | An abstract entity where the code is stored and runs (?) |
| not | Logical negation of a logical operation |
| private | - |
| public | - |
| register | - |
| short | Modifiee to declare a 16 bit integer |
| sizeof | - | 
| switch | A conditional statement allowing to evaluate multiple cases |
| throw | Code execution in case a exception/error occurs (?) |
| test | Try a particular code for exceptions/errors (?) |
| true | True boolean value |
| typeid | - | 
| union | - |
| unsigned | Modifier to declarate a 32 bit integer with no negative sign |
| virtual | - |
| void | Give an entity an empty value |
| volatile | - |
| wchar_t | - |
| xor | - |
| xor_eq | - |
| hard coding | Encoding needed data inside of source code |

## Operators

| Operator | Type | Operation | Example |
| --- | --- | --- | --- |
| * | Binary | Arithmetic multiplication | `int x = 10 * 20; // x = 200` |
| / | Binary | Arithmetic division | `float x = 20 / 10; // x = 2.0`
| + | Binary | Arithmetic addition | `int x = 5 - 2; // x = 3` |
| - | Binary | Arithmetic substraction | `float x = 2.6 - 3.4; // x = -0.8` |
| - | Unary | *Sign inversor* | `int x = 5, y = -x; // y = -5` |
| + | Unary | *Sign keeper* (?) | - |
| % | Binary | Remainder | `int x = 10 % 5; // x = 2` |
| ++ | Unary | Postfix Incrementer | `x++; // x = x + 1` |
| -- | Unary | Postfix Decrementer | `y--; // y = y - 1` |
| ++ | Unary | Prefix Incrementer | `++x;` |
| -- | Unary | Prefix Decrementer | `--y;` |
| `*=` | Binary | Shortcut multiplication | `x *= 10; // Multiply x by 10`
| /= | Bianry | Shortcut division | `x /= 2; // Divide x by 2` |
| += | Binary | Shortcut addition | `x += 5; // Add 5 to x` |
| -= | Binary | Shortcut substraction | `x -= 6; // Substract 6 to x` |
| = | Binary | Assignation operator | - |
| == | Binary | Equal comparation | 2 == 2 |
| != | Binary | Unequal comparation | 1 != 2 |
| > | Binary | greater than | x > y |
| >= | Binary | greater or equal than | x >= y |
| <= | Binary | less or equal than | x <= y |
| < | Binary | less than | 

## Operator priority

| Operator | Type |
| --- | --- |
| ++, --, +, + | Unary |
| `* , /, %` | Binary |
| +, - | Binary |
| <, <=, >, >= | Binary |
| ==, != | Binary |
| =, +=, -=, `*=`, /=, %= | Binary |


## Data type

| keyword | type | Description |
| --- | --- | --- |
| int | Integer | Entire numbers |
| float | Float-point | Numbers with decimals |
| char | Character | Single ASCII character |
| bool | Boolean | Logical operator which value can only be true or false (1 and 0) |
| double | float | Float type number with extended precision |

## Escape characters

| Literal | Description |
| --- | --- |
| \n | Transition to a new line (Line Feed) |
| \r | Return to the begining of the line (Carriage Return) |
| \a | Alarm |
| \0 | Null character |
| \aaa | Octal ASCII codes (a is octal digit) |
| \xAA | Hexadecimal ASCII codes (A is a hexadecimal digit |

## Integers

| Subtype | Description | Range |
| --- | --- | --- |
| - | When no modifier is added, standard 32 bits integer is declared | -2147483647 to 2147483647 |
| short | Declare a 16 bits long integer | -32768 to 32767 |
| long | Declare a 64 bits long integer | -9223372036854775808 to 9223372036854775807 |
| unsigned | Declare a 32 bits integer but discarding the negative parts to increase the positive range | 0 to 4294967295 |

## Code snipsets

### Minimal C++ source file

```cpp
#include <iostream>
using namespace std;

int main() {
   
   // Instruction set
   
   return 0;
}
```

### Variable declaration

```cpp
float result;
int x = 5, y = 0, z = 3;
float y = 2.1
char answer = 'Y';
bool execution = true;
```

### minimal if

```cpp
if (condition) instruction();
```

```cpp
if (hourCount >= 8) return_home();
```

### Conventional if

```cpp
if (condition) {
    first_instruction();
    second_instruction();
    ...
    n_instruction();
}
```

```cpp
if hourCount >= 8 {
    exit_work();
    do_groceries();
    make_dinner();
    eat();
    take_shower();
    sleep();
}
```

### Outputs

```cpp
int variable = 50;
cout << variable; // console outputs 50
cout << "What was the number previously printer in console? " << variable;
cout << "What's that number multiplied by four? " << 4 * variable;
```

### Manipulator

```cpp
int byte = 255;
cout << "Byte in hex: " << hex << byte;
```
### Type conversion

```cpp
#include <iostream>

using namespace std;

int main () {
    
    char i = 'X';
    int c = i;
    cout << character << " " << static_cast<int>(i);
    cout << " " << c << " " << static_cast<char>(c);

}
```

### Breaking lines

```cpp
cout << "1\n2" << endl << "3\n"; // \n escape character to break line.
				 // endl stream to break line
```

### Inputs

```cpp
cin >> userInput; // user input will be stored into userInput variable.
```

### minimal if-else

```cpp
if (condition_a) instruction_a(); // Only execute instruction_a if a condition meet
else instruction_b // Only execute if the previous condition is not met
```

### Conventional if-else

```cpp
if (condition) {

    // Code block a

}
else {

    // Code block b

}
```

### If-else in cascade

```cpp
if (condition_a) {
    
    // Code block A

}
else if (condition_b) {

    // Code block B

else if (condition_c) {

    // Code block C

} else {

    // Code block D

}
```

### More on data types

```cpp
int unsigned positiveNumbers;
int short lessNumbers;
/* int */ long moreNumbers; // while using these keywords, int can be omitted

// These can also be combined

usigned long morePositiveNumbers; // 0 to 18446744073709552000
unsigned short lessPositiveNumbers // 0 to 65535

// unsigned can also be used to char type

char word; // [-128 to 127]
char longerWord; // [0 to 255]

```


jsphthrn - José L. Yáñez 2022
