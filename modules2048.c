//
// Created by sail on 17-11-8.
//
#include "modules.h"

int matrix[4][4];
int score;
int MaxNumber;
int oneLine[4];

void init(){

}

void update()
{
    int i,j;
    int Key=bioskey(0);
    switch(key)
    {
        case Key_Up:

            for(j=0;j<4;j++)
            {
                for(i=0;i<4;i++)
                {
                    compress(matrix[3][j],matrix[2][j],matrix[1][j],matrix[0][j]);
                }
            }
            break;

        case Key_Down:


            for(j=0;j<4;j++)
            {
                for(i=0;i<4;i++)
                {
                    compress(matrix[0][j],matrix[1][j],matrix[2][j],matrix[3][j]);
                }
            }
            break;

        case Key_Right:


            for(i=0;i<4;i++)
            {
                for(j=0;j<4;j++)
                {
                    compress(matrix[i][0],matrix[i][1],matrix[i][2],matrix[i][3]);
                }
            }
            break;

        case Key_Left:


            for(i=0;i<4;i++)
            {
                for(j=0;j<4;j++)
                {
                    compress(matrix[i][3],matrix[i][2],matrix[i][1],matrix[i][0]);
                }
            }
            break;
    }
}

int maxNumber()
{
    int m[4],i;
    for(i=0;i<4;i++)
    {
        m[i]=compare(matrix[i][0],matrix[i][1],matrix[i][2],matrix[i][3]);
    }
    int z;
    z=compare(m[0],m[1],m[2],m[3]);
    return (z);

}

int compare(int x,int y,int z,int r)
{
    int p;
    p=x>y?x:y;
    int q;
    q=z>r?z:r;
    int m;
    m=p>q?p:q;
    return (m);
}

int display()
{
    int i,j;
    int p,q;
    static int matrix[4][4]={0};
    srand((unsigned)time(NULL));
    p=rand()%4;
    q=rand()%4;
    matrix[p][q]=2;
    int maxNumber();
    printf("Score:       maxNumber:%d   \n",maxNumber());
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%3d",matrix[i][j]);
        }
        printf("\n");
    }
}

void compress(int a1,int a2,int a3,int a4)
{

    int a[4];
    a[0]=a1;
    a[1]=a2;
    a[2]=a3;
    a[3]=a4;
    int i,j;
    int n=0;
    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
        {
            n++;
        }
    }
    if(n==4)
    {
        for(i=0;i<4;i++)
        {
            printf("%d ",a[i]);
            oneLine[i]=a[i];
        }
    }
    else if(n==3)
    {
        for(i=0;i<4;i++)
        {
            if(a[i]!=0)
            {
                a[3]=a[i];
                a[2]=0;
                a[1]=0;
                a[0]=0;
            }

        }
        for(i=0;i<4;i++)
        {
            printf("%d ",a[i]);
            oneLine[i]=a[i];
        }

    }
    else if(n==2)
    {
        for(i=0;i<4;i++)
        {
            for(j=i+1;j<4;j++)
            {
                if(a[i]!=0&&a[j]!=0&&a[i]==a[j])
                {
                    a[3]=2*a[i];
                    a[1]=0;
                    a[2]=0;
                    a[0]=0;
                }
                else if(a[i]!=0&&a[j]!=0&&a[i]!=a[j])
                {
                    a[2]=a[i];
                    a[3]=a[j];
                    a[0]=0;
                    a[1]=0;
                }
            }
            printf("%d ",a[i]);
            oneLine[i]=a[i];
        }





    }
    else if(n==1)
    {
        int k;
        for(i=0;i<4;i++)
        {
            for(j=i+1;j<4;j++)
            {
                for(k=j+1;k<4;k++)
                {
                    if(a[i]!=0&&a[j]!=0&&a[k]!=0&&a[i]!=a[j]&&a[j]!=a[k])
                    {
                        a[3]=a[k];
                        a[2]=a[j];
                        a[1]=a[i];
                        a[0]=0;
                    }
                    else if(a[i]!=0&&a[j]!=0&&a[k]!=0&&a[j]==a[k])
                    {
                        a[3]=2*a[k];
                        a[2]=a[i];
                        a[1]=0;
                        a[0]=0;
                    }
                    else if(a[i]!=0&&a[j]!=0&&a[k]!=0&&a[i]==a[j]&&a[j]!=a[k])
                    {
                        a[3]=a[k];
                        a[2]=2*a[j];
                        a[1]=0;
                        a[0]=0;
                    }
                }
            }
        }
        int m;
        for(m=0;m<4;m++)
        {
            printf("%d ",a[m]);
            oneLine[m]=a[m];
        }




    }
    else
    {
        if(a[3]==a[2])
        {
            if(a[1]==a[0])
            {
                a[3]=2*a[3];
                a[2]=2*a[1];
                a[1]=0;
                a[0]=0;
            }
            else if(a[1]!=a[0])
            {
                a[3]=2*a[3];
                a[2]=a[1];
                a[1]=a[0];
                a[0]=0;
            }
        }
        else if(a[3]!=a[2])
        {
            if(a[2]==a[1])
            {
                a[2]=2*a[2];
                a[1]=a[0];
                a[0]=0;
            }
            else if(a[2]!=a[1])
            {
                if(a[1]==a[0])
                {
                    a[1]=2*a[1];
                    a[0]=0;
                }
            }
        }

        for(i=0;i<4;i++)
        {
            printf("%d ",a[i]);
            oneLine[i]=a[i];
        }
    }
}

void addElementRandom()
{
    int i,j;
    int m=0;
    int n=0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            m++;
        }
    }
    srand((unsigned)time(NULL));

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            n++;
            if(n==rand()%m+1)
            {
                matrix[i][j]=2;
                goto state;
            }
        }
    }
    state:
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%3d",matrix[i][j]);
        }
        printf("\n");
    }
}
