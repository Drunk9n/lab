//Задание 17(a)
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
      q=sin(x);
      y = pow(q,p);
      p+=1;
      t+=y;
    }
printf("%f",t);
}