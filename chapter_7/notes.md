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
- For reading and writing double the modifier `l` has to be prepended to the usual `%e`, `%f` and `%g`.
    - For long double it is `L`.

## Chars
- ASCII stands for American Standard Code for Information Interchange.
- Character constants have to be enclosed in single quotes, not double!
- Character constants in C are treated as small integers. 'a' for example has the value 97.
- This goes so far that one could actually have the snippet: `int i = 'a'` for it to have the value 97. Because constant chars are always treated as ints internally in C.
- Characters are ordered (at least in ASCII) and the upper case values come after the lower case values in binary representation. This means we can do simple arithmetics when wanting to go from lower case to upper case chars:
```
if ('a' <= ch && ch <= 'z')
    ch = ch - 'a' + 'A'
```
- Also one can use this fact to make loops which goes through all upper case letters. `for(ch = 'A'; ch <= 'Z'; ch++)`.
- *This can lead to many errors because arithmetics depend on the underlying character set*.
- The above implementation for switching to upper case is not the fastest. The `<ctypes.h>` provides the `toupper()` function, which is a fster implementation.
- Chars can also be signed (-128 to 128) or unsigned (0 to 255). Portability is key, use `signed` or unsigned `keyword` wherever possible!
- If one wants to use special characters one can use an escape sequence followed by a number code in either octal or hexadecimal code. For example the usual ASCII escape can be done via `'\33'` for octal or `'\x1b'` for hexadecimal (does not matter if upper or lower case, x however has to be lower!). 

## Reading and writing Chars
- When reading characters whitespace is also read by scanf if not specified in the formatting string. 
- Be careful when mixing getchar() and scanf() since scanf() will leave behing characters which it peaks, but not read will leave behing characters which it peaks, but not read!

## Type conversion
- Types get converted to the same type when compared or used for calculations. This can be a problem when comparing an unsigned int with an int of the same size, because the unsigned might be bigger during comparison, since it gets shifted.
- The casting operator, e.g. `(int) i` has a very high precedence, since it is a unary operator.

## Type definitions
- Typedefs can make redefining variable types easier later on. Since we only have to change the type in the typedef.
- One can use typedefs from `<stdint.h>` for example to make more portable code. As an example it has an integer type which is exactly 32 bit long with `int32_t`.
- The `_t` is usually used for typedefs of the standard C library.
- Typedefs are scope dependent. This is opposed to macro definitions.
- Macrodefinitions can be flawed, `#define INT_TO_PTR int * ... INT_TO_PTR p, q, j` here only `p` is an int pointer, the rest are ints! This will not happen with a typedef.

## Sizeof
-`sizeof` is actually an unary operator! This means for a single expression we do not need parantheses `sizeof i`.

## Misc
- Hexadecimal floats are very useful for extreme size or precision, since they have exact binary representations.
- The correct formatting when reading float with scanf is crucial, since it takes a pointer to a variable and has to fit it at the exact point in memory.
- The correct formatting for printf is not so important, since it will cast floats into doubles anyway.
