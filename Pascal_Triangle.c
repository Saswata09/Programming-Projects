#include<stdio.h>
void main()
{
    int row;
    printf("ENTER THE NUMBER OF ROWS\n");
    scanf("%d",&row);
    printf("\n");
    int arr[row+1][(row*2)+1];
    for(int i=0;i<row+1;i++)
    {
        for(int j=0;j<(row*2+1);j++)
        {
            arr[i][j]=0;
        }
    }
    arr[0][row]=1;
    for(int g=1;g<(row+1);g++)
    {
        arr[g][row-g]=1;
        arr[g][row+g]=1;
    }
    int h=3;
    for(int d=2;d<row+1;d++)
    {
        int y=row-d+1;
        for(int a=1;a<=h;a++)
        {
        if(arr[d-1][y-1]>0 && arr[d-1][y+1]>0)
        {
            arr[d][y]=arr[d-1][y-1]+arr[d-1][y+1];
        }
        y=y+1;
        }
        h=h+2;
    }
    for(int x=0;x<row+1;x++)
    {
        for(int v=0;v<row*2+1;v++)
        {
            if(arr[x][v]>0)
            printf("%d  ",arr[x][v]);
            else
            printf("  ");
        }
        printf("\n");
    }
}