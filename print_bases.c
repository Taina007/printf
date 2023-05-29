#include "main.h"
/**
  * print_hex - prints a number in hexadecimal base in lowercase
  * @l: list of arguments
  * @f: pointer to the struct flags
  * Description: the function convert() which in turns
  * coverts the input number into the correct base
  * and returns  it as a string
  * Return: the number of char printed
  */
int print_hex(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 16, 1);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _puts("0x");
	count += _puts(str);
	return (count);
}
/**
  * print_HEX - prints a number in hexadecimal base, in uppercase
  * @l: list of arguments from _printf()
  * @f: pointer to the struct flags
  * Description: the function convert() which in turns,
  * coverts the input number into the correct base and
  * returns  it as a string.
  * Return: the number of char printed
  */
int print_HEX(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 16, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _puts("0x");
	count += _puts(str);
	return (count);
}
/**
  * print_binary - prints the number in base 2
  * @l: list of arguments from _printf()
  * @f: pointer to the struct flags
  * Description: the function convert() which in turns,
  * coverts the input number into the correct base and
  * returns  it as a string.
  * Return: the number of char printed
  */
int print_binary(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 2, 0);

	(void)f;
	return (_puts(str));
}
/**
  * print_octal - prints the number in base 8
  * @l: list of arguments
  * @f: pointer to the struct flags
  * Description: the function convert() which in turns,
  * coverts the input number into the correct base and
  * returns  it as a string.
  * Return: the number of char printed
  */
int print_octal(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 8, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _putchar('0');
	count += _puts(str);
	return (count);
}
