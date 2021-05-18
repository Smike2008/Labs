#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 1000

int main() {
	setlocale(LC_ALL, "russian");
        FILE* file;
		char str[SIZE];
		int a=0,b=0;
		int choice;
		printf("Подсчет гласных из файла: 1\n");
		printf("Создание файла,подсчет гласных: 2\n");
		scanf("%d", &choice);
		switch (choice) {
		case 1:
			if ((file = fopen("fscanf.txt", "r+t")) == NULL)
			{
				printf("Ошибка при открытии файла.\n");
				exit(1);
			}

			fread(str, sizeof(char), 10, file);

			for (b = 0; b < SIZE; b++) {
				if ((str[b] == 65 || str[b] == 69 || str[b] == 73 || str[b] == 79 || str[b] == 85 || str[b] == 89 || str[b] == 97 || str[b] == 101 || str[b] == 105 || str[b] == 111 || str[b] == 117 || str[b] == 121)) {
					a++;
				}
			}





			printf("Количество гласных- %d", a);
			fclose(file);
			break;
		case 2:

			if ((file = fopen("fscanf2.txt", "r+")) == NULL)
			{
				printf("Ошибка при открытии файла.\n");
				exit(1);
			}
			getchar();
			gets_s(str);

			for (b = 0; b < SIZE; b++) {
				if ((str[b] == 65 || str[b] == 69 || str[b] == 73 || str[b] == 79 || str[b] == 85 || str[b] == 89 || str[b] == 97 || str[b] == 101 || str[b] == 105 || str[b] == 111 || str[b] == 117 || str[b] == 121)) {
					a++;
				}
			}


			fputs(str, file);

			puts(str);

			printf("Количество гласных- %d", a);
			fclose(file);
			break;

		}
		

		
	return 0;
}
