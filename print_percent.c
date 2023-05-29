#include "main.h"
/**
  * print_percent - prints a percent
  * @l: list of arguments from _printf
  * @f: pointer to the struct flags
  * Return: number of character printed
  */
int print_percent(va_list l, flags_t *f)
{
	(void)l;
	(void)f;
	return (_putchar('%'));
}
