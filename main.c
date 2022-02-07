// mario program

#include <stdio.h>

int main()

{ 
    int i,j,n;
   // n= number of rows
   
   do{
        printf("Enter the number of rows:");
        scanf("%d",&n);
        if(n>0 && n<=8)
        {    
            printf(" The number of rows %d\n", n);
            for(i = 1; i <= n; i++)
            {
                for (j = 1; j <= n;j++)
                { 
                    if ((i+j)<=n)
                        printf(" ");
                    else
                        printf("#");
                }
                printf("\n");
            }
        }
       
      } 
    while(n<1 || n>8 );
   
    return 0;
       
  }


