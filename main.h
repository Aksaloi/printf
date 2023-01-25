#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#define BUFF_SIZE 1024
int _printf(const char *format, ...);
int print_char(va_list types);
int print_string(va_list types);
int print_percent(va_list types);
int printint(va_list types, char buffer[]);
int printbinary(va_list types, char buffer[]);
int printunsigned(va_list types, char buffer[]);
int printoctal(va_list types, char buffer[]);
int printhexadecimal(va_list types, char buffer[]);
int print_hexa(va_list types, char map_to[],char buffer[]);
int print_non_printable(va_list types, char buffer[]);
int print_pointer(va_list types, char buffer[]);
int printhexa_upper(va_list types, char buffer[]);
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);
int print_rvs(va_list types, char buffer[]);
int print_rot13str(va_list types, char buffer[],int flags);
int is_printable(char);
int append_hexa_code(char, char[], int);
int is_digit(char);
long int convert_size_number(long int num, int size);
long int convert_size_unsgnd(unsigned long int num, int size);
#endif
