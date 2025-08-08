# 7.1

Convert the following constants to decimal:
077 is 56 + 7 = 63
0x77 is 7 * 16 + 7 = 112 + 7 = 119
0XABC is 10 * 16^2 + 11 * 16 + 12 = 2748

# 7.2
## .2
Which of the following constants are not legal in C? And what is the classification of the legal constants?

(a) 010E2 legal floating point constant
(b) 32.1E+5 legal float
(c) 0790 illegal because of 9 (octal number)
(d) 100_000 illegal because of the underscore
(e) 3.978e-2 legal float

## .3
Which of the following types are not legal in C?
(a) short unsigned int is legal
(b) short float is illegal, there is no short float
(c) long double is legal, is a bigger double
(d) unsigned long is legal, is an unsigned bigger int

# 7.3
## .4
If c is a variable of type char, which one of the following statements is illegal?
(a) i += c; is legal if type of i is int
(b) c = 2 * c - 1; is also legal, simple int arithemtic
(c) putchar(c); is legal, will print c into standard output
(d) printf(c); is illegal, no formating string which is neccessary for printf!

## .5
Which of the following is not legal way to write the number 65? Assuming character set ASCII
(a) 'A' is legal, 65 is the ASCII code.
(b) 0b1000001 although a correct binary representation, it is illegal, since C does not allow for binary representation.
(c) 0101 is legal as octal representation
(d) 0x41 is also legal!

## .10
Suppose we have int i, long j, and unsigned int k. What is the type of the expression i + (int) j * k?
- The answer is unsigned int. Although we cast int here, only j gets cast and afterwards we calculate k * j which yields unsigned int, as well as the addition of the result with i.

## .12
Suppose we have int i, float f and double d. What conversions take place in the statement: `d = i + f;`
- Here we convert first the int i into a float, because of the calculation. Afterwards the float value gets stored in a double, where we do not lose precision, since the double is a more narrow type.

## 14.
Does the following statement compute the fractional part of f correctly assuming that f and frac_part are float variables?
`frac_part = f - (int) f;`
If not, what's the problem?
- The statement will compute the fractional part only if f is small enough to fit into an int. This is not ensured.
