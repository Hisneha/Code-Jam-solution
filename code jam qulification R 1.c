#include <stdio.h>

int main()
{
    int t,i,r,c,j,k;
    scanf("%d",&t);
    int x,y;
    char matrix[100][100];
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&r,&c);
        x=(2*r)+1;
        y=(2*c)+1;
        printf("Case #%d\n",i+1);
        for(j=0;j<x;j++)
        {
            for(k=0;k<y;k++)
            {
                if(j%2==0)
                {
                    if(j==0)
                    {
                        if(k==0 || k==1)
                        {
                            matrix[j][k]='.';
                        }
                        else if(k%2==0)
                        {
                            matrix[j][k]='+';
                        }
                        else
                        {
                            matrix[j][k]='-';
                        }
                    }
                    else
                    {
                        if(k%2==0)
                        {
                            matrix[j][k]='+';
                        }
                        else
                        {
                            matrix[j][k]='-';
                        }
                    }
                }
                else
                {
                    if(j==1)
                    {
                        if(k==0 || k==1)
                        {
                            matrix[j][k]='.';
                        }
                        else if(k%2==0)
                        {
                            matrix[j][k]='|';
                        }
                        else
                        {
                            matrix[j][k]='.';
                        }
                    }
                    else
                    {
                        if(k%2==0)
                        {
                            matrix[j][k]='|';
                        }
                        else
                        {
                            matrix[j][k]='.';
                        }
                    }
                }
            }
        }
        for(j=0;j<x;j++)
        {
            for(k=0;k<y;k++)
            {
                printf("%c",matrix[j][k]);
            }
            printf("\n");
        }

    }
    return 0;
}
