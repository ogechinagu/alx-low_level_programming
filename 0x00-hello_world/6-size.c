#include <stdio.h>
/**
 * main - Entry point for the program
 * Return:Will be 0 if no error
 */
int main(void)
{
char charType;
int intType;
int longIntType;
int longLongIntType;
float floatType;
printf("Size of a char: %i byte(s) \n", sizeof(charType));
printf("Size of an int: %i byte(s) \n", sizeof(intType));
printf("Size of a long int: %i byte(s) \n", sizeof(longIntType));
printf("Size of a long long int: %i byte(s) \n", sizeof(longLongIntType));
printf("Size of a float: %i byte(s) \n", sizeof(floatType));
return (0);
}
