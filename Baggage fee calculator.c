#include <stdio.h>
#include <stdlib.h>
/*
An airline company imposes a baggage restriction on its passengers.
Each passenger has a baggage allowance of 8 kg for hand and 15 kg for backpack. 
  
• If passengers exceed their hand rights, they have to pay 4$ per kg,
and if they exceed their backpack rights, they have to pay 5$ per kg.

• According to this, what is the baggage fee to be paid by the passenger
who enters his hand and backpack baggage in kg from the keyboard?
*/
int main()
{
int hand, backpack,amount=0;
printf("Please enter the hand and the backpack baggage in kg: ");  
scanf("%d%d",&hand,&backpack);
if(hand>8)
{
  amount=amount+ 4*(hand-8);
}
if(backpack>15)
{
  amount= amount + 5*(backpack-15);
}

printf("The amount you have to pay is %d $",amount);
  return 0;
}