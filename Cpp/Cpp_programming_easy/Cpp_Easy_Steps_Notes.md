[TOC]

# Chapter 1

## Compiling and running programs

```
c++ hello.cpp -o hello.exe
```

will compile the `c++` code and name (`-o`) the executable. (In *Linux*, the executable will have `.out`).

To run the executable, from the terminal, do either `hello.exe` or just `hello`. In *Linux*, you need `./hello`, since it does not look in the current directory unless it is explicitly directed to do so.


## Variables

Check: `vars.cpp`, `arrays.cpp`

- `C++` naming conventions – a chosen name may only contain letters, digits, and the underscore character, but cannot begin with a digit. 

- `C++` is case sensitive. Traditionally, variable names have only lower case letters.

- Specify variables as: `data-type variable-name ;`

- **Five** basic data types in `C++`:

  <img src="C:\Users\klera\Documents\GitHub\Coding_all_around\Cpp\Cpp_programming_easy\Cpp_data_types.png" alt="Cpp_data_types" style="zoom:75%;" />

- Begin boolean variables with `is`, i.e. `isTrue`, to be easily recognisable. For multiple words variables use `lowerCamelCase` convention.

- An **array** is a variable that can store multiple items of data. Index starting from 0. The size of the array must also be specified in initialisation, e.g. `int nums[6];` or directly store data as `int nums[6] = { 0, 1, 2, 3, 4, 5 };`. Each element must be of the same data type.

- An array of characters can be used to store a string of text if the final element contains the special `\0` null character, e.g. `char name[5] = { ‘m’, ‘i’, ‘k’, ‘e’, ‘\0’ } ;`.