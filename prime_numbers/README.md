# Prime Number Generator

A simple C program that generates the first N prime numbers, where N is specified by the user.

This exercise was recreated as part of my review of the C programming concepts studied during my first year of Electrical and Computer Engineering at FEUP.

## Features

- Reads the number of prime numbers requested by the user
- Checks whether each number is prime
- Prints the first N prime numbers
- Uses loops and conditional statements to control the execution flow

## Compilation

Compile the program using GCC:

```bash
gcc prime_numbers.c -o prime_numbers
```

## Running

On Windows:

```bash
.\prime_numbers.exe
```

On Linux/macOS:

```bash
./prime_numbers
```

## Usage

Enter the number of prime numbers you want the program to generate.

Example input:

```text
10
```

The program will then display the first 10 prime numbers.

### Example

```text
Insira o numero de primos que pretende: 10
Os primeiros 10 numeros primos sao:
2 3 5 7 11 13 17 19 23 29
```

This follows the exercise requirement of asking the user how many prime numbers should be generated and printing that amount.

## How It Works

The program starts checking numbers from 2, since 0 and 1 are not prime numbers.

For each number, it checks whether it is divisible by any integer greater than 1 and smaller than the number itself.

If no divisor is found, the number is considered prime and is printed.

The process continues until the requested number of prime numbers has been found.

## Concepts Practiced

- Control flow
- `for` loops
- `while` loops
- Conditional statements
- Modulo operator
- Boolean variables
- Nested loops
- Basic algorithm design
