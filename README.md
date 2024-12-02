# _Printf

## 📝 Description of the project

_printf is a custom implementation of the standard C function printf. This project is part of an educational challenge to understand how text formatting functions work in C and how variable arguments are handled using stdarg.h.

## 😕 What is a printf function?

The printf function (which derives its name from “print formatted”) prints a message to the screen using a “format string” that includes instructions for mixing multiple strings into the final string to display on the screen.

printf is a special function because it receives a variable number of parameters. The first parameter is fixed and is the format string. It includes text to print literally and marks to replace with text obtained from the additional parameters. Therefore, printf is called with as many parameters as there are marks in the format string plus one (the format string itself). The following example shows how to print the value of the counter variable.

The “%” symbol denotes the beginning of the format mark. The “%d” flag is replaced by the value of the counter variable and the resulting string is printed. The “\n” symbol represents a line break. The output, by default, is justified to the right of the total width that we found given to the field, which by default has the length of the string as its length.

## 🦁 Flowchart

![Texto alternativo](https://github.com/Jonatha32/holbertonschool-printf/blob/main/Inicio.png)

## 🛑 **Supported specifications**
| Specifier     | Description                |
|---------------|----------------------------|
| `%c`          | Print a Char               |
| `%s`          | Print a String             |
| `%d` / `%i`   | Print a Int                |
| `%%`          | Print a Percent       (`%`)|

## 💥 Curriculum Topics We Use 

+ Variadic Functions
+ Malloc
+ Pointers 
+ Variables
+ Loops
+ Functions

## 📁 Description of the Files

+ _printf: Main File
+ main.h: Prototype Archive
+ main.c: Test File
+ handle_char.c: Handle Char Arguments
+ handle_integer.c: Handle Integer Arguments
+ handle_percent.c: Handle Percent
+ handle_string.c: Handle String Arguments
+ int_to_string.c: Convert an Int to a String
+ Inicio.png: Flowchart Image

## 🛠️ **Use**

Example of use in a program:

```
alex@ubuntu:~/c/printf$ cat main.c
```
```
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
```
We compile it with

```
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
```
We run it this way
```
alex@ubuntu:~/c/printf$ ./printf
```
The output should be this

```
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[0x7ffe637541f0]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
```

## 😎 Authors

* **[Fernando Falcon](https://github.com/feratholberton)** 
* **[Jonathan Pérez](https://github.com/Jonatha32)**
