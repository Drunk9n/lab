#include <stdio.h>
#include <string.h>
#include <iostream>
int main()
{
char str[80];
int i;
printf("Введите последовательность символов: \n");
fgets(str, sizeof(str), stdin);
printf("Получившаяся последовательность символов: \n");
for (i = 0; i <= sizeof(str); i++) 
{
  if (str[i] == '{' && strchr(str+i, '}'))
  while (str[i] != '}')
  i++;
  else
  printf("%c", str[i]);
}
return 0;
}