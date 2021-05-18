#include <stdio.h>
int main()
{
    int rows;
    printf("ENTER THE NUMBER OF ROWS\n");
    scanf("%d", &rows);
    int half;
    if (rows % 2 == 0)
    {
        half = rows / 2;
    }
    else
    {
        half = (rows + 1) / 2;
    }
    int h = 1;
    int g = half-1;
    for (int i = 0; i < rows; i++)
    {
        if (i == 0 || i == (rows - 1))
        {
            for (int r = 0; r < rows; r++)
            {
                printf("*");
            }
        }
        else
        {
            for (int j = 0; j < g; j++)
            {
                printf("*");
            }
            for (int w = 0; w < h; w++)
            {
                printf(" ");
            }
            if (i >= (half-1))
            {
                h = h - 2;
            }
            else
            {
                h = h + 2;
            }
            for (int p = 0; p < g; p++)
            {
                printf("*");
            }
            if (i >= (half-1))
            {
                g = g + 1;
            }
            else
            {
                g = g - 1;
            }
        }
        printf("\n");
    }
}