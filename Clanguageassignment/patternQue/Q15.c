
#include <stdio.h>

int main()
{

    int i, j, k, n;

    scanf("%d", &n);

    char alpha;

    for (i = 1; i <= n; i++) 
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++)
        {
            printf("%c", 65 + k - 1);
        }

        printf("\n");
    }

    return 0;
}