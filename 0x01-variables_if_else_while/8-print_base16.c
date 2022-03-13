#include <stdio.h>
/**
* main - printing the nubers of base 16 in lowercase
*
* Return: Always (0) (success)
*/
int main(void)
{
char q;

for (q = '0'; q <= '9'; q++)
putchar(q);

for (q = 'a'; q <= 'f'; q++)
putchar(q);

putchar('\n');

return (0);
}
