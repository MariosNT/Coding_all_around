[TOC]

------------------------------------------------------

# Chapter 1

## Compiling and running programs

```
c++ hello.cpp -o hello.exe
```

will compile the `c++` code and name (`-o`) the executable. (In *Linux*, the executable will have `.out`).

To run the executable, from the terminal, do either `hello.exe` or just `hello`. In *Linux*, you need `./hello`, since it does not look in the current directory unless it is explicitly directed to do so.


## Variables

Check: `vars.cpp`, `arrays.cpp`, `vector.cpp`, `constants.cpp`

- `C++` naming conventions – a chosen name may only contain letters, digits, and the underscore character, but cannot begin with a digit. 

- `C++` is case sensitive. Traditionally, variable names have only lower case letters.

- Specify variables as: `data-type variable-name ;`

- **Five** basic data types in `C++`:

  <img src="C:\Users\klera\Documents\GitHub\Coding_all_around\Cpp\Cpp_programming_easy\Images\Cpp_data_types.png" alt="Cpp_data_types" style="zoom:75%;" />

- Begin boolean variables with `is`, i.e. `isTrue`, to be easily recognisable. For multiple words variables use `lowerCamelCase` convention.

- An **array** is a variable that can store multiple items of data. Index starting from 0. The size of the array must also be specified in initialisation, e.g. `int nums[6];` or directly store data as `int nums[6] = { 0, 1, 2, 3, 4, 5 };`. Each element must be of the same data type.

- An array of characters can be used to store a string of text if the final element contains the special `\0` null character, e.g. `char name[5] = { ‘m’, ‘i’, ‘k’, ‘e’, ‘\0’ } ;`.

- A **vector** is a variable-length array.. Need the `C++` `#include <vector>` library. Functions in the `vector` library:

  <img src="C:\Users\klera\Documents\GitHub\Coding_all_around\Cpp\Cpp_programming_easy\Images\Functions_vector_library.png" alt="Functions_vector_library" style="zoom:75%;" />

- To initialise a vector array, do: `vector < data-type > vector-name ( size , initial-value ) ;` . The default `initial-value` is 0. To use one of the functions above, append at the end of the vector name, e.g. `vec.size()`.
- A **constant** is a value that is not supposed to change during the execution of a program. If the program attempts to change it, the compiler will complain. To declare a constant use the keyword `const` before any data type, i.e. `const double PI=3.141592 ;`.
- To declare a number of constants, the `enum` keyword can be used, e.g. `enum suit { CLUBS , DIAMONDS,  HEARTS , SPADES } ;`. Each of the constants will, by default, have a value one greater than the preceding constant in the list. Unless specified, the first constant will have a value of 0, the next a value of 1, and so on.
- One can create constants of a *custom data type*, using the keyword `typedef`, e.g. `typedef enum { NEGATIVE , POSITIVE } charge ;`, where the custom data is named `charge`. This can be used when initialising variables, e.g. `charge neutral = NEGATIVE ;`.

---------------------------------------------------------------------------

# Chapter 2

## Performing Operations

- The most common arithmetic operations in `C++` are:

  <img src="C:\Users\klera\Documents\GitHub\Coding_all_around\Cpp\Cpp_programming_easy\Images\Cpp_arithmetic_operations.png" alt="Cpp_arithmetic_operations" style="zoom:75%;" />

  The *modulus*, returns the remainder of a division. The `++` and `--` operators change a given value by 1 (usually work as *counters* in loops). The increment and decrement operators can be placed before or after a value to different effect. If placed before the operand (prefix), its value is immediately changed; if placed after the operand (postfix), its value is noted first, then the value is changed.

- The `=` operator assigns values exactly, if it is combined with another operator it modifies and assigns at the same time, e.g. `a+=b -> a = a+b`.

- **Logical** operators in `C++` are:

  <img src="C:\Users\klera\Documents\GitHub\Coding_all_around\Cpp\Cpp_programming_easy\Images\cpp_logical_operators.png" alt="cpp_logical_operators" style="zoom:75%;" />

​	Equivalent operators are: `&& <-> and`, `|| <-> or`, `! <-> not`.

​	**NB**: `0&&0` will return `0` (false). "Two wrongs don't make a right".

