# Chapter 8 Arrays

- In C aggregate variables are arrays and structures.
- If the initializer of an array is shorter than the array itself, the rest of the values are set to 0.
- It is possible to use designated initializers to set the values of specific entries to non zero: `a[100] = { [77] = 1, [99] = 1}`.
- The designators do not have to be ordered.
- The array size can be omitted and be determined by the biggest designator.
- Not array related but useful here none the less. Taking any number x % y = z the solution for z is always between 0 and y - 1 for positive integers!!
