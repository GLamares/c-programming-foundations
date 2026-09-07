# Sorted Array Insertion

A C program that maintains an array in sorted order as new values are entered by the user.

This exercise was recreated as part of my review of the C programming concepts studied during my first year of Electrical and Computer Engineering at FEUP.

## Features

- Stores up to 15 values
- Reads one value at a time
- Inserts each value in its correct sorted position
- Shifts existing elements when necessary
- Displays the array after every insertion

## Compilation

Compile the program using GCC:

```bash
gcc sorted_array.c -o sorted_array
```

## Running

On Windows:

```bash
.\sorted_array.exe
```

On Linux/macOS:

```bash
./sorted_array
```

## Usage

Enter one integer value at a time.

After each value is entered, the program inserts it into the correct position and displays the updated sorted array.

### Example

```text
Introduza o elemento 1: 5
Vetor: {5}

Introduza o elemento 2: 3
Vetor: {3 5}

Introduza o elemento 3: 6
Vetor: {3 5 6}

Introduza o elemento 4: 4
Vetor: {3 4 5 6}
```

## How It Works

The program starts by assuming that the new value belongs at the end of the currently used part of the array.

While the previous value is greater than the new value, the previous value is shifted one position to the right.

Once the correct position is found, the new value is inserted into the array.

This allows the array to remain sorted after every insertion.

## Concepts Practiced

- Arrays
- Functions
- Array indexing
- Loops
- Conditional statements
- Insertion in sorted data
- Element shifting
- In-place array manipulation
