# Matrix Operations

A C program that performs basic operations on a square matrix stored in a one-dimensional array.

This exercise was recreated as part of my review of the C programming concepts studied during my first year of Electrical and Computer Engineering at FEUP.

## Features

- Reads a square matrix with size `N x N`
- Stores the matrix in a one-dimensional array
- Maps two-dimensional coordinates to a one-dimensional position
- Displays the matrix in its usual row and column format
- Multiplies the matrix by a scalar
- Multiplies the matrix by an `N x 1` vector

## Compilation

Compile the program using GCC:

```bash
gcc matrix_operations.c -o matrix_operations
```

## Running

On Windows:

```bash
.\matrix_operations.exe
```

On Linux/macOS:

```bash
./matrix_operations
```

## Usage

First, enter the size `N` of the square matrix.

The maximum supported size is:

```text
N <= 10
```

Then enter the `N x N` matrix elements in row-major order.

For example, for a `2 x 2` matrix:

```text
1 2 3 4
```

the program interprets the values as:

```text
1 2
3 4
```

Next, enter a scalar value to multiply the matrix.

Finally, enter the `N` values of the `N x 1` vector used in the matrix-vector multiplication.

### Example

```text
Introduza o tamanho de uma matriz quadrada com N <= 10: 2
Introduza os elementos da matriz: 1 2 3 4

Matriz:
1 2
3 4

Introduza um escalar: 2

Matriz apos produto escalar:
2 4
6 8

Introduza os elementos da matriz de multiplicacao: 5 6

Resultado da multiplicacao:
34
78
```

## How It Works

The square matrix is stored in a one-dimensional array.

The program uses the following mapping function:

```c
int pos(int x, int y, int tamanho)
{
    return x + y * tamanho;
}
```

This function converts a column and row position into the corresponding index of the one-dimensional array.

For a matrix with size `N`, the element located at column `x` and row `y` is stored at:

```text
x + y * N
```

The scalar product updates every matrix element in place.

The matrix-vector multiplication computes one result for each matrix row by multiplying the row elements by the corresponding vector elements and adding the products.

## Concepts Practiced

- One-dimensional arrays
- Matrix representation
- Two-dimensional to one-dimensional indexing
- Functions
- Nested loops
- Scalar multiplication
- Matrix-vector multiplication
- In-place data manipulation
