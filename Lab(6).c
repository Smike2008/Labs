//#include <stdio.h>
//#include <stdlib.h>
//#include <locale.h>
//#include <time.h>
//int main()
//{
//	setlocale(LC_ALL, "russian");
//	int** m = 0;
//	int n, colich = 0, i, j, k = 0;
//	do
//	{
//		printf("Введите размер матрицы\n");
//		i = scanf_s("%d", &n);
//		srand(time(0));
//		system("cls");
//		if (!(m = (int**)malloc(sizeof(int*) * n)))
//			printf("\nНет свободной памяти");
//		for (i = 0; i < n; i++)
//			(!(*(m + i) = (int*)malloc(sizeof(int) * n)));
//			
//	} while (!m);
//	for (i = 0; i <  n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			m[i][j] = rand() % 3;
//			if (i == j) {
//				m[i][j] = 0;
//			}
//			else m[j][i] = m[i][j];
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("\n Команда №%d ", i + 1);
//		for (j = 0; j < n; j++)
//		{
//			printf(" %d ", m[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		colich= 0;
//		for (j = 0; j < n; j++)
//		{
//			if (m[i][j] == 2) colich++;
//			else if (m[i][j] == 0) colich--;
//		}
//		colich++;
//		if (colich > 0) k++;
//	}
//	if (k > 0)
//		printf("\nНомера команд,которые имеют больше побед,чем поражений: %d", k);
//	else
//		printf("\nНет ни одной команды,у которой побед больше,чем поражений");
//	printf("\n Количество команд,прошедших без поражений:%d", k);
//	for (i = 0; i < n; i++)
//	{
//		colich = 0;
//		for (j = 0; j < n; j++)
//		{
//			if (m[i][j] == 2) colich++;
//		}
//		colich++;
//		if (colich == n) printf("%d ", i + 1);
//	}
//	printf("\n");
//	for (i = 0; i < n; i++)
//	{
//		colich = 0;
//		for (j = 0; j < n; j++)
//		{
//			if (m[i][j] == 2) colich++;
//		}
//		if (colich > (n - 1) / 2) k++;
//	}
//	if (k > 1) printf("Команды,которые выиграли больше половины игр: %d", k);
//	else printf("Нет ни одной команды, которая выиграла бы больше половины игр %d",k);
//	return 0;
//}
//#include<stdlib.h>
//#include<stdio.h>
//#include<locale.h>
//#include<stdbool.h>
//#define kolvo_strok 5
//#define razmer_stroki 100
//
//int wordSize(char* word);
//void cpw(char* word1, char* word2);
//
//int main() {
//    setlocale(LC_ALL, "Russian");
//
//
//    char** strMs;//Память под строки и количество символов строке
//    strMs = (char**)malloc(sizeof(char*) * kolvo_strok);
//    for (int i = 0; i < kolvo_strok; i++) {
//        strMs[i] =(char*) malloc(sizeof(char) * razmer_stroki);
//    }
//
//    //Ввод строк.
//    printf("Введите %d строк каждая по %d символов: \n", kolvo_strok, razmer_stroki);
//    for (int i = 0; i < kolvo_strok; i++) {
//        printf("[%d] ", i);
//        fgets(strMs[i], razmer_stroki, stdin);
//        printf("\n");
//    }
//    system("cls");
//
//    //Массив под хранение слов.
//    char** words = NULL;
//    words =(char**) malloc((sizeof(char*)) * 100);
//    for (int i = 0; i < 100; i++) {
//        words[i] =(char*) malloc(20 * sizeof(char));
//    }
//
//    int zae = 0;
//    int index = 0;
//    for (int i = 0; i < kolvo_strok; i++) { //Перебираем каждую строку.
//        int b = 0; //Индекс символа в строке перебираемой строки
//        int t = 0; //Индекс перехода к сохранению слова 
//        while (strMs[i][b] != '\0') {
//            if ((strMs[i][b] > 64 && strMs[i][b] < 91) || (strMs[i][b] > 96) && (strMs[i][b] < 123)) {
//                words[index][t] = strMs[i][b];
//                t++;
//                b++;
//            }
//            else {
//                zae++;
//                b++;
//                index++;
//                t = 0;
//            }
//        }
//    }
//
//    //Неотсортированный порядок слов
//    for (int i = 0; i < 100; i++) {
//        if (words[i][0] != '\0') {
//            printf("%s ", words[i]);
//        }
//    }
//    printf("\n");
//
//    int a = zae;
//    for (int i = 0; i < zae; i++) {
//        for (int b = 1; b < a; b++) {
//            if (wordSize(words[b]) > wordSize(words[b - 1])) {
//                char* replace = words[b];
//                words[b] = words[b - 1];
//                words[b - 1] = replace;
//            }
//        }
//    }
//
//    //отсортированный порядок слов
//    for (int i = 0; i < 100; i++) {
//        if (words[i][0] != '\0') {
//            printf("%s ", words[i]);
//        }
//    }
//    printf("\n");
//
//
//    for (int i = 0; i < 100; i++) {
//        free(words[i]);
//    }
//    free(words);
//
//    for (int b = 0; b < kolvo_strok; b++) {
//        free(strMs[b]);
//    }
//    free(strMs);
//}
//
//int wordSize(char* word) {
//    int i = 0;
//    while (word[i] != '\0') {
//        i++;
//    }
//    return i;
//}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
int main()
{

	int** m = 0;
	int n, colich = 0, i, j, k = 0;
	do
	{
		setlocale(LC_ALL, "Russian");
		printf("\nВведите размер матрицы\n");
		i = scanf_s("%d", &n);
		srand(time(0));
		if (!(m = (int**)malloc(sizeof(int*) * n)))
			printf("\nНет свободной памяти");
		for (i = 0; i < n; i++) {
			(!(*(m + i) = (int*)malloc(sizeof(int) * n)));
		}
	} while (!m);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			m[i][j] = rand() % 3;
			if (i == j) m[i][j] = 0;
			else m[j][i] = m[i][j];
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("\n Команда №%d ", i + 1);
		for (j = 0; j < n; j++)
		{
			printf(" %d ", m[i][j]);
		}
	}
	for (i = 0; i < n; i++)
	{
		colich = 0;
		for (j = 0; j < n; j++)
		{
			if (m[i][j] == 2) colich++;
			else if (m[i][j] == 0) colich--;
		}
		colich++;
		if (colich > 2) k++;
	}
	if (k > 0)
		printf("\nНомера команд,которые имеют больше побед,чем поражений: %d", k);
	else
		printf("\nНет ни одной команды,у которой побед больше,чем поражений %d", k);
	k = 0;
	printf("\nКоличество команд,прошедших без поражений:%d", k);
	for (i = 0; i < n; i++)
	{
		colich = 0;
		for (j = 0; j < n; j++)
		{
			if (m[i][j] == 2) colich++;
		}
		colich++;

		if (colich == n) printf("%d ", i++);
	}
	printf("\n");
	for (i = 0; i < n; i++)
	{
		colich = 0;
		for (j = 0; j < n; j++)
		{
			if (m[i][j] == 2) colich++;
		}
		if (colich > (n - 1) / 2) k++;
	}
	if (k > 0) printf("Команды,которые выиграли больше половины игр: %d", k);
	else printf("Нет ни одной команды, которая выиграла бы больше половины игр");
	return 0;
}
