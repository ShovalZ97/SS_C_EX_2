#include  <stdio.h>
#include "my_mat.h"

int main()
{
    char ch;
    int num1,num2;
    scanf("%c",&ch);
    while (ch != 'D')
    {
        if (ch == 'A')
        {
            input1();
        }
        
        if (ch=='B')
        {
            scanf("%d %d",&num1,&num2);
            isExist(num1,num2);
        }
        
         if(ch=='C')
         {
             scanf("%d %d",&num1,&num2);
             isShortest(num1,num2);
         }
            scanf("%c",&ch);
    }
    return 0;
    
    

}