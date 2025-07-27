## Solution for part 3. to 6.

### 3.
Evaluate expression in C89 standard:

- (a)  8 / 5  is 1
- (b) -8 / 5  is -1 or -2
- (c)  8 / -5 is -1 or -2
- (d) -8 / -5 is  1

Solution b-d comes from the fact that in C89 no standard for truncation exists. In C99 it was changed to always truncate towards 0.

### 4.

The above expressions for C99 are: (a) is 1, (b)-(d) are -1

### 5.

C99 and C89 must fulfill the relation (a / b) * b + a % b = a
So the C89 can be calculated as a % b = -(a / b) * b + a with the addition that it is not sure if a/b gets rounded towards 0 or down anyways.


- (a)  8 % 5  is 3
- (b) -8 % 5  is -3 or  2
- (c)  8 % -5 is  3 or -2
- (d) -8 % -5 is  -3 or (2? depends on how the truncation with minus signs are treated during -8/(-5); can't check this anymore)

### 6.

Repetition for C99 yields:

- (a)  8 % 5  is 3
- (b) -8 % 5  is -3
- (c)  8 % -5 is -3
- (d) -8 % -5 is -3 

### 7.

If we substract the remainder from 10 we can produce a list "digit" with the value 10. (It is possible to substract 0).
But 10 would be two digits, that's why the second algorithm is not allowed.

### 8.

No the algorithm would not work anymore, because everything boils down to x % 10, where x could be a number between 0 and 10. But the edges of the interval both give the value 0 when the computation is executed, which would mean a doubling.
However this is only true if all numbers can be 0, except for the last digit. If not the second algorithm would work, because the total sum of all digits could never be 0!
