# Expressions

- The result when dividing two ints with the "/" or the "%" operator may vary on the architectur of the CPU in C89. In C99 standard truncation should always truncated towards 0.

- Making a program use an unspecified behaviour like the division of two ints in C89 above and let it depend on implementation is called "implementation defined behaviour". It is not advised and has to be documented (C Standard) if it is used.

- The unary operators "+" and "-" are right associative, while the standard binary operators "+-*/%" are left associative.
