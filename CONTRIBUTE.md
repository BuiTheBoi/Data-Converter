# Contribution Guidelines

## Coding Standards:

Before you contribute to this repository, please consider these following coding standards:

### Variable and functions:

- Variable and function names are to be done in **camel case** (Test case functions I've made are an exception as those names are all caps)
- Variables and functions must be sensibly named relative to their purpose. Any long pieces of code can be split into functions for ease of reading
- Functions used by the main program must have their prototypes in `functions.h`. On top of each prototype, functions must have a brief description done by comments. Function definitions are to be done in `functions.cpp`.
- If you plan to have any major/global variables, please initialize/declare them in `accessories.h`.\

### Classes and Objects

- To promote modularity, we will be using header files for function prototypes and class definitions. [Click here to learn more!](https://www.learncpp.com/cpp-tutorial/class-code-and-header-files/#:~:text=Class%20definitions%20can%20be%20put,same%20name%20as%20the%20class.)
- Data members must be private; mark them by using an underscore beforehand like `int _decimal`. You can then write get write getters/setters as `int getDecimal() const` and `void setDecimal()`.
- Member functions that do not modify their object should use `const` after it.
- Functions that take reference to an object and does not modify that object, you should be passing a `const` reference.
  (`void functionName(const int& n);`)

### Other

- Be sure your use of white space is uniform with the rest of the code base. For example, every line of code in a pair of curly braces `{}` must have a **tab**.
- Pairs of curly braces, like after an if statement, for loop, while loop, function name, etc... must be UNDER the dedicated token. Example:

```
if (i == 0)
{
    // Curly braces are UNDERNEATH the if statement. This is valid!
}

else if (i == 1) {
    // Open brace next to the else if. Not valid!
}
```

- Best to use `nullptr` instead of `NULL` when dealing with pointers.

## How to Run/Test Repo

You can run this program by typing in `sh r.sh` on your terminal. This shell script is responsible for compiling
and running your MAIN program. You can run the program's test cases by typing `sh test.sh` on your terminal. This script is
responsible for compiling and running the TEST cases file.

## Resolving Bugs and Suggesting New Features

To report new bugs or suggest new features, you are more than welcome to open an issue for discussion for the owner to see before
sending a pull request. Once I think this plan looks good, go ahead and implement. To contribute to existing issues, simply comment under each issue and wait for the owners to assign you the issue before making your changes.

When making any contributions, please fork this repository, clone it onto your machine to make your desired changes, and make a pull request. Your PR will be evaluated by the owner to decide on merging your changes.

### Workflow to Evaluate Pull Requests
