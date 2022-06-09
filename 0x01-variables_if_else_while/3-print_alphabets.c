#include <stdio.h>

/**
* main - prints both upper and lower case of alphabets
* Retun: 0 on (success)
*/

int main(void)
{
char lower;
char upper;

for (lower = 'a' ; lower <= 'z'; lower++)
{
putchar(lower);
}
for (upper = 'A' ; upper <= 'Z'; upper++)
{
putchar(upper);
}
putchar('\n');
return (0);
}
