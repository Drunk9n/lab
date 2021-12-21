#include <stdio.h>
#include <string.h>
#include <iostream>
int main()
{
char str[100];
int i;
printf("Введите последовательность символов: \n");
fgets(str, sizeof(str), stdin);
printf("Получившаяся последовательность символов: \n");
for (i = 0; i <= sizeof(str); i++) 
{
  if (str[i] == 't' && str[i+1] == 'h' && str[i+2] == 'e')
  i = i + 2;
  else
  printf("%c", str[i]);
}
return 0;
}