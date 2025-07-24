# Chapter 3
### The printf, scanf functions and its formatting.

- There are many formatting options in C. The general way to format is with "%[-]m.pX", where - makes everything justify to left instead of right. "m" is the minumum field width. It fills the leading (succeeding in "-" case) field space with whitespace. "p" has different meaning in terms of the conversion specifier "X" which is a letter. Some of the choices of "X" with their m and p value include:
    - d integer display in decimal base (10). Here p is responsible for leading zeros.
    - e is scientific exponential display. p controls the number of digits after the decimal point. Default is 6, 0 is none.
    - f fixed decimal point display for floating point numbers. Same as with e.
    - g either fixed decimal or exponential display for floats. p controls maximum number of **significant** digits to be displayed.
