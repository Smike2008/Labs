
//FILE *f;
//
//
//int main() {
//	setlocale(LC_ALL, "russian");
//	FILE* f;
//	if (!(f = fopen("test.txt", "r+")))
//	{
//		printf("Невозможно открыть файл \n"); 
//		
//		return 0;
//	}
//	int* mas;
//	if (!(mas = (int*)malloc(sizeof(int)))) {
//		return 0;
//	};
//	int f1;
//	printf("Введите количество вводимых чисел\n");
//	scanf_s("%d", &f1);
//
//	int choice1;
//	
//	int i;
//point:
//
//	system("cls");
//	do {
//		printf("Создание бинарного файла: 1\n");
//		printf("Просмотр бинарного файла: 2\n");
//		printf("Перезаполнение бинарного файла: 3\n");
//		printf("В разработке: 4\n");
//	} while (false);
//	
//	rewind(stdin);
//	int check = scanf_s("%d", &choice1);
//	while (check == 0) {
//		getchar();
//		check = scanf_s("%d", &choice1);
//	}
//	
//
//	switch (choice1) {
//	case 1:
//		printf("Введите %d чисел ", f1);
//
//		for (i = 0; i <f1 ; i++) {
//			rewind(stdin);
//			scanf_s("%d", &mas[i]);
//			fwrite(&mas, sizeof(int), 1, f);
//		}
//
//		break;
//	case 2:
//		printf("\n  Введенные числа: ");			
//		for (i = 0; i < f1; i++) {
//			printf("%d ", mas[i]);
//			fprintf(f, " %d ", mas[i]);
//		}
//		printf("\n");
//		system("pause");
//						break;
//
//	case 3:
//
//		for (i = 0; i < 5; i++) {
//			scanf_s("%d", &mas[i]);
//		}
//
//
//		break;
//	case 5:
//		exit(1);
//
//	}
//
//	goto point;
//	fclose(f);
//	return 0;
//}



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


