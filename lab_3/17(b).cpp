//Задание 17(b)
#include <iostream>
#include <cmath>
#include <math.h>
int main()
{
  int n,i,p;
  p=1;
  scanf("%d",&n);
  float x,q,y,t; x = 5.0;t=0;
  for (i = 1; p<=n; i++)
    {
      q=pow(x,p);
      y = sin(q);
      p+=1;
      t+=q;
    }
printf("%f",t);
} 