#include <stdio.h>
/**
* main - Prints all possible different combinations of two digits
*
* Return: Always 0
*/
int main(void)
{
int first_digit;
int second_digit;
for (first_digit = 0; first_digit < 9; first_digit++)
{
for (second_digit = 0; second_digit < 10; second_digit++)
{
if (first_digit != second_digit && first_digit < second_digit)
{
putchar((first_digit % 10) + '0');
putchar((second_digit % 10) + '0');
{
if (first_digit == 8)
continue;
}
putchar (',');
putchar (' ');
}
}
}
putchar ('\n');
return (0);
}
