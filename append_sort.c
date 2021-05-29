#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int count_dig(int);
int first_dig(int);
int main()
{
    int num;
    printf("ENTER THE NUMBER OF CASES\n");
    scanf("%d",&num);
    int nm[num][100];
    int mn[num];
    for(int i=0;i<num;i++)
    {
        printf("\nENTER THE NO OF VALUES TO BE ENTERED FOR %dst CASE\n",i+1);
        scanf("%d",&mn[i]);
        printf("ENTER THE VALUES\n");
        for(int s=0;s<mn[i];s++)
        {
            scanf("%d",&nm[i][s]);
        }
    }
    printf("\nTHE VALUES ARE\n");
    for(int gh=0;gh<num;gh++)
    {
        printf("CASE %d : ",gh+1);
        for(int fg=0;fg<mn[gh];fg++)
        {
            printf("%d ",nm[gh][fg]);
        }
        printf("\n");
    }
    printf("\n");
    int count=0;
    for(int f=0;f<num;f++)
    {
        count=0;
        for(int a=0;a<(mn[f]-1);a++)
        {
            int d=nm[f][a+1];
            int u=nm[f][a];
            int sd=first_dig(d);
            int ds=first_dig(u);
            int p=count_dig(d);
            int q=count_dig(u);
            int k=d;
            int po=0;
            if(sd>ds)
            {
                po=0;
            }
            else
            {
                po=1;
            }
            double y=pow(10,(q-p+po));
            int g=(int)y;
            k=k*g;
            if(k<u)
            {
                int c=0;
                int flag=0;
                while(flag==0)
                {
                    k=k+c;
                    if(k>u)
                    {
                        flag=1;
                    }
                    else
                    {
                        c=c+1;
                    }
                }
            }
            nm[f][a+1]=k;
            int qw=count_dig(k);
            int s=qw-p;
            count=count+s;
            k=0;
        }
        printf("Case #%d : %d\n",f+1,count);
    }
}
int count_dig(int n)
{
    int c=0;
    while(n>0)
    {
        int d=n%10;
        c=c+1;
        n=n/10;
    }
    return c;
}
int first_dig(int n)
{
    int d;
    while(n>0)
    {
        d=n%10;
        n=n/10;
    }
    return d;
}