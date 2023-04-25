#	printf

- iprintf is a variadic function that is used to format and print data on the stdout.
- Its used to print characters, digits, floating point numbers, and strings.

##	Syntax

printf Format[Arguments]

## 	Library

- #include <stdio.h>
- #include <stdarg.h>

##	Prototype

- int print(const char *format, ...);

##	Declaration

- int print(const char *format, ...)

##	Parameters

%[flags][field width][.precision][length]specifier

- The % symbol is an instruction to the compiler to show available specifier for formatted data.
The specifiers determine how data appears on the stdout.

###	Format Specifiers

- %c prints single characters
- %d prints decimal to base 10
- %e exponential floating point
- %g general format floating point
- %i integer in base 10
- %o numbers in octal(base 8)
- %s strings
- %u hexadecimal(base 16)
- %% percent, also \% works

- printf function takes more than one argument.

