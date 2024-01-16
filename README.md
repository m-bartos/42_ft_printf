# 42_ft_printf
Recoded well-known printf() function from **libc**... Because ft_putnbr() and ft_putstr() aren’t enough!

## Description
* The function handles the following conversions: **c, s, p, d, i, u, x, X, %** Where:
  * **%c** - prints a single character
  * **%s** - prints a string (as defined by the common C convention)
  * **%p** - the void * pointer argument is printed in hexadecimal format
  * **%d** - prints a decimal (base 10) number
  * **%i** - prints an integer in base 10
  * **%u** - prints an unsigned decimal (base 10) number
  * **%x** - prints a number in hexadecimal (base 16) lowercase format
  * **%X** - prints a number in hexadecimal (base 16) uppercase format
  * **%%** - prints a percent sign
* The buffer management of the original print() is NOT implemented in this function.

## What I learned
* I learned about the concept of variadic functions, employing va_start, va_end, and va_arg for handling a variable number of arguments.
* I utilized pointers to integers as function input, enhancing the calculation of total printed characters.
* I learned how to get an integer address of a pointer type to be able to print it.
* I learned how to convert a number into different base systems (upper and lower hexa in this case).
