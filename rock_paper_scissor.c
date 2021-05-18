#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    printf("THE CHOICES ARE\n");
    printf("ROCK\n");
    printf("PAPER\n");
    printf("SCISSOR\n");
    printf("\n");
    char ch[3][100] = {"ROCK", "PAPER", "SCISSOR"};
    int score_system = 0;
    int score_user = 0;
    int i = 1;
    char c[100];
    while (i == 1)
    {
        int num;
        srand(time(0));
        num = rand() % 3;
        char choice[100];
        strcpy(choice,ch[num]);
        int r=1;
        while(r==1)
        {
        printf("ENTER YOUR CHOICE. I HAVE ALREADY DECIDED MINE\n");
        gets(c);
        if(strcmp(c,"ROCK")==0 || strcmp(c,"rock")==0 || strcmp(c,"SCISSOR")==0 || strcmp(c,"scissor")==0 || strcmp(c,"PAPER")==0 || strcmp(c,"paper")==0)
        {
            r=0;
        }
        else
        {
            printf("WRONG CHOICE ENTERED\n");
            printf("PLEASE ENTER AGAIN\n");
            r=1;
        }
        }
        strupr(c);
        printf("THE SYSTEM HAD CHOSEN %s\n",choice);
        printf("\n");
        if (strcmp(choice,"ROCK")==0)
        {
            if (strcmp(c,"SCISSOR")==0)
            {
                printf("THE SYSTEM WINS\n");
                score_system = score_system + 1;
            }
            else if (strcmp(c,"PAPER")==0)
            {
                printf("THE USER WINS\n");
                score_user = score_user + 1;
            }
            else if(strcmp(c,choice)==0)
            {
                printf("THIS MATCH IS DRAWN\n");
            }
        }
        else if (strcmp(choice,"SCISSOR")==0)
        {
            if (strcmp(c,"PAPER")==0)
            {
                printf("THE SYSTEM WINS\n");
                score_system = score_system + 1;
            }
            else if (strcmp(c,"ROCK")==0)
            {
                printf("THE USER WINS\n");
                score_user = score_user + 1;
            }
            else if(strcmp(c,choice)==0)
            {
                printf("THIS MATCH IS DRAWN\n");
            }
        }
        else if (strcmp(choice,"PAPER")==0)
        {
            if (strcmp(c,"ROCK")==0)
            {
                printf("THE SYSTEM WINS\n");
                score_system = score_system + 1;
            }
            else if (strcmp(c,"SCISSOR")==0)
            {
                printf("THE USER WINS\n");
                score_user = score_user + 1;
            }
            else if(strcmp(c,choice)==0)
            {
                printf("THIS MATCH IS DRAWN\n");
            }
        }
        int t=1;
        while(t==1)
        {
        printf("DO YOU WANT TO PLAY AGAIN. PLEASE ENTER Y/N\n");
        char chw[1];
        gets(chw);
        if(strcmp(chw,"Y")==0 || strcmp(chw,"y")==0)
        {
            i=1;
            t=0;
        }
        else if(strcmp(chw,"N")==0 || strcmp(chw,"n")==0)
        {
            i=0;
            t=0;
        }
        else
        {
            printf("WRONG INPUT ENTER YOUR DECISION AGAIN\n");
            t=1;
        }
        }
    }
    printf("\n");
    printf("THE RESPECTIVE SCORES ARE\n");
    printf("THE SYSTEM - %d\n",score_system);
    printf("THE USER - %d\n",score_user);
}