#include <stdio.h>
int main(){
    void number_3() {
    int x = 3, y = 1;
    /*(1)*/
    /*if x<5 y>=-10
        printf("%d",x+y); не рабочий вид программы, так как условия должны быть в скобках и разделяться между собой*/

        /*(2)*/
    if (x < 5)
        if (y >= -10)
            printf("%d\n", x + y);

    /*(3)*/
    if (x < 5, y >= -10)
        printf("%d\n", x + y);

    /*(4)*/
    if (x < 5 && y >= -10)
        printf(“ % d”, x + y);
    }

    void number_4() {
    int x;
    scanf("%d", &x);
    /*(1)*/
    /*if !(x<=0)
    if (x%2==0)
        x=x*x;
    else x%=3; восклицательынй знак должен после открывающей скобки*/

    /*(2)*/
    /*if (x>0)
    if (x%2!=0)
        x=x*x;
    else x%=3; в условии идет проверка на  нечетность */

    /*(3)*/
    /*if !(x%2=0)
    if (x>0)
        x=x*x;
    else x%=3;   восклицательынй знак должен после открывающей скобки; в условии нет сравнения, вместо "=" должно быть "=="*/
    /*(3)*/
    /*if !(x%2=0)
    {if (x>0)
        x=x*x;}
    else x%=3; восклицательынй знак должен после открывающей скобки */
    }

    void number_5() {
    /*1*/
    /*switch (x){
        case 5: x++; break;
        case x>0: x--; break;
        default: x+=66;
    } case должно сводиться к целочисленному значению*/

    /*2*/
    switch (x) {
    case 5: x += 7; break;
    case 6: case 11: --x; break;
    }

    /*3*/
    /*switch (x){
    case 5: x*=16;
    case 6: case 11: x-=23; break;
    } не хватает break в case 5, таким образом, если x=5, выполняется вся программа*/

    /*4*/
    /*switch (5){
        case 5: x+=7; break;
        case 6: case 11: --x; break; проверяет только 5*/
    }

    void number_7() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a % 2 == 0 | b % 2 == 0 | c % 2 == 0)
        printf("Имеется");
    else
        printf("Не имеется");
    }

    void number_8() {
    int e, f, x1 , x2, x3;
    printf("Введите начало промежутка\n");
    scanf("%d\n", &e);
    printf("Введите конец промежутка\n");
    scanf("%d\n", &f);
    printf("Введите 1 число\n");
    scanf("%d\n", &x1);
    if (e <= x1 && x1 <= f)
        printf("%d лежит в указанном промежутке\n", x1);
    printf("Введите 2 число\n");
    scanf("%d\n", &x2);
    if (e <= x2 && x2 <= f)
        printf("%d лежит в указанном промежутке\n", x2);
    printf("Введите 3 число\n");
    scanf("%d\n", &x3);
    if (e <= x3 && x3 <= f)
        printf("%d лежит в указанном промежутке\n", x3);
    }

    void number_9() {
    int x;
    printf("Введите трехзначное число\n");
    scanf("%d", &x);
    if (x / 100 == x % 100 / 10 | x / 100 == x % 10 | x % 100 / 10 == x % 10)
        printf("Есть повторяющиеся цифры");
    else
        printf("Нет повторяющихся цифр");
    }

    void number_10() {
    int x, k;
    for (int i = 0; i < 3; i++) {
        printf("Введите %d число\n", i + 1);
        scanf("%d", &x);
        if (i == 0)
            k = x;
        if (x > k && i != 0)
            k = x;
    }
    printf("Наибольшее число: %d \n", k);
    }

    void number_12() {
    int x;
    scanf("%d", &x);
    if (x <= 5)
        printf("«Увы – рабочий день!");
    else if (x == 6)
        printf("Ура! Суббота!");
    else if (x == 7)
        printf("«Ура! Воскресенье!");
    }

    void number_13() {
    int x;
    scanf("%d", &x);
    if (x % 10 == 1)
        printf("%d рубль", x);
    else if (x % 10 >= 5 | x % 100 >= 10 && x % 100 <= 19)
        printf("%d рублей", x);
    else if (x % 10 > 1 && x % 10 < 5)
        printf("%d рубля", x);

    }

    void number_14() {
    int kod, minutes;
    scanf("%d %d", &key, &minutes);
    switch (kod) {
        case 432:
            printf("Стоимость разговора 9,20 руб/мин: %.2f", 9.2 * minutes);
            break;
        case 95:
            printf("Стоимость разговора 4,10 руб/мин: %.2f", 4.1 * minutes);
            break;
        case 861:
            printf("Стоимость разговора 2,05 руб/мин: %.2f", 2.05 * minutes);
            break;
        case 844:
            printf("Стоимость разговора 2,5 руб/мин: %.2f", 2.5 * minutes);
            break;
        default:
            printf("Неправильный код города");
    }
    }

    void number_15() {
    int m, n;
    scanf("%d %d", &m, &n);
    if ((m*60+n)*16 > 6*1024)
        printf("Мало памяти");
    else
        printf("Места хватит");
    }

    void number_16(){
    int litr, fish, ubrat;
    scanf("%d %d", &litr, &fish);
    if (litr < fish *3) {
        if ((fish * 3 - litr) % 3 == 0)
            ubrat = (fish * 3 - litr) / 3;
        else
            ubrat = (fish * 3 - litr) / 3 + 1;
        printf("Аквариум перенаселен, нужно переселить %d рыб(ы)", ubrat);
    } else
        printf("Аквариум не перенаселен");
    }
}