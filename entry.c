#include "shell.h"

/**
 * add_values - Adds two numbers.
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: The sum of num1 and num2.
 */
int add_values(int num1, int num2)
{
    return num1 + num2;
}

/**
 * entry_point - Entry point of the program.
 *
 * Return: Always 0 (Success).
 */
int entry_point(void)
{
    int value1 = 5;
    int value2 = 10;
    int result;

    result = add_values(value1, value2);

    shell_print("The sum of %d and %d is: %d\n", value1, value2, result);

    return 0;
}
