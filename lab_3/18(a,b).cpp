#include <iostream>
using namespace std;
int main()
{
  double a=-1.0, sum=0.0;
  for (int i=1; i<=1000; i++)
    {
      a*=-1.0;
      sum+=a/i;
    }
printf("%f\n",sum);
  a=-1.0, sum=0.0;
  for (int i=1000; i>=1; i--)
    {
    a*=-1.0;
    sum+=a/i;
    }
printf("%f",sum);
}