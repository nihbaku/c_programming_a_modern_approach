# Selection statements

- In C most statements besides return and the expression from chapter 4 only fall into 3 categories:
    - Selection statement like if or switch.
    - Iteration statements like loops.
    - Jump statements like break, continue and the already know return.

- The other statements are the compound which groups other statements together and the null statement.
- In C there is no inherent boolean type. The comparison "i < j" either gives 0 (false) or 1 (true).
- With relational operators mixed types are allowed.
- The relational operator is left associative! 
- The expression i < j < k but evaluates with associativity to (i < j) < k, where the parenthesis are either 0 or 1!
- Equality operators (== and !=) have lower precedence than relational operators.
- Logical Operators && and || do "short circuit" evaluation. This means if the value can be deduced from the left alone then the right is not evaluated!
- The above fact makes it great for catching special cases like dividing by zero! E.g. (i != 0) && (j / i > 0)
- Precedence of ! (not) is the same as unary + or - and the precedence of && and || is lower than that of relational operators.
- ! is right associtive and && and || are left associative.
- Compound statement refers to the { } braces which come after ifs and loops which groups several statements as one block together to be executed upon the loop or conditional.
- The "else if" statement does not actually exist! It is just a convenient way to not nest cascaded if statements too much.
