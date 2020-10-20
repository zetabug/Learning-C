#include <stdio.h>
int main()
{
  double a,b,perc;
  char gen;

  printf("\nEnter marks obtained\n");
  scanf("%lf",&a);
  printf("\nEnter total marks\n");
  scanf("%lf",&b);
  printf("\nEnter your gender (M/F)\n");
  scanf("\n%c",&gen);
  if(gen!='M' & gen!='F')
  {
    printf("\nInput is invalid\n");
    return 0;
  }


     perc = a / b * 100;
  
  printf("\nPercentage obtained:%lf\n",perc);
   
  if (gen=='M')
  {
    if (perc>40)
    {
      printf("\nYou passed\n");
    }
    else
    {
     printf("\nYou failed\n");
    }
    
  }
  else
  {
    if (perc>30)
    {
      printf("\nYou passed\n");
    }
    else
    {
      printf("\nYou failed\n");
    }
  }
   
  return 0;


}