# CPPDS-Arrays
## Abstract
The code files contains following codes in domain of arrays coded in C++ : 
1) Code of creating an user defined array.
2) Addition of Multi dimensional array/matrix.
3) Finding sum of diagnol of a matrix.

## Algorithm - code 1
1. Input the number of rows and columns (`r` and `c`).
2. Declare a 2D array `a` with `r` rows and `c` columns.
3. Input values into the array using nested loops.
4. Display the array's values in a tabular format using nested loops.

### OUTPUT
![image](https://github.com/Yaduraj01/CPPDS-Arrays/assets/110488113/fab13173-a7b1-4503-a9e2-0d385d1f44bd)



## Algorithm - code 2
1. Declare two 2x2 integer arrays, a and b, to store the input matrices.
2. Declare two integer variables, i and j, for looping.
3. Display a message to prompt the user to enter values for the first matrix a.
4. Use nested loops to iterate over the rows and columns of a:
5. Prompt the user to enter each element of a[i][j].
6. Display a message to prompt the user to enter values for the second matrix b.
7. Use nested loops to iterate over the rows and columns of b:
  a. Prompt the user to enter each element of b[i][j].
8.Display a message to indicate that you're calculating the addition of the matrices.
9.Use nested loops to iterate over the rows and columns of a and b: a. Calculate the sum of a[i][j]andb[i][j]`.
b. Display the sum in the same row and column.

### OUTPUT
![image](https://github.com/Yaduraj01/CPPDS-Arrays/assets/110488113/a285787d-dc84-421e-9838-d2476867aec8)



## Algorithm - Code 3
Here's the algorithm for your code, which calculates the sum of the diagonal elements of a 3x3 matrix:

1. Declare two integer variables, `i` and `j`, for looping, and an integer variable `sum` to store the diagonal sum.
2. Declare a 3x3 integer array `a` to store the matrix.
3. Use nested loops to iterate over the rows and columns of the matrix:
    a. Prompt the user to enter each element of `a[i][j]`.
4. Display a newline to separate input and output.
5. Use nested loops to iterate over the rows and columns of the matrix:
    a. Display the elements of the matrix in a tabular format.
6. Use nested loops to iterate over the rows and columns of the matrix:
    a. Check if the current element is on the diagonal (i.e., `i` equals `j`).
    b. If it's on the diagonal, add the value to the `sum` variable.
7. Display the sum of the diagonal elements with an appropriate message.

### OUTPUT
![image](https://github.com/Yaduraj01/CPPDS-Arrays/assets/110488113/500c6029-1be0-44c0-9a6b-0ff6c76a6371)


