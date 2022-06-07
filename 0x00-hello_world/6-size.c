#include <stdio.h>

/**
* main - prints the sizeofdata typeson any machine
* Return: 0
*/

int main(void)
{

char a;
int b;
long int fl;
long long int lli;
float db;
printf("Size of a char: %lu byte(s)\n", sizeof(a));
printf("Size of an int: %lu byte(s)\n", sizeof(b));
printf("Size of a long int: %lu byte(s)\n", sizeof(fl));
printf("Size of a long long int: %lu byte(s)\n", sizeof(lli));
printf("Size of a float: %lu byte(s)\n", sizeof(db));
return (0);
}
