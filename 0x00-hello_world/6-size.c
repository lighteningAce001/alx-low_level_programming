#include <stdio.h>

/**
* main - prints the sizeofdata typeson any machine
* Return: 0
*/

int main(void)
{

char a;
int b;
float fl;
double db;
printf("The size of a char on this machine is : %lu\n" , sizeof(a));
printf("The size of an integer on this machi is : %lu\n", sizeof(b));
printf("The size of a float on this machine is : %lu\n", sizeof(fl));
printf("The size of a  double on this machine is : %lu", sizeof(db));
return (0);
}
