#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<Windows.h>
#include <cstdlib>

struct stack {
	char mas[1000];
	int size;
}mainStack;

int main() {
	setlocale(LC_ALL, "russian");
	//struct stack* mainStack =(struct stack*) calloc(1,sizeof(struct stack));
	//mainStack->size = 0;
	int i,check,choice;
	int* ms;
	int max;
	
	printf("Введите максимальный размер очереди\n");
	scanf("%d", &max);
	
point:
	system("cls");
	printf("Просмотр очереди: 1\n");
	printf("Заполнение в очередь: 2\n");
	
	check = scanf("%d", &choice);
	while (check == 0) {
		getchar();
		check = scanf("%d", &choice);
	}


	switch (choice) {

	case 1:


		printf("Заполненная очередь\n");
		puts(mainStack.mas);
		
		system("pause");
		break;
	case 2:
		if (mainStack.size > max) {
			printf("Очередь заполнена\n");
			system("pause");
			goto point;
		}
		printf("Введите символ \n");
		for (i = mainStack.size; i < mainStack.size+1; i++) {
			getchar();
			scanf("%c", &mainStack.mas[i]);
			if (mainStack.mas[i - 1] == mainStack.mas[i]) {
				for (int i = 1; i < mainStack.size; i++) {
					mainStack.mas[i - 1] = mainStack.mas[i];
					
				}
				mainStack.mas[mainStack.size - 1] = '\0';
				mainStack.size--;
			}
			
		}
		mainStack.size++;
		break;

	case 7:
		printf("\nРазмер очереди %d\n", mainStack.size);
		system("pause");
		break;
	}
	goto point;
	return 0;
}
