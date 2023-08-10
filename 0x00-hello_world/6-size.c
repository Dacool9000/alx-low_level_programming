#include <stdio.h>
/**
 * main - print the various size of char
 * Return: 0 (sucess)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("the size of char %lu byte(s) \n" (unsigned long)sizeof(a));
	printf("the size of int %lu byte(s) \n" (unsigned long)sizeof(b));
	printf("the size of long int %lu byte(s) \n" (unsigned long)sizeof(c));
	printf("the size of long long int %lu byte(s) \n" (unsigned long)sizeof(d));
	printf("the size of float %lu byte(s) \n" (unsigned long)sizeof(e));
	return (0);
