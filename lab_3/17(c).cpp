//Задание 17(c)
#include <iostream>
#include <cmath>
#include <math.h>
int main()
{
  int i,n;
  scanf("%d",&n);
  float x,q,y,t; x = 5.0;t=0.0;
  for (i=1; i<n; i++)
    {
      y = sin(x);
      q=sin(y);
      t+=y;
      y = q;
    }
printf("%f",t);
}