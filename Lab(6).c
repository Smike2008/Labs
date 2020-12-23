#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int main()
{
	setlocale(LC_ALL, "russian");
	int** m = 0;
	int n, colich = 0, i, j, k = 0;
	do
	{
		printf("Введите размер матрицы\n");
		i = scanf_s("%d", &n);
		srand(time(0));
		system("cls");
		if (!(m = (int**)malloc(sizeof(int*) * n)))
			printf("\nНет свободной памяти");
		for (i = 0; i < n; i++)
			(!(*(m + i) = (int*)malloc(sizeof(int) * n)));
			
	} while (!m);
	for (i = 0; i <  n; i++)
	{
		for (j = 0; j < n; j++)
		{
			m[i][j] = rand() % 3;
			if (i == j) {
				m[i][j] = 0;
			}
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
		colich= 0;
		for (j = 0; j < n; j++)
		{
			if (m[i][j] == 2) colich++;
			else if (m[i][j] == 0) colich--;
		}
		colich++;
		if (colich > 0) k++;
	}
	if (k > 0)
		printf("\nНомера команд,которые имеют больше побед,чем поражений: %d", k);
	else
		printf("\nНет ни одной команды,у которой побед больше,чем поражений");
	printf("\n Количество команд,прошедших без поражений:%d", k);
	for (i = 0; i < n; i++)
	{
		colich = 0;
		for (j = 0; j < n; j++)
		{
			if (m[i][j] == 2) colich++;
		}
		colich++;
		if (colich == n) printf("%d ", i + 1);
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
	if (k > 1) printf("Команды,которые выиграли больше половины игр: %d", k);
	else printf("Команды,у которых побед больше,чем ничьих %d",k);
	return 0;
}
