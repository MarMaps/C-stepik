#include <stdio.h>

struct Student {
        long id;
        int birth_year;         // год рождения
        float weight;           // вес, кг
        float height;           // рост, м
        float run100;           // время забега на 100м, сек
        unsigned char pushup;   // отжиманий
        unsigned char pullup;   // подтягиваний
    };  // <---- Не забудь про ; 

int main()
{
    
    int x;                  // объявили переменную `x` типа `int`
    struct Student gusev;    // объявили переменную `gusev` типа `struct Student`
    struct Student ivanov = {315101, 2000, 70.4, 1.86, 17.6, 14, 5}; //с явной идентификацией
    struct Student petrov = {315102, 1999};  // указаны только id и birth_year остальные поля 0
    struct Student sidorov = {.weight = 56.6, .height = 1.62, .id = 315102};//При инициализации можно указать имя поля, тогда данные можно перечислять в любом порядке


    struct Student zotov;
    zotov.height = 1.72;//переменная.поле - обращение к полю переменной через оператор "точка"
    zotov.pullup = 9;

    zotov.id = sidorov.id + 2;

    printf("Самый высокий рост: %.2f\n", ivanov.height);

    scanf("%ld", &zotov.id); // скобки не нужны, приоритет . больше, чем приоритет &

    return 0; 
}
