#include  <stdio.h>
#include "my_mat.h"
#include <math.h>
 #define N 10
#define INF 2147483647


int min1(long num1,long num2);
void Shortest1();
int matrix[N][N];
void input1()   
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d ",&matrix[i][j]);
            if(i!=j&&matrix[i][j]==0)
            {
                matrix[i][j]=INF;
            }
        }
        
        
    }
    Shortest1();
    // for (int i = 0; i < N; i++)
    // {
    //     for (int j = 0; j < N; j++)
    //     {
    //         printf("%d ",matrix[i][j]);
    //     }
    //     printf("\n");
        
    // }
}
    int min1(long number1,long number2)
    {
        if (number1<number2)
        {
            return number1;
        }
        else
        return number2;
        
    }
 void isExist(int i,int j)
{
    if(matrix[i][j]!=0)
    {
        printf("True\n");
    }
    else
    {
      printf("False\n");
    }
    
}
void Shortest1()
{
    for (int k= 0; k<N; k++)
        {
             for (int l = 0; l < N; l++)
                {
                    for (int m = 0; m < N; m++)
                      {  
                          if (l!=m&&l!=k&&m!=k)
                            {
                               matrix[l][m]= min1((long)matrix[l][m], (long)matrix[l][k]+(long)matrix[k][m]);
                            }
                 

                    }
            }
        } 
    for (int i = 0; i< N; i++)
        {
            for (int j= 0; j< N; j++)
                {   
                    if(i!=j&&matrix[i][j]==INF)
                        {
                            matrix[i][j]= 0;
                        }

                    }
        }
}
void isShortest(int i,int j)
 {
    if (matrix[i][j]!=0)
    {
        printf("%d\n",matrix[i][j]);
    }
    else
    {
        printf("-1");
        printf("\n");
    }
    
 }
