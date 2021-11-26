#include <stdio.h>
//pattern program
int main()
{
    int i = 0, j = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i >= j)
            {
                if (i == j)
                    printf("0 \t");
                else
                    printf("1 \t");
            }
        }
        printf("\n");
    }
    return 0;
}
//created by Ankita
