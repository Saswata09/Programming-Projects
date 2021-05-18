#include<stdio.h>
void main()
{
    int money;
    printf("ENTER THE SUM OF MONEY\n");
    scanf("%d",&money);
    int denomination[9];
    for(int i=0;i<9;i++)
    {
        denomination[i]=0;
    }
    int h=money%10;
    if(h>=5)
    {
        h=h-5;
        denomination[2]=1;
    }
    if(h%2==0)
    {
        denomination[1]=h/2;
    }
    else
    {
        denomination[0]=1;
        h=h-1;
        denomination[1]=h/2;
    }
    int m=money;
    m=m-(m%10);
    m=m/10;
    int f=m%10;
    if(f>=5)
    {
        f=f-5;
        denomination[5]=1;
    }
    if(f%2==0)
    {
        denomination[4]=f/2;
    }
    else
    {
        denomination[3]=1;
        denomination[4]=(f-1)/2;
    }
    m=m-(m%10);
    m=m/10;
    int k=m%10;
    if(k>=5)
    {
        k=k-5;
        denomination[7]=1;
    }
    denomination[6]=k;
    m=m-(m%10);
    m=m/10;
    if(m>=2)
    {
        if(m%2==0)
        {
        denomination[8]=m/2;
        }
        else
        {
            m=m-1;
            denomination[7]=denomination[7]+2;
            denomination[8]=m/2;
        }
    }
    else
    {
        denomination[7]=denomination[7]+2;
    }
    int den[9]={1,2,5,10,20,50,100,500,2000};
    for(int n=0;n<9;n++)
    {
        if(denomination[n]>0)
        {
            printf("THE NUMBER OF NOTES OF RS %d DENOMINATIONS ARE = %d",den[n],denomination[n]);
            printf("\n");
        }
    }
}