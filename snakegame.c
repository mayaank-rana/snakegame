#include<stdio.h>

#define N 20
#define M 40
int i,j;
void main()
{
    //adding boundary to game
    for(i=0;i<=M+1;i++)
    {
        if(i==0)
        {
            printf("%c",201);//asci charactor
        }
        else if(i==M+1)
        {
            printf("%c",187);
        }
        else{
            printf("%c",205);
        }
    }printf("\n");
    for(i=0;i<N;i++)
    {
        printf("%c",186);
        for(j=0;j<M+1;j++)
        {
            if(j==M)
            {
                printf("%c\n",186);
            }
            else{
                printf(" ");
            }
        }
    }
    for(i=0;i<=M+1;i++)
    {
        if(i==0)
        {
            printf("%c",200);//asci charactor
        }
        else if(i==M+1)
        {
            printf("%c",188);
        }
        else{
            printf("%c",205);
        }
    }printf("\n");
}
