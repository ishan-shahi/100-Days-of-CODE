#include <stdio.h>

int main()
{
    int r, c, i, j, d;

    scanf("%d %d", &r, &c);

    int a[r][c];

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(d = 0; d < r + c - 1; d++)
    {
        if(d < c)
        {
            i = 0;
            j = d;
        }
        else
        {
            i = d - c + 1;
            j = c - 1;
        }

        while(i < r && j >= 0)
        {
            printf("%d ", a[i][j]);

            i++;
            j--;
        }
    }

    return 0;
}