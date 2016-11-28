0x0F: Variadic Functions

0-sum_them_all.c
Returns the sum of all its parameters.
First argument is number of variadic arguments.

Example:
sum_them_all(2, 98, 1024) returns 1122.


1-print_numbers.c
Takes integers as arguments and prints them, with a separator, to stdout.
Ends the string printed with a newline.
First argument is separator desired, second is number of arguments.

Example:
print_numbers(", ", 4, 5, 6, 12, -1028) prints "5, 6, 12, -1028"


2-print_strings.c
Prints strings inputted, then a separator, to stdout. Ends with a newline.
First argument is separator desired, second is number of arguments.


Example:
print_strings(", ", 3, "Tim", "Steve", "Dave") prints "Tim, Steve, Dave"


3-print_all.c
Prints anything inputted, followed by a new line.
First argument is a list of argument types:
c: char, i: integer, f: float, s: string
Ignores all other characters.

Example:
print_all("ceis", 'T', 1, "mothy") prints "T1mothy"

100-hello_holberton.asm
A 64-bit program written in assembly that uses a syscall to write
in order to print "Hello, Holberton", followed by a newline.
Will be compiled with nasm (in elf64 format) and gcc.