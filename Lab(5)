#include <stdio.h>
#include <locale.h>
#define n 3

int main() {
	setlocale(LC_ALL, "russian");
	int mas[n][n];
	int i, j ;
	int a=0,temp=0;
	int b;
	printf("Введите число а ");
	scanf_s("%d", &a);
	printf("Заполните массив\n");
	for (i = 0; i < n; i++) {

		for (j = 0; j < n; j++) {
			scanf_s("%d", &mas[i][j]);
		}
	}
	printf("Исходный массив:\n");
	for (i = 0; i < n; i++) {

		for (j = 0; j < n; j++) {
			printf(" %d", mas[i][j]);
		}
		printf("\n");
	}
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				if (a == mas[i][j]) {
					temp++;
				}
			}
		}
		printf(" Количество совпадений: %d", temp);
	return 0;
}
