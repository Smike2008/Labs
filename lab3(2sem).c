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
	int f1,i=0, j ;
	int check;

	printf("Количество чисел ");
	check = scanf("%d", &f1);
	while (check == 0) {
		getchar();
		check = scanf_s("%d", &f1);

	}
	int* test;
	test = (int*)malloc(sizeof(int)*f1);
	system("cls");


	printf("Введите %d чисел\n", f1);
	rewind(stdin);
	for (int j = 0; j < f1; j++) {
		check = scanf("%d", &test[j]);
		while (check == 0) {
			getchar();
			check = scanf("%d", &test[j]);
		}
		fprintf(f, " %d ", test[j]);

	}

	printf("Введенные числа");
	for (j = 0; j < f1; j++) {

		printf(" %d ", test[j]);

	}
	double sum = 0;
	for (j = 0; j < f1; j++) {
		if (test[j] > 0) {
			sum += test[j];
			i += 1;
		}
	}
	for(i=0;i<f1;i++){
		for (j = 0; j < f1-1; j++) {
			if (test[j] > test[j + 1]) {
				int k = test[j];
				test[j] = test[j + 1];
				test[j + 1] = k;
			}

		}
	}

	printf("\n");
	fclose(f);

	printf("Среднее арифметическое чисел  %.2f\n", sum / i);


	printf("Отсортированные числа:\n");
	for (j = 0; j < f1; j++) {
		printf(" %d ", test[j]);
	}


	return 0;
}
