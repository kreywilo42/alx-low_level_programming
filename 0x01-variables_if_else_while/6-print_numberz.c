#include <stdio.h>
/**
* main - priniting digits using putchar function
*
* Return: Always 0 (Success)
*/
int main(void)
{
int p;
for (p = 0; p < 10; p++)
putchar(p + '0');

putchar('\n');

return (0);
}
