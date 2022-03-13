#include <stdio.h>
/**
* main - printing the alphabets in reverse
*
* Return: Always 0 (success)
*/
int main(void)
{
char s;
for (s = 'z'; s >= 'a'; s--)
putchar(s);

putchar('\n');

return (0);
}