- **Conditional Operator** (or *ternary operator*): `?`. Works like a quick `if` statement, i.e. `( test-expression ) ? if-true-return-this : if-false-return-this;`

  The ternary operator is commonly used in `C++` programming to assign the maximum or minimum value of two variables to a third variable: `c = ( a < b ) ? a : b ;`. This assigns to `c` the minimum from `a` and `b`.

  Another common use of the ternary operator incorporates the `%` modulus operator in the test expression to determine whether the value of a variable is an odd number or an even number:
  `( var % 2 != 0 ) ? if-true(odd)-do-this : if-false(even)-do-this ;` 

  Where the result of dividing the variable value by two does leave a remainder, the number is odd – where there is no remainder, the number is even. The test expression `( var % 2 == 1 )` would have the same effect but it is preferable to test for inequality – it’s easier to spot when something is different than when it’s identical.

## Establishing size (memory)

Declaration of a variable allocates system memory where values assigned to that variable will be stored. The amount of **memory** allocated for this is determined by **your system** and the **data type**.

Example: `int` size demands:

​	Typically, an `int` data type is created as a **long** value by default, which can store values from +2,147,483,647 to -2,147,483,648. On the other hand, if the `int` data type is created as a **short** value by default, it can only store values from +32,767 to -32,768. The preferred range can be explicitly specified when declaring the variable by prefixing the `int` keyword with a short or long qualifier, e.g. `short int num`. The short `int` is useful to save memory space when you are sure the limited range will never be exceeded.

​	If `int` will contain only **positive** value, it can be defined as an **unsigned**, to increase its possible value. Typically, an `unsigned short int` has a range from zero to 65,535 and an `unsigned long int` has a range from zero to 4,294,967,295.

To find the **memory size** of any variable, use the `sizeof` operator (can be used as a function, i.e. with parentheses, but not necessary): `sizeof( var ) ; // Alternatively you can use “sizeof var ;”.` It will return the *number of bytes* allocated to the variable.

