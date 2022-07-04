#include<stdio.h>
/**
*main - entry point
*
* Return: always returns 0
*/
int main(void)
{
char a;
for (a = 97; a <= 122; a++)
{
if (a == 65 || a == 90)
{
continue;
}
}
putchar (a);
return (0);
}
