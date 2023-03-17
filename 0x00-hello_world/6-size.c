#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 (Success)
 */
int main(void)
{
char c;
int i;
long int l;
long long int h;
float f;  
printf("The size of char is:%lu\n", (unsigned long) sizeof(c));
printf("The size of int is:%lu\n", (unsigned long) sizeof(i));
printf("The size of long int is:%lu\n", (unsigned long) sizeof(l));
printf("The size of long long int is:%lu\n", (unsigned long) sizeof(h));
printf("The size of float is:%lu\n", (unsigned long) sizeof(f));
return (0);
}
