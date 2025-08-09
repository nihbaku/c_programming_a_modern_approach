## 8.2

A digit in character form can be used for an array subscript in the following way: a[d-'0'], here we also assume consecutive codes for the numbers following until 9. Also this only works for arrays of size 10.

## 8.3 and 8.4

Initializing an array weekend where the first and the last value are true goes as follows (C99): `a[] = {[0] = true, [6] = true };`. Assuming we use stdbool here, otherwise true has to be 1.
In C89 this looks like: `a[] = {1, 0, 0, 0, 0, 0, 0, 1};`

## 8.2.6

Initializing a 7 segment display array may look like this:
```
a[10][7] = {
    {1, 1, 1, 1, 1, 1, 0},
    {0, 1, 1, 0, 0, 0, 0},
    {1, 1, 0, 1, 1, 0, 1},
    {1, 1, 1, 1, 0, 0, 1},
    {0, 1, 1, 0, 0, 1, 1},
    {1, 0, 1, 1, 0, 1, 1},
    {1, 0, 1, 1, 1, 1, 1},
    {1, 1, 1, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 0, 1, 1}
}
```
## 8.2.7

Compressing the initializer from the exercise before as much as possible yields:

```
a[10][7] = {
    {1, 1, 1, 1, 1, 1},
    {0, 1, 1},
    {1, 1, 0, 1, 1, 0, 1},
    {1, 1, 1, 1, 0, 0, 1},
    {0, 1, 1, 0, 0, 1, 1},
    {1, 0, 1, 1, 0, 1, 1},
    {1, 0, 1, 1, 1, 1, 1},
    {1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 0, 1, 1}
};
```
## 8.2.8

Temperature readings for a month for every hour can be stored like this:
```
float temperature_readings[30][24];
```

