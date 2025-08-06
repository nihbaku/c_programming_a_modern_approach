# Basic Types in C

## Ints
- A `long int` is the same as a `signed long int`, since ints and floats in C are signed by default.
- It is possible and done a lot by C programmers to drop the word int. `long int` can just be written as `long`.
- The limitation of size of the different int types (also floats) are dependent on the machine one is on.
- One way to check the limitations of the size of ints is to look in the <limits.h>.
- To force the compiler to treat a constant as long int or unsigned int one can append `L` or `U`, where a combination can also be possible.
- C99 makes use of `ll` or `LL` for long long ints.
- The behaviour of an integer overflow of a signed int is mostly undefined. But that of an unsigned int is modulo 2^n! Adding 1 to the biggest int possible will always yield 0!
- When formatting unsigned ints we have to use `%u` instead of `%d`
- When using format to read or write the new types of ints we need to specify other formatters infront of the usual d (u, o, x):
    - ll for long long
    - l for long
    - h for short int

## Floats
- The characteristics of float storage can be seen in the `<float.h>`
- By default floating point constants are stored as double precision.
