# Sentence Statistics

A C program that analyzes a sentence and calculates basic statistics about its words.

This exercise was recreated as a review of concepts studied during the first-year Programming course in Electrical and Computer Engineering at FEUP.

## Features

- Reads a complete sentence from the user
- Counts the number of words
- Finds the longest word
- Calculates the average word length
- Processes strings character by character

## Compilation

Compile the program using GCC:

```bash
gcc sentence_stats.c -o sentence_stats
```

## Running

### Windows

```bash
.\sentence_stats.exe
```

### Linux / macOS

```bash
./sentence_stats
```

## Usage

When the program starts, enter a sentence:

```text
Frase? O jornal de hoje tem na capa uma fotografia interessante
```

The program then displays the number of words, the longest word, and the average word length.

## Example

```text
Frase? O jornal de hoje tem na capa uma fotografia interessante
Número de palavras: 10
Palavra maior: interessante
Comprimento médio: 4.800000
```

## How It Works

The sentence is stored in a character array and processed one character at a time.

### Word Count

The program identifies the beginning of each word while traversing the sentence and increments a counter whenever a new word is found.

### Longest Word

While traversing the sentence, the program keeps track of the length of the current word.

When a word is longer than the previous longest word, its starting position and length are stored.

The characters belonging to the longest word are then copied into a separate character array.

### Average Word Length

The program counts the number of characters in each word and adds them to a total.

The average word length is calculated using:

```text
average = total number of characters / number of words
```

A floating-point division is used so that decimal results can be represented.

## Concepts Practiced

- C strings
- Character arrays
- String traversal
- Functions
- Passing arrays to functions
- Loop control
- Character processing
- String termination with `'\0'`
- Floating-point calculations
