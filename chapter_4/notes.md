# Expressions

- The result when dividing two ints with the "/" or the "%" operator may vary on the architectur of the CPU in C89. In C99 standard truncation should always truncated towards 0.

- Making a program use an unspecified behaviour like the division of two ints in C89 above and let it depend on implementation is called "implementation defined behaviour". It is not advised and has to be documented (C Standard) if it is used.

- The unary operators "+" and "-" are right associative, while the standard binary operators "+-*/%" are left associative.

- In C the "=" is also an operator. Thus it has "side effects", in other words it alters the operands, in this case mostly a variable like "i = 0". In some other languages the "=" is not an operator but rather a statement, that's why the term operators with side effects is needed, since operators in mathematics do not change their operands.

- "=" is obviously right associative.

- "=" being an right associative operator makes it also easy to explain why you can chain them like "i = j = 0".

- One has to be careful when chaining like above, if i would be a float, j an int, then "i = j = 3.3" would lead i to be "3.0" because j was assigned 3 because of its int type.

- Variables that can be put into memory are also called "lvalues". In "v = 1" is v the lvalue. It is named like this because it can be on the lefthand side of an operator. There are also "rvalues" but in C there is not really a restriction to what is on the right hand side. Thus the author is reffering to it as expression instead.

- An evaluation of an expression can have side effects itself. Thats why "v += e" is not necessarily "v = v + e". For example v could be an expression like a[i++], where i would be incremented every time we evaluate a.

- The increment operator "++i" is not the same as "i++". The latter uses the current value of i for the iteration and increments afterwards.

- How much time passes until it is incremented is (C89 and C99) not standardized WTF? (Should be mostly until the next statement though.)

- The answer to above question is a little bit more complicated and there is actually one. The expression is evaluated before the next so called "sequence point" which is layed out in the c standard. But this is dependent on the statement or expression. A ";" statement end is a sequence point or a function call for example.

- Above reason can lead to the expression "i = 2; j = i * i++" to be undefined behaviour, because it is not clear if i is incremented before or after the second instance of i was fetched from memory.

- The postfix increment and decrement have **higher** operator precedence than the unary "+" or "-"!

- Prefix increment and decrement have the same precedence as unary + or -.

- In C **any** expression can be turned into a statement by appending ";". Like "i--;". Which is not trivial because the statement fetches i, does not use it, discards i and then decreases i.

- The discarding of values and the fact that "=" is a operator has also the peculiar effect, that "i=1;" has the value "1" as an expression which is later discarded. The fact that the value of i changed after the statement is because of side effects!! **Mind boggling**
