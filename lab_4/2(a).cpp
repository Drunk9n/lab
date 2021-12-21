//удалить из каждой группы подряд идущих цифр, в которой более двух цифр и которой предшествует точка, все цифры, начиная с третьей
#include <stdio.h>
#include <string.h>

int main()
{
    char str[80];
    int i, j;
    printf("Введите последовательность символов: \n");
    fgets(str, sizeof(str), stdin);
    printf("Созданная последовательность символов: \n");
    //(strchr(пока не появится первый знак $))
    if (strchr(str, '$')) 
    {
        for (i = 0; str[i] != '$' && i < strlen(str); i++){
            if (str[i] == '.')
            {
                printf("%c", '.');
                i++;
                j = i;
                while ((int)str[j] >= 48 && (int)str[j] <= 57)
                    j++;
                if (j-i > 2)
                {
                    printf("%c%c", str[i], str[i+1]);
                    i += j-i-1;
                } else
                {
                    printf("%c%c", str[i], str[i+1]);
                    i++;
                }
            } else
                printf("%c", str[i]);
        }
    } else
        printf("Последовательность символов не заканчивается '$'");
    return 0;
}