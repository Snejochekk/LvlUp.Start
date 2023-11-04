#include <stdio.h>

int main()
{
    int numb1;
    int numb2;
    int numb3;
    int NOD;

    printf("vvedite 3 naturalnyh chisla : ");
    scanf("%d %d %d", &numb1, &numb2, &numb3);

    while (numb1 != 0)
    {
        if (numb1 % numb2 == 0 && numb1 % numb3 == 0) // проверка, является ли наименьшее число общим делителем для двух других чисел
        {
            break; // если является, то прекращаем цикл
        }
        numb1++;// если не является, увеличиваем наименьший общий делитель на 1
    }
    NOD = numb1;
    printf("naimenshiy obshiy delitel chisel : %d\n", NOD);

    return 0;
}

