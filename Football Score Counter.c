#include <stdio.h>
#include <stdlib.h>
/*
2  1  0  0  2  1  1  2  1  0
-In the 10-week match statistics 
given, 2 elements represent victory,
1 element represents defeat,
and 0 elements represent draw.
2: win     1:lose    0:draw   

•A football team needs 12 points to stay in the relegation. 
• A win is worth 3 points, a draw 1 point, a loss 0 points.
• Write the C program that prints the score and whether 
the cluster remains at the end of 10 weeks.*/
int main() 
{
int i,points=0, match[10]={2,1,0,0,2,1,1,2,1,0};
for(i=0;i<10;i++)
{
  if(match[i]==2) //for winings
  {
    points=points+3;
  }
  if(match[i]==1) //for losings
  {
    points=points+0;
  }
  if(match[i]== 0) //for draws
  {
    points=points+1;
  }
}
if(points>=12)
{
printf("You managed to stay in the Division with %d points.",points);
}
else
{
printf("You failed to stay in the Division with %d points.",points);
}
  return 0;
}