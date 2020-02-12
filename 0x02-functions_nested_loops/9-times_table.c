#include "holberton.h"

/**
 * times_table give us tables 0 - 9
 * Return: none
 */

void times_table(void)
{
int op, opn, res;

for (op = 0; op <= 9; op++)
{
for (opn = 0; opn <= 9; opn++)
{
res = op * opn;

if (res < 10 && opn != 0)
{
_putchar(' ');
_putchar(res + 48);
}
else if (res >= 10)
{
_putchar(res / 10 + 48);
_putchar(res % 10 + 48);
}
else
{
_putchar(res + 48);
}
if (opn != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
