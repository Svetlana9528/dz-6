#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int check(float x, float y) {
    return (y >= 1 && y <= 5 && (2 * x - y + 9 >= 0) && (2 * x + y - 13 <= 0));
}

int main()
{
    setlocale(LC_ALL, ".UTF8");
    float x, y;
    int res;
    int input_status;

    printf("Для завершения программы введите координаты: 0 0\n\n");

    do {
        printf("Введите координаты точки (x, y): ");
        input_status = scanf("%f %f", &x, &y);

        if (input_status == 2) 
        {
            if (x == 0 && y == 0) 
            {
                break; 
            }
            res = check(x, y);
            if (res == 1) 
            {
                printf("Результат: ПРИНАДЛЕЖИТ\n\n");
            }
            else 
            {
                printf("Результат: НЕ ПРИНАДЛЕЖИТ\n\n");
            }
        }

    } while (input_status == 2);

    printf("Программа завершена.\n");
    return 0;
}
