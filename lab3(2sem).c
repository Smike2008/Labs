



#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

FILE* f;


int main() {
	setlocale(LC_ALL, "russian");
	FILE* f;
	if (!(f = fopen("lab3.txt", "wb")))
	{
		printf("Невозможно открыть файл \n");

		return 0;
	}
	int f1,i=0;
	int check;

	printf("Количество чисел ");
		check=scanf("%d", &f1);
	while (check == 0) {
		getchar();
		check = scanf_s("%d", &f1);

	}
		int* test;
		test = (int*)malloc(sizeof(int));
		system("cls");
		
		
	printf("Введите %d чисел\n", f1);
		rewind(stdin);
		for (int j = 0; j < f1; j++) {
			check = scanf("%d", &test[j]);
			while (check == 0) {
				getchar();
				check=scanf("%d", &test[j]);
			}
			fprintf(f, " %d ", test[j]);

		}

		printf("Введенные числа");
		for (int j = 0; j < f1; j++) {

			printf(" %d ", test[j]);

		}
		double sum = 0;
		for (int j = 0; j < f1; j++) {
			if (test[j] > 0) {
					sum+=test[j];
					i += 1;
			}
		}

		printf("\n");
		fclose(f);
		printf("Среднее арифметическое чисел  %.2f\n", sum/i);



		system("pause");




	
	return 0;
}


