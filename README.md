# _Printf

## 📝 Description of the project

_printf is a custom implementation of the standard C function printf. This project is part of an educational challenge to understand how text formatting functions work in C and how variable arguments are handled using stdarg.h.

## 😕 What is a printf function?

The printf function (which derives its name from “print formatted”) prints a message to the screen using a “format string” that includes instructions for mixing multiple strings into the final string to display on the screen.

printf is a special function because it receives a variable number of parameters. The first parameter is fixed and is the format string. It includes text to print literally and marks to replace with text obtained from the additional parameters. Therefore, printf is called with as many parameters as there are marks in the format string plus one (the format string itself). The following example shows how to print the value of the counter variable.

The “%” symbol denotes the beginning of the format mark. The “%d” flag is replaced by the value of the counter variable and the resulting string is printed. The “\n” symbol represents a line break. The output, by default, is justified to the right of the total width that we found given to the field, which by default has the length of the string as its length.

## 🦁 Flowchart

## 🛑 **Especificadores soportados**
| Especificador | Descripción                |
|---------------|----------------------------|
| `%c`          | Imprime un carácter        |
| `%s`          | Imprime una cadena         |
| `%d` / `%i`   | Imprime números enteros    |
| `%%`          | Imprime un porcentaje (`%`)|

## 💥 Curriculum Topics We Use 

+ Variadic Functions
+ Malloc
+ Pointers 
+ Variables
+ Loops
+ Functions

## Description of the Files

+ _printf: Main File
+ main.h: Prototype Archive
+ main.c: Test File

## Authors
