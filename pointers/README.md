# Pointer Basics

A C program that explores fundamental pointer concepts, including pointer initialization, dereferencing, memory addresses, type sizes, and pointer arithmetic.

This exercise was recreated as part of my review of the C programming concepts studied during my first year of Electrical and Computer Engineering at FEUP.

## Features

- Initializes pointers correctly
- Accesses variable values through pointers
- Displays memory addresses
- Compares the size of basic types and pointer types
- Demonstrates pointer arithmetic with `ptr + 1`
- Shows how pointer arithmetic depends on the pointed data type

## Compilation

Compile the program using GCC:

```bash
gcc pointers.c -o pointers
```

## Running

On Windows:

```bash
.\pointers.exe
```

On Linux/macOS:

```bash
./pointers
```

## Usage

The program does not require user input.

Simply run the executable and observe the values, memory addresses, type sizes, and pointer arithmetic results printed to the terminal.

### Example

The output will be similar to:

```text
var1 tem o endereco 000000000061FE1C e o valor 5
var2 tem o endereco 000000000061FE1B e o valor b

Tamanho dos tipos:
sizeof(char)  = 1 bytes
sizeof(char*) = 8 bytes
sizeof(int)   = 4 bytes
sizeof(int*)  = 8 bytes

Aritmetica de apontadores:
ptr1     = 000000000061FE1C
ptr1 + 1 = 000000000061FE20
ptr2     = 000000000061FE1B
ptr2 + 1 = 000000000061FE1C
```

Memory addresses and pointer sizes may vary depending on the system and architecture.

## How It Works

The program creates two variables:

```c
int var1 = 5;
char var2 = 'a';
```

Two pointers are then initialized with the addresses of those variables:

```c
int *ptr1 = &var1;
char *ptr2 = &var2;
```

Dereferencing a pointer with `*` allows the program to access or modify the value stored at that memory address.

The program also compares pointer arithmetic for different data types.

For an `int *`:

```c
ptr1 + 1
```

advances by `sizeof(int)` bytes.

For a `char *`:

```c
ptr2 + 1
```

advances by `sizeof(char)` bytes.

This demonstrates that pointer arithmetic depends on the type of data the pointer references.

## Concepts Practiced

- Pointers
- Memory addresses
- Address-of operator `&`
- Dereference operator `*`
- Pointer initialization
- `sizeof`
- Pointer arithmetic
- Data type sizes
