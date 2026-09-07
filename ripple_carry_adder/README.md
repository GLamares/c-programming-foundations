# Ripple Carry Adder

A C program that simulates the behavior of a ripple carry adder to add two binary numbers.

This exercise was recreated as part of my review of the C programming concepts studied during my first year of Electrical and Computer Engineering at FEUP.

## Features

- Reads two binary numbers from the user
- Processes the numbers digit by digit
- Calculates each sum bit using XOR operations
- Propagates the carry between consecutive bit positions
- Returns the final binary result

## Compilation

Compile the program using GCC:

```bash
gcc ripple_carry_adder.c -o ripple_carry_adder
```

## Running

On Windows:

```bash
.\ripple_carry_adder.exe
```

On Linux/macOS:

```bash
./ripple_carry_adder
```

## Usage

Enter each binary operand as a sequence of `0` and `1` digits.

Example input:

```text
111
111
```

The program treats the entered values as binary digits and performs the addition bit by bit.

### Example

```text
Insira o primeiro operando: 111
Insira o segundo operando: 111
A soma dos dois numeros binarios e: 1110
```

## How It Works

For each pair of binary digits, the program calculates:

- the sum bit using XOR operations
- the carry-out for the next position

The carry generated in one position is used as the carry-in of the next position, reproducing the behavior of a ripple carry adder.

## Concepts Practiced

- Functions
- Binary arithmetic
- Bitwise operators
- XOR
- AND
- OR
- Loops
- Carry propagation
- Full adder logic
