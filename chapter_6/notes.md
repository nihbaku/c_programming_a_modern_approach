# Chapter 6

## Loops

- Do and while statements are often indistinguishable.
- It is always good to use braces for do statements because they can be mistaken for while statements.
- The for loop uses the semicolon as the separator because inside of it there are actually three expressions! `for(expr1; expr2; expr3)`
- If the second expression of a for loop is omitted it is evaluated to true always and does only stop if the loop body tells it to.
- Declaration of variables is only possible since C99.
- If the variable in the declaration of the for loop does already exist it creates a new one which is used solely inside the loop.
- There can be multiple declarations inside a foor loop using the comma operator. However they have to be the same type.

## Comma operator

- The comma operator `expr1, expr2` evaluates first `expr1` and then discards its value. Afterwards the second expression is evaluated, the value of the whole expression then becomes that of `expr2`.
- That means `expr1` has to have side effects, otherwise it is pointless.
- Precedence of the comma operator is less than that of all the other operators.
- The comma operator can be chained in ways like this: `i = 0, j = 1, i + j`.
- It is left associative and thus the above expression is chained like this: `(i = 0, j = 1), i + j`

## Loop control

- The `goto` statement can't be used to jump beyond the declaration of a variable length array, since C99.
- The `goto`statement is useful to exit from nested loops.

## Null statement

- The null statement is just an empty statement: `;`
- It is best practice to put the null statement on a line by itself.
- Putting a semicolon after the parenthesis in a loop statement may cause infinite loops or weird behaviour. So always check for that!
- Alternitives for a null statement for the loop body are stand alone `continue` and an empty compound statement `{}`.
