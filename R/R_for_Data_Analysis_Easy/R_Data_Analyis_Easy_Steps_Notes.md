[TOC]

------------------------------------------------------

# Chapter 1

## Data & `Rstudio`

- **Data processing**: the raw data must be organized into a structured format, e.g. tables.
- **Data cleaning**: the organized data must be stripped of incomplete, duplicated, and erroneous items.

**NB** - The R interpreter will only run code on the line containing the cursor or multiple lines that you have selected (highlighted) by dragging the cursor over them.

------------------------------------

# Chapter 2

## Data types and variables

In `R` programming a **variable** is simply a useful container in which a value may be stored for subsequent use by the program. The variable name may only begin with a letter, or a period followed by a letter, and may subsequently contain only letters, digits, periods, or underscore characters. Names are case-sensitive, and spaces are not allowed in names.

Reserved words are not allowed for variables:

<img src="C:\Users\klera\Documents\GitHub\Coding_all_around\R\R_for_Data_Analysis_Easy\Images\R_reserved_words.png" alt="R_reserved_words" style="zoom:75%;" />

**NB** - Continuing the previous *NB*, a script like:

```
name <- "Username"
name <- "MK"
print(name)
```

would not be able to print `name` if none of the first two lines is run first, since no variable will be saved as `name`.

For **comments** use, the `#` character. There is no command for multi-line comments, but `Ctrl+Shift+C` would commnet out multiple lines.

- `readline()`: accepts a string argument within its parentheses to output as a prompt, then it awaits user input for assignment to a variable.
- `paste()`: accepts a comma-separated list of strings within its parentheses to join (concatenate) into a single string for assignment to a variable.

**NB** - To run the full `.R` script, choose `Source` or `Ctrl+Shift+S`.

Data types in `R`:

<img src="C:\Users\klera\Documents\GitHub\Coding_all_around\R\R_for_Data_Analysis_Easy\Images\R_data_types.png" alt="R_data_types" style="zoom:75%;" />

`R` automatically determines the variable type. Use `typeof()` to reveal it. Numeric variables are, by default, always created as a *double* data type unless an assigned integer value is suffixed by a letter `L`, e.g. `number <- 5L` (this helps with memory, if needed). Other ways to check the data type, which will return a Boolean `TRUE` or `FALSE` are: `is.character(), is.double(), is.integer(), is.logical()`. 

**NB** - In `R` Booleans are always uppercase: `TRUE`/ `FALSE` or `T`/`F`.

**NB** - Functions can be called as arguments to other functions. The innermost function calls are executed first, passing their result to the outer function as their argument value.

In `R`, a variable is actually a **vector** that contains multiple values. Multiple values are assigned to a variable using the built-in combine function `c( )` that accepts a comma-separated list of values to be assigned to the vector elements. Similar to arrays in other languages.

**NB** - Vectors in `R` are indexed starting at 1!

To find the length of a vector use: `length()`. To replace an element at index 3 do: `array[3] = new_value`. To retrieve all values in a vector except the specific element at index 3 do: `array[-3]`.  Vectors are **dynamical**, i.e. they do not have a fixed length. To add a new element to a new position do: `array[new_index] = new_value`.

Each vector can only contain values of the same data type. If you assign a mixture of integers and doubles, all elements will contain doubles (integers converted). If you assign a mixture of numbers and characters, all elements will contain characters (numbers converted). The built-in `typeof( )` function can be used to establish the data type of all elements.

**Lists** are structures that can contain different data types. Lists are indexed starting at one, just like vectors, and values are assigned to list elements by specifying them as a comma-separated list of arguments to the built-in `list( )` function. Similar to dictionaries in other languages.

**NB** - Unlike vectors, lists are not flexible, i.e. they have fixed length.

Examples:

```
data <- list( 12, 3.14, "Mike", TRUE )

# Can add keys to each value
data <- list( dozen=12, pi=3.14, user="Mike", flag=TRUE )
```

To get the key & element `Mike`, one can use either: `data[3]` or `data["user"]`. To get just the element, use the `$` sign, i.e. `data$user`.

- `names()`: retrieves all the keys in the order they appear in the list. 

- `unlist()`: returns a vector of all keys and values in order, but the names can be explicitly ignored by including a 

  `use.names=FALSE` argument.

- `sum()`, `mean()`: total of the numeric values contained in a vector, average of the numeric values contained in a vector.

## Plotting & controlling data/objects

**Plotting**: You can specify a vector argument to the built-in `plot( )` function to produce a scatter plot depicting data magnitude versus index. More typically, you can specify two vector arguments to the `plot( )` function to be represented on the plot’s X and Y axes.

For visualisation options:

````
type="o"  ## overplot points+lines
type="p"  ## points
type="l"  ## lines
type="b"  ## points+lines (not overplotted)
type="s"  ## steps
type="h"  ## histogram-like vertical lines
````

All objects stored in `R` appear in the **Environment tab** and can appear in *List* or *Grid* view. The *magnifying glass* allows more detailed inspection of a data set.

- `ls()`: list all objects within the current environment in the Console. If `ls()` is called from within a user-defined function it will only list that function’s local variables. You can use the *save* icon to save the objects in the Environment tab, and then open them in a different session.
- `rm()`: remove individual objects from the environment by specifying their name as a comma-separated argument. All objects can be removed by specifying a `list=ls()` argument, i.e. `rm(list=ls())`. You can also remove all object using the *brush* icon.

**NB** - The R Script that created objects can be closed and another R Script started to work with those objects as they are retained in the current environment.
