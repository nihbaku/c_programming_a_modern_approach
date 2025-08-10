# Chapter 9 Functions

## 9.1-9.2 Defining declaring and calling functions

- In C99 it is illegal to omit the return type of a function (in C89 it will be int then).
- The body of a void function can be empty. Handy for making dataflow work and coming back later to code the function body.
- Values of non void functions can always be discarded when not caught by an assignment.
- Another way to have nothing returned in a more visible way is casting the return type to void `(void) printf("\n");`
- A function declaration before the call is necessary because otherwise the compiler will asume its returntype is int. If it is not int there will be an error if it encounters the actual definition. (Declaration != Definition!)
- C99 makes it illegal to use a function before its function prototype (declaration) or definition.
- A function declaration just clarifies what values the function takes and what the return type is: `double average(double a, double b);`.
- The declaration is actually called a *function prototype*.
- A function prototype does not have to hold the names of the variables. The following definition is also correct `double average(double, double)`.

## Arguments

- Arguments are passed by value in C!
- If no prototype was provided before, the compiler will make default promosions for the arguments of a function.
- Otherwise if a prototype was delivered the argument must not match the type of the function argument and is cast correctly.
- Arrays can be passed as values to functions. However there is not way for the function to know the size of the array, by the array itself.
- Even the `sizeof` trick does not work.
- When passing an array to a function one *does not use* the brackets for it. Just the name. Assume a is an int array and f a function: `f(int a);`.
- The function can process just a small sub array of the original one when passing a smaller length parameter. But also a larger one which would yield undefined behaviour.
- *Array arguments can be changed outside of a function*, seems to contradict pass by value but will be apparent in chapter 12!
- We can define a nxN int array a and a void function f we as follows: `void f(a[][N], int n) {...}`.

## C99 array arguments

- In C99 one can define the length of an array if it is an VLA. The length must come first though! `int f(int n, int m, a[n][m]) {...}`.
- One can ommit then the lengths in the prototypes or use an `*` or the length itself or a mixture.
- C99 allows for the static keyword to be used in the array dimension for function definition. May make code faster because the compiler is able to arrange prefetching of the values of the arrays.
- One can pass a compound literal as a substitute for an array parameter. Useful if the array passed will never be used again.
- Compound literals take the form `(keyword(s) type [n]) {values(s)}`. The keyword and length n can be omitted. They behave like array initializers!
- One can also use other lvalues for values in an compound statement, since it itself is an lvalue.
