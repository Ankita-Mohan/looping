#include <stdio.h>

int lcm(int, int);

int main()
{
    int a, b, result;

    printf("Input first number: \n");
    scanf("%d", &a);
    printf("Input second number: ");
    scanf("%d", &b);
    result = lcm(a, b);
    printf("LCM of %d and %d is %d\n", a, b, result);
    return 0;
}

int lcm(int a, int b)
{
    static int num = 1;

    if (num % a == 0 && num % b == 0)
    {
        return num;
    }
    num++;
    lcm(a, b);
    return num;
}
