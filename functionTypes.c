#include <stdio.h>

// Example 1: Simple function
void hello()
{
    printf("Hello, Welcome to C!\n");
}


// Example 2: Function with parameters
void greet(char name[])
{
    printf("Hello %s\n", name);
}


// Example 3: Addition
int add(int a, int b)
{
    return a + b;
}


// Example 4: Subtraction
int subtract(int a, int b)
{
    return a - b;
}


// Example 5: Multiplication
int multiply(int a, int b)
{
    return a * b;
}


// Example 6: Square
int square(int num)
{
    return num * num;
}


// Example 7: Even or Odd
void checkEvenOdd(int num)
{
    if(num % 2 == 0)
    {
        printf("%d is Even\n", num);
    }
    else
    {
        printf("%d is Odd\n", num);
    }
}


// Example 8: Largest of two numbers
int largest(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}


// Example 9: Factorial
int factorial(int num)
{
    int fact = 1;

    for(int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    return fact;
}


// Example 10: Positive, Negative or Zero
void checkNumber(int num)
{
    if(num > 0)
    {
        printf("Positive\n");
    }
    else if(num < 0)
    {
        printf("Negative\n");
    }
    else
    {
        printf("Zero\n");
    }
}


int main()
{
    // Example 1
    hello();

    // Example 2
    greet("Ramsha");

    // Example 3
    printf("Addition = %d\n", add(10, 20));

    // Example 4
    printf("Subtraction = %d\n", subtract(20, 5));

    // Example 5
    printf("Multiplication = %d\n", multiply(5, 4));

    // Example 6
    printf("Square = %d\n", square(6));

    // Example 7
    checkEvenOdd(7);
    checkEvenOdd(10);

    // Example 8
    printf("Largest = %d\n", largest(15, 25));

    // Example 9
    printf("Factorial = %d\n", factorial(5));

    // Example 10
    checkNumber(10);
    checkNumber(-5);
    checkNumber(0);

    return 0;
}#include <stdio.h>

// Example 1: Simple function
void hello()
{
    printf("Hello, Welcome to C!\n");
}


// Example 2: Function with parameters
void greet(char name[])
{
    printf("Hello %s\n", name);
}


// Example 3: Addition
int add(int a, int b)
{
    return a + b;
}


// Example 4: Subtraction
int subtract(int a, int b)
{
    return a - b;
}


// Example 5: Multiplication
int multiply(int a, int b)
{
    return a * b;
}


// Example 6: Square
int square(int num)
{
    return num * num;
}


// Example 7: Even or Odd
void checkEvenOdd(int num)
{
    if(num % 2 == 0)
    {
        printf("%d is Even\n", num);
    }
    else
    {
        printf("%d is Odd\n", num);
    }
}


// Example 8: Largest of two numbers
int largest(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}


// Example 9: Factorial
int factorial(int num)
{
    int fact = 1;

    for(int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    return fact;
}


// Example 10: Positive, Negative or Zero
void checkNumber(int num)
{
    if(num > 0)
    {
        printf("Positive\n");
    }
    else if(num < 0)
    {
        printf("Negative\n");
    }
    else
    {
        printf("Zero\n");
    }
}


int main()
{
    // Example 1
    hello();

    // Example 2
    greet("Ramsha");

    // Example 3
    printf("Addition = %d\n", add(10, 20));

    // Example 4
    printf("Subtraction = %d\n", subtract(20, 5));

    // Example 5
    printf("Multiplication = %d\n", multiply(5, 4));

    // Example 6
    printf("Square = %d\n", square(6));

    // Example 7
    checkEvenOdd(7);
    checkEvenOdd(10);

    // Example 8
    printf("Largest = %d\n", largest(15, 25));

    // Example 9
    printf("Factorial = %d\n", factorial(5));

    // Example 10
    checkNumber(10);
    checkNumber(-5);
    checkNumber(0);

    return 0;
}