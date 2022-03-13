#include <stdio.h>
/**
* main - print alphabelt in lower and uppercase
*
* Return: (0) Success
*/
int main(void)
{
char w;

for (w = 'a'; w <= 'z'; w++)
{
putchar(w);
}
for (w = 'A'; w <= 'Z'; w++)
{
putchar(w);
}
putchar('\n');
return (0);
}