Simple data types, such as `char` and `bool`, only need a single byte of memory to store just one piece of data. Longer numeric values need more memory, according to their possible range – determined by data type and qualifiers (i.e. if they're constant, mutable etc). `Arrays` size will depend on number and type of elements.

## Precedence of Operations

Operator precedence determines the order in which `C++` evaluates expressions. In the Table below, top rows have higher precedence (are performed first). Do *not rely upon default precedence* - use parentheses to clarify order.

<img src="C:\Users\klera\Documents\GitHub\Coding_all_around\Cpp\Cpp_programming_easy\Images\cpp_precedence_1.png" alt="cpp_precedence_1" style="zoom:75%;" />

<img src="C:\Users\klera\Documents\GitHub\Coding_all_around\Cpp\Cpp_programming_easy\Images\cpp_precedence_2.png" alt="cpp_precedence_2" style="zoom:75%;" />

## Casting Data Types

Any data stored in a variable can be forced (coerced) into a variable of a different data type by a process known as *casting*. To do this, there are two options (both work in `C++`):
```
variable-name = ( data-type ) variable-name ;  // Older way, similar with C
variable-name = static_cast < data-type > variable-name ;  // Clearer way
```

Casting would be useful on certain arithmetic operations. For example, dividing integers would return an integer. To get a float number, this needs to be specified, i.e. `float result = static_cast < float > 7 / 2 ;`.

**NB** - The result of dividing an integer by another integer is *truncated, not rounded* – so a result of 9.9 would become 9.

**NB2** - It should be noted that operator precedence casts the first operand into the specified data type before implementing the arithmetic operation, so the statement can best be written as:
`float result = static_cast < float > (7) / 2 ;`, i.e. it makes 7 a float, then performs the operation. Otherwise, e.g. if the parentheses were (7/2), it would first perform the integer division and truncation, and then change the data type.

-----------------------------------------------------------------

# Chapter 3

## Branching `if` statements

The `if` conditional in `C++` evaluates a condition for a Boolean value (*true* or *false*). The syntax is:

```
// Single `if` check, if `false` the code continues.
if ( test-expression ) { statements-to-execute-when-true }  

// `if-else` check, with alternative code to run if `false`.
if ( test-expression ) { statements-to-execute-when-true }
else { statements-to-execute-when-false }  
```

**NB** - `if` conditions can test multiple statements, using the relevant operator e.g. `if ( ( num > 5 ) && ( letter == ‘A’ ) )`. Also `if` statements can be *nested* (have one inside another).

When multiple `if` statements are checked, e.g.

```
if ( num == 1 ) { cout << "Monday" ; }
else
if ( num == 2 ) { cout << "Tuesday" ; }
else
if ( num == 3 ) { cout << "Wednesday" ; }
else
if ( num == 4 ) { cout << "Thursday" ; }
else
if ( num == 5 ) { cout << "Friday" ; }
```

there is a way to *declutter* the code, using a `switch` statement: It takes a given variable value, then seeks a matching value among a number of `case` statements. Statements associated with the matching `case` statement value will then be executed. When no match is found, no `case` statements will be executed, but you may add a `default` statement after the final `case` statement to specify statements to be executed when no match is found. We need to add a `break` keyword at the end of each statement to block the program from completing the other steps, if a `case` is found.

The syntax is:

```
switch (expression) {
    case value1:
        // Code to execute if expression == value1
        break;
    case value2:
        // Code to execute if expression == value2
        break;
    default:
        // Code to execute if no cases match
}
```

## Looping: `for` and `while`

A loop is a piece of code in a program that automatically repeats. The number of iterations made by a loop is controlled by a conditional test made within the loop. While the tested expression remains `true`, the loop will continue – until the tested expression becomes `false`, at which time the loop ends.

There are three loop structures in `C++`: `for` loops, `while` loops, and `do-while` loops.

`for` loops syntax

```
for ( initializer ; test-expression ; incrementer ) { statements }
```

**NB** - Loops may be nested within other loops - so that the inner loop will fully execute its iterations, on *each* iteration of the outer loop.

`while` loop syntax

```
while (condition) {
    // block of code to be executed
}
```

**NB** - The loop’s statement block *<u>must</u>* contain code that will affect the tested expression in order to change the evaluation result to `false`, otherwise an **infinite loop** is created that will lock the system! When the tested expression is found to be `false` upon its first evaluation, the while loop’s statement block will never be executed.

`do-while` loop syntax

```
do { statements-to-be-executed } while ( test-expression ) ;
```

In a `do-while` loop, the statement block will always be executed at least once – because the expression is not evaluated until after the first iteration of the loop.

A **`break` statement** can be included in any kind of loop to immediately terminate the loop when a test condition is met. The `break` statement ensures no further iterations of that loop will be executed. Similarly, a **`continue` statement** can be included in any kind of loop to immediately terminate that particular iteration of the loop when a test condition is met. The `continue` statement allows the loop to proceed to the next iteration.

## Declaring Functions

Functions enclose a section of code that provides specific functionality to the program. Each function is declared early in the program code as a **prototype**, comprising a data type for the value it will return and the function name followed by parentheses, which may optionally contain a list of *argument* data types of passed values it may use:

```
return-data-type function-name ( arguments-data-type-list ) ;
```

or for a specific example:

```
## Returns a float value
## Takes as arguments two floats
float computeArea( float, float ) ;
```

**NB** - Use the `void()` keyword if the function will return no value to the caller.

**Defining** a function is different from **declaring** a function. The function’s definition appears later in the program code and comprises a repeat of the prototype, plus the actual function body. The function body is the statements to be executed whenever the function is called, contained within a pair of braces. E.g.

```
float computeArea( float width, float height )
{
return ( width * height ) ;
}
```

A check is done against the prototype, both for the type and number of variables. If they do not match, an error will be thrown.

**NB** - Variables defined in the function can only be used *locally*, i.e. within the function (*variable scope*)

**NB** - Note that arguments passed to a function <u>only supply a copy of the original value</u>, in a procedure known as *passing by value*.

The values passed to arguments can be *static* values, specified in the program code, or *dynamic* values that are input by the user. For user inputs, one uses the `cin` function of `C++`, with the `>>` input stream:

```
float num ;
cout << “Please enter a number: ” ;
cin >> num ;
```

Input can then be passed to a function as an argument in a function call, such as `workWith( num )`.

Optionally, a function prototype can assign default values to arguments, which will be used when a call does not pass an argument value. Multiple arguments can be assigned default values in the prototype but these must always appear at the end of the argument list, after any other arguments.

Function **overloading** allows functions of the same name to happily coexist in the same program, providing their arguments differ in number, data type, or both number and data type. The compiler matches a function call to the correct version of the function by recognizing its argument number and data types – a process known as **function resolution**. The <u>argument</u> is the most important part of the function here, in order to make the differentiation.

**NB** - It is useful to create overloaded functions when the tasks they are to perform are similar, yet subtly different.

Functions can call themselves to repeatedly execute statements contained in their function body: **recursive function**. It needs an *incrementer*, as a standard loop. The syntax is:

```
return-data-type function-name ( argument-list )
{
    statements-to-be-executed ;
    incrementer ;
    conditional-test-to-recall-or-exit ;
}
```

**NB** - A recursive function generally uses more system resources than a loop – but it can make for more readable code.

----------------------

# Chapter 4

