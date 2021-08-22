/**
  ******************************************************************************
  * \file    main.c
  * \author  Александр Смирнов
  * \version 1.0.0
  * \date    1.08.2018
  * \brief   Пример программы для выполнения лабораторной работы № 1.
  *          Программа создает текстовый файл result.txt, куда записывает
  *          кубы всех нечетных чисел до N включительно. Число N вводится
  *          через терминал.
  *          Граничные условия: 0 < N <= 20
  *          Пример ввода:
  *          5
  *          Пример файла result.txt:
  *          1
  *          27
  *          125
  ******************************************************************************
  */

/* Подключение функций стандартного ввода/вывода
   (printf, scanf, fopen, fclose, fprintf, fscanf и т.д.)
   из стандартной библиотеки C */
#include <stdio.h>

/* Функция main. Точка входа в программу */
int main(void)
{
    /* Объявление переменной, в которую будет сохраняться введенное число */
    unsigned int n;
    /* Объявление файлового указателя */
    FILE *fp;

    printf("Print cubes of odd numbers into result.txt\n");

    /* Чтение числа */
    if (scanf("%u", &n) == 1)
    {
        /* Проверяем на граничные условия */
        if (n > 20 || n == 0)
        {
            printf("Incorrect input\n"); /* Сообщаем о некорректном вводе */
            return 0;
        }

        /* Открытие файла result.txt на запись.
           Функция fopen принимает на вход имя файла и режим открытия.
           Допускаются режимы: "r" - чтение, "w" - записи, "a" - добавление
           данных в конец файла. Если файл открытый для записи или добавления
           не существует, то делается попытка создания файла.
           Открытие файла на запись в режиме "w" стирает его содержимое.
           Если произошла какая-либо ошибка, то fopen возвращает NULL. */
        if ((fp = fopen("result.txt", "w")) == NULL)
        {
            printf("Could not open file\n"); /* Сообщаем об ошибке */
            return 0;
        }

        unsigned int i;
        for (i = 1; i <= n; i++)
        {
            /* Проверяем число на нечетность */
            if (i % 2 == 1)
            {
                /* Функция fprintf аналогична функции printf, только первым
                   аргументом функции является файловый указатель. */
                fprintf(fp, "%u\n", i * i * i);
            }
        }

        /* Функция fclose сбрасывает внутренние буферы на файловую систему.
           Корректное обращение с файлами предполагает соблюдение шаблона:
           open - read/write - close. Каждому открытию файла fopen должно
           соответствовать его закрытие fclose. */
        fclose(fp);
    }
    else
    {
        printf("Incorrect input\n"); /* Сообщаем о некорректном вводе */
        return 0;
    }

    /* Код завершения программы.
       Код 0 - означает корректно завершение */
    return 0;
}
