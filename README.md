# _PRINTF PROJECT

Write your own printf function.

## What is printf? 😕

The printf function is a standard library function in the C programming language, used for output formatting. It is declared in the stdio.h header file and stands for "print formatted." The primary purpose of printf is to send formatted output to the standard output stream, typically the console or terminal.

![alt text](https://github.com/Jonatha32/holbertonschool-printf/blob/main/Inicio.jpg)

## Description of the Project 📝

_printf is a function created to mimic the functionality of the original standard library printf. 
Our _printf allows you to print anything, including the following types: strings, integers, characters, among others.

## Table of content 🖥️
1. [Functions](./funciones.c): C file containing the functions for printing strings and characters.
2. [print_int](./print_int.c): C file containing the function for printing integers.
3. [Itoa Function](./itoa.c): C file containing the function to convert an integer to a string.
4. [Main.h](.main.h): File containing the main prototypes
5. [Itoa.h](.itoa.h): File containing the prototypes for itoa.c to function.
6. [_printf](_printf.c): Main File

## Caracteristics 📑

_printf supports the following format specifiers:
+ `%c`: Prints a character.
+ `%c`: Prints a string of characters.
+ `%d` and `%i`: Print a integer
+ `%%`: Print a percentage

## Examples :dart:
Here are some examples of how to use _printf:

```

#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)

{

  len = _printf("Let's try to printf a simple sentence.\n");

  _printf("Length:[%d, %i]\n", len, len);

  _printf("Negative:[%d]\n", -762534);
  
  _printf("Character:[%c]\n", 'H');

  _printf("String:[%s]\n", "I am a string !");

  len = _printf("Percent:[%%]\n");

  _printf("Len:[%d]\n", len);

  printf("Len:[%d]\n", len2);

  return (0);
  
}
```
## Authors 😎
* **Fabrizzio Oviedo**
* **Jonathan Pérez**
