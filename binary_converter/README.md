# Binary Base Converter

A simple C program that reads a 4-bit binary number and displays its equivalent value in decimal, octal, and hexadecimal.

This exercise was recreated as part of my review of the C programming concepts studied during my first year of Electrical and Computer Engineering at FEUP.

## Features

- Reads a 4-bit binary number
- Converts the binary value to decimal
- Displays the equivalent value in:
  - Decimal
  - Octal
  - Hexadecimal

## Compilation

Compile the program using GCC:

```bash
gcc binary_converter.c -o binary_converter
```

## Running

```bash
./binary_converter
```

## Usage

The 4-bit binary number must be entered as four separate digits, with a space between each bit.

Correct input format:

```text
1 0 1 1
```

Do not enter the binary number as a single value:

```text
1011
```

The program expects each bit to be entered separately.

### Example

```text
Qual o valor em binario? 1 0 1 1
O valor na base decimal: 11
O valor na base octal: 13
O valor na base hexadecimal: B
```

## Concepts Practiced

- Basic data types
- User input with `scanf`
- Formatted output with `printf`
- Binary representation
- Bitwise shift operations
- Numeric base formatting
