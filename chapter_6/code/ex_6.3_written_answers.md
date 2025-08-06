# Section 6.3

## 4.
Which of the loops are not the same assuming that the loop bodies are the same:
```
(a) for (i = 0; i < 10, i++)
(b) for (i = 0; i < 10; ++i)
(c) for (i = 0; i++ < 10; )
```
(a) and (b) are equivalent because the last expression is always executed after the loop body. Here is no difference between the two, because both increments are done before the next loop body is exected as this is a *sequence point*.
(c) is not equivaltent, because the increment increment is done before the loop body is executed. Since the jump into the loop body is also a *sequence point*.

## 5.
Which of the loops are not the same assuming that the loop bodies are the same:
```
(a) while (i < 10) {...}
(b) for (; i < 10;) {...}
(c) do {...}  while (i < 10);
```
(c) is not the same as the others, because if i is bigger than 10, the body gets executed at least ones, but not in the case of (a) and (b).
