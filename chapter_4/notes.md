# Expressions

- The result when dividing two ints with the "/" or the "%" operator may vary on the architectur of the CPU in C89. In C99 standard truncation should always truncated towards 0.

- Making a program use an unspecified behaviour like the division of two ints in C89 above and let it depend on implementation is called "implementation defined behaviour". It is not advised and has to be documented (C Standard) if it is used.

- The unary operators "+" and "-" are right associative, while the standard binary operators "+-*/%" are left associative.

- In C the "=" is also an operator. Thus it has "side effects", in other words it alters the operands, in this case mostly a variable like "i = 0". In some other languages the "=" is not an operator but rather a statement, that's why the term operators with side effects is needed, since operators in mathematics do not change their operands.

- "=" is obviously right associative.

- "=" being an right associative operator makes it also easy to explain why you can chain them like "i = j = 0".

- One has to be careful when chaining like above, if i would be a float, j an int, then "i = j = 3.3" would lead i to be "3.0" because j was assigned 3 because of its int type.

- Variables that can be put into memory are also called "lvalues". In "v = 1" is v the lvalue.

