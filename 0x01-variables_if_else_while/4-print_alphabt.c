#include <stdio.h>

/**
* main -prints alphabet all aphabets except q and e
* followed by a new line
* Return: 0 on success
*/

int main(void)
{
char ch;

while (ch <= 'z')
{
if (ch == 'q' || 'e')
{
putchar(ch++);
}
}
putchar('\n');
return (0);
}
