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
printf("The size of a char is : %lu byte(s)\n", sizeof(a));
printf("The size of an integer is : %lu byte(s)\n", sizeof(b));
printf("The size of a long int is : %lu byte(s)\n", sizeof(fl));
printf("The size of a long long int is : %lu byte(s)\n", sizeof(lli));
printf("The size of a  float  is : %lu byte(s)\n", sizeof(db));
return (0);
}
