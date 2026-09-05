# EAN-13 Checksum Calculator

A C program that calculates the checksum digit of an EAN-13 barcode from its first 12 digits.

This exercise was recreated as part of my review of the C programming concepts studied during my first year of Electrical and Computer Engineering at FEUP.

## Features

- Reads the first 12 digits of an EAN-13 code
- Extracts each digit according to its position
- Applies the corresponding EAN-13 weights
- Calculates the final checksum digit

## Compilation

Compile the program using GCC:

```bash
gcc checksum.c -o checksum
```

## Running

On Windows:

```bash
.\checksum.exe
```

On Linux/macOS:

```bash
./checksum
```

## Usage

Enter the first 12 digits of the EAN-13 code as a single number.

Correct input format:

```text
400638133393
```

Do not include the checksum digit, since the purpose of the program is to calculate it.

### Example

```text
Insira um EAN-13 (sem checksum): 400638133393
Checksum: 1
```

Another example:

```text
Insira um EAN-13 (sem checksum): 503848350048
Checksum: 4
```

## How It Works

The program processes each of the 12 digits according to its position in the EAN-13 code.

Digits are multiplied alternately by weights of 1 and 3. The weighted values are added together and the checksum digit is calculated from the resulting sum.

## Concepts Practiced

- Control flow
- `for` loops
- Conditional statements
- Arithmetic operations
- Modulo operator
- Positional digit extraction
- EAN-13 checksum algorithm
