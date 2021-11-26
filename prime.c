#include <stdio.h>
int prime(int);
int main()
{
    int no, check;
    printf("Enter the number: \n");
    scanf("%d", &no);
    check = prime(no);
    if (check == 1)
    {
        printf("%d is a prime number", no);
    }
    else
        printf("%d is not a prime number", no);
    return 0;
}
int prime(int num)
{
    int i, count = 0, d;
    d = num / 2;
    for (i = 1; i <= d; i++)
    {
        if (num % i == 0)
            count++;
    }
    return count;
}
//created by Ankita
