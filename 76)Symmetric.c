#include <stdio.h>

int main()
{
    int n, m, i, j;
    int symmetric = 1;

    scanf("%d %d", &n, &m);

    if(n != m)
    {
        printf("False");
        return 0;
    }

    int a[n][n];

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i][j] != a[j][i])
            {
                symmetric = 0;
            }
        }
    }

    if(symmetric == 1)
        printf("True");
    else
        printf("False");

    return 0;
}