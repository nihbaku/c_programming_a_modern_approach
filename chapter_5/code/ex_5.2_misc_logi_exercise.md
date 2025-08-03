# Exercise 5.2.

## 5.
Is the statement:
```
if (n >= 1 <= 10)
    printf("n is between 1 and 10\n");
```
legal?
And if so what does n equal 0 amount to?
### Answer:
Technically this expression is legal but the asserction afterwards is not corregt. Because of associativity the expression is evaluated from left to right. Suppose n is bigger than 10, the first expression `n >= 10` evaluates to 1 because it is true. Then the rest evaluates to `1 <= 10` which is also true, but should be false, since n is greater than 10.
The case n = 0 will yield false for the first evaluation but since `0 <= 10` is also true the if statement will be executed.

## 6.
Is the following if statement legal?
```
if (n == 1-10)
    printf("n is between 1 and 10\n");
```
And what does n equal 5 do?
### Answer:
Again the statement itself is legal, but not what we think. 1-10 gets reduced to -9 and the if statement will check if n is -9. That also means `n = -5` will not yield true.
