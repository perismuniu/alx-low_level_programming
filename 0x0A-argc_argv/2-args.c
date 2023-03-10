#include <stdio.h>
#include "main.h"
/**
* main - program that prints all arguments it receives including the first one.
* @argc: argument counter
* @argv: pointer to array of arguments
* Return: 0 on success
*/

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
	printf("arg[%d] = %s\n", i, argv[i]);
}
return (0);
}
