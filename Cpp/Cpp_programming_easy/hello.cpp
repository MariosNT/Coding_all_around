/*
Multiple line codes follow this format (using /* etc). Mostly used in debugging.

#include --> compiler uploads a library between <>
"using" --> allows functions in the specified namespace to be used without their 
namespace prefix, i.e. no need to write std::cout


"main function" --> Programs may contain many functions, but they must always 
contain one named main, otherwise the compiler will not compile the program. 

"statements" --> actions that the program will execute when it runs. Must 
be terminated by ;

"strings" --> in C++ stings use double quotes.

"return" --> Following execution, the function must return a value to the 
operating system of the data type specified in its declaration. 
Returning a 0 value, traditionally means that the program executed successfully.
*/

#include <iostream>
using namespace std;

//A C++ Program to output a greeting

int main()
{
	cout << "Hello World!" << endl ;
	return 0;
}