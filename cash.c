// cash program

#include <stdio.h>

int main()

{ 
    int cents, coins;
    float dollars;
   
   do{
        printf("Enter the ammount in dollars:");
        scanf("%f",&dollars);
   } 
    while(dollars<0);   
    
    cents= dollars*100;
    printf("The number of cents is %d\n ",cents);
    coins=0;
    
    while(cents>=25)    //quarters
    { cents=cents-25;
    coins++;
    }   
    while(cents>=10)    //dimes
    { cents=cents-10;
    coins++;
    }
     while(cents>=5)    //nickels
    { cents=cents-5;
    coins++;
    }   
    while(cents>=1)    //pennies
    { cents=cents-1;
    coins++;
    }   
    printf("\nTotal number of coins is %d", coins);
    return 0;
 
}
