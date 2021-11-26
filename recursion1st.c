#include <stdio.h>

int Sum_of_digits(int num);

int main()
{
    int no, sum;
    printf(" Enter any number to find sum of digits: ");
    scanf("%d", &no);
    printf("Input number: %d \n", no);
    sum = Sum_of_digits(no); //calling the function for calculation

    printf("Sum of digits: %d\n", sum);

    return 0;
}

int Sum_of_digits(int n)
{
    if (n == 0)
        return 0;

    return ((n % 10) + Sum_of_digits(n1 / 10));
}
//created by Ankita
