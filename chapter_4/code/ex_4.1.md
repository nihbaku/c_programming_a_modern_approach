## Solution for part 3. to 6.

### 3.
Evaluate expression in C89 standard:

- (a)  8 / 5  is 1
- (b) -8 / 5  is -1 or -2
- (c)  8 / -5 is -1 or -2
- (d) -8 / -5 is -1 or -2

Solution b-d comes from the fact that in C89 no standard for truncation exists. In C99 it was changed to always truncate towards 0.

### 4.

The above expressions for C99 are: (a) is 1, (b)-(d) are -1

### 5.

C99 and C89 must fulfill the relation (a / b) * b + a % b = a

- (a)  8 % 5  is 
- (b) -8 % 5  is 
- (c)  8 % -5 is 
- (d) -8 % -5 is 
