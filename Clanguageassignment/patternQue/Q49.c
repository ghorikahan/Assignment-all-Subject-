
#include <stdio.h>

int main()
{
    int i, j, n;
    scanf("%d", &n);
    int a = 1;
    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= n; j++)
        {
            printf("%c", 'A' + a - 1);
            a++;
        }

        printf("\n");
    }

    return 0;
}