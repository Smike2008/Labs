
#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<Windows.h>
#include <cstdlib>
#define ANSI_COLOR_BLUE "\x1b[34m"
#define ANSI_COLOR_RESET   "\x1b[0m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define _CRT_SECURE_NO_WARNINGS

struct pokupbase

{
	//   имя
	char name[20];
	// фамилия
	char fam[30];
	//номер телефона
	char callnumber[20];
	//домашний адрес
	char homeadress[40];
	//кредитная карта
	char creditcard[21];
};

struct pokupbase pokupateli[30], t;
struct pokupbase tmp;
int sch;

int main()
{

	int i, j;
	int records = 1;
	setlocale(LC_ALL, "russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
point:
	system("cls");
	printf(ANSI_COLOR_BLUE"\n\tБаза данных\t\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_GREEN"1. Добавить покупателя\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_GREEN"2. Показать список покупателей\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_GREEN"3. Редактирование параметров покупателя\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_GREEN"4. Удаление покупателя из списка\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_GREEN"5. Сортировка покупателей\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_GREEN"7. Выход\n" ANSI_COLOR_RESET);
	int button;
	rewind(stdin);
	int check = scanf_s("%d", &button);
	while (check == 0) {
		getchar();
		check = scanf_s("%d", &button);
		
	}
	switch (button)
	{
	case 1:                                      // Ввод
		if (records < 30) {

			system("cls");
			printf(ANSI_COLOR_GREEN"%d покупатель\n", records);
			puts(ANSI_COLOR_GREEN"Введите имя: " ANSI_COLOR_RESET);
			fflush(stdin);
			getchar();
			gets_s(pokupateli[records].name);
			puts(ANSI_COLOR_GREEN"Введите фамилию: " ANSI_COLOR_RESET);

			gets_s(pokupateli[records].fam);
			puts(ANSI_COLOR_GREEN"Введите кредитку: " ANSI_COLOR_RESET);

			gets_s(pokupateli[records].creditcard);
			puts(ANSI_COLOR_GREEN"Введите адрес: " ANSI_COLOR_RESET);

			gets_s(pokupateli[records].homeadress);
			puts(ANSI_COLOR_GREEN"Введите номер телефона: " ANSI_COLOR_RESET);

			gets_s(pokupateli[records].callnumber);
			records++;

		}
		else printf("Введено максимальное кол-во покупателей");
		break;
		i = 0;
	case 2:                                        // Вывод
		system("cls");
		if (records == 1) {
			printf("Нет данных\n");
			system("pause");
			break;
		}
		for (i = 1; i < records; i++)
		{
			printf(ANSI_COLOR_GREEN"\n Покупатель %d:" ANSI_COLOR_RESET" %s %s\n" , i, pokupateli[i].name, pokupateli[i].fam);
			printf(ANSI_COLOR_GREEN" Кредитка:" ANSI_COLOR_RESET" %s\n" , pokupateli[i].creditcard);
			printf(ANSI_COLOR_GREEN" Адрес покупателя:" ANSI_COLOR_RESET" %s\n", pokupateli[i].homeadress);
			printf(ANSI_COLOR_GREEN" Номер телефона:" ANSI_COLOR_RESET" %s\n", pokupateli[i].callnumber);

		}
		system("pause");
		break;
	case 3:                                // Редактирование 

		system("cls");
		int c;
		for (i = 1; i < records; i++)
		{
			printf(ANSI_COLOR_GREEN"\n Покупатель %d:" ANSI_COLOR_RESET" %s %s\n" , i, pokupateli[i].name, pokupateli[i].fam);
			printf(ANSI_COLOR_GREEN" Кредитка:" ANSI_COLOR_RESET " %s\n" , pokupateli[i].creditcard);
			printf(ANSI_COLOR_GREEN" Адрес покупателя:" ANSI_COLOR_RESET " %s\n" , pokupateli[i].homeadress);
			printf(ANSI_COLOR_GREEN" Номер телефона:" ANSI_COLOR_RESET" %s\n", pokupateli[i].callnumber);

		}
	cpoint:
		printf(ANSI_COLOR_BLUE"\nВыберите номер покупателя,которого хотите редактировать\n" ANSI_COLOR_RESET);
		printf(ANSI_COLOR_BLUE"Или введите '0' для выхода обратно\n" ANSI_COLOR_RESET);
		check = scanf_s("%d", &c);
		while (check == 0) {
			getchar();
			check = scanf_s("%d", &c);

		}
		
		if (c > records - 1) {
			printf("Неверный ввод");
			goto cpoint;
		}
		if (c == 0) {
			break;
		}
		int per;
		for (int a = 1; a < 2; a++) {
			printf(ANSI_COLOR_BLUE"Введите: \n" ANSI_COLOR_RESET);
			printf(ANSI_COLOR_GREEN"1-для редактирования имени\n" ANSI_COLOR_RESET);
			printf(ANSI_COLOR_GREEN"2-для редактирования фамилии\n" ANSI_COLOR_RESET);
			printf(ANSI_COLOR_GREEN"3-для изменения адреса\n" ANSI_COLOR_RESET);
			printf(ANSI_COLOR_GREEN"4-для изменения номера телефона\n" ANSI_COLOR_RESET);
			printf(ANSI_COLOR_GREEN"5-для изменения кредитной карты\n" ANSI_COLOR_RESET);
			rewind(stdin);
			scanf_s("%d", &per);
			a++;
		}
		switch (per) {
		case 1:
			printf(ANSI_COLOR_GREEN"Введите новое имя\n" ANSI_COLOR_RESET);
			getchar();
			gets_s(pokupateli[c].name);
			break;
		case 2:
			printf(ANSI_COLOR_GREEN"Введите новую фамилию\n" ANSI_COLOR_RESET);
			getchar();
			gets_s(pokupateli[c].fam);
			break;
		case 3:
			printf(ANSI_COLOR_GREEN"Введите новый адрес\n" ANSI_COLOR_RESET);
			getchar();
			gets_s(pokupateli[c].homeadress);
			break;
		case 4:
			printf(ANSI_COLOR_GREEN"Введите новый номер телефона\n" ANSI_COLOR_RESET);
			getchar();
			gets_s(pokupateli[c].callnumber);
			break;
		case 5:
			printf(ANSI_COLOR_GREEN"Введите новую кредитку\n" ANSI_COLOR_RESET);
			getchar();
			gets_s(pokupateli[c].creditcard);
			break;

		}
		break;
	case 4:                                       // Удаление
		for (i = 1; i < records; i++)
		{
			printf(ANSI_COLOR_GREEN"\n Покупатель %d: %s %s\n" ANSI_COLOR_RESET, i, pokupateli[i].name, pokupateli[i].fam);
			printf(ANSI_COLOR_GREEN" Кредитка: %s\n" ANSI_COLOR_RESET, pokupateli[i].creditcard);
			printf(ANSI_COLOR_GREEN" Адрес покупателя: %s\n" ANSI_COLOR_RESET, pokupateli[i].homeadress);
			printf(ANSI_COLOR_GREEN" Номер телефона: %s\n" ANSI_COLOR_RESET, pokupateli[i].callnumber);

		}
		i = 1;
		int d;        //номер записи, которую нужно удалить
		printf(ANSI_COLOR_BLUE"\nВведите номер покупателя, которого необходимо удалить\n" ANSI_COLOR_RESET);
		printf(ANSI_COLOR_BLUE"Или введите 555 для выхода\n" ANSI_COLOR_RESET);
		rewind(stdin);
		scanf_s("%d", &d);
		if (d == 555) {
			goto point;
		}
		if (d != 99)
		{
			for (int i = d; i < records; i++) //цикл для удаления заданной записи, начинаем цикл с удаляемой записи
				pokupateli[i] = pokupateli[i + 1]; //замещаем текущую запись следующей за ней
			records = records - 1; //уменяьшаем счетчик полных записей на 1
		}
		if (d == 30)
		{
			for (int i = 0; i < 30; i++)
				pokupateli[i] = tmp;
			records = 0; //счетчик структур обнуляем, т.к. все записи удалены
		}
		break;
	case 5:        // Сортировка покупателей
		int choice5;
		printf(ANSI_COLOR_BLUE"По какому параметру произвести сортировку?\n" ANSI_COLOR_RESET);
		printf(ANSI_COLOR_GREEN"1 - имя\n" ANSI_COLOR_RESET);
		printf(ANSI_COLOR_GREEN"2 - фамилия\n" ANSI_COLOR_RESET);
		printf(ANSI_COLOR_GREEN"3 - адрес\n" ANSI_COLOR_RESET);
		printf(ANSI_COLOR_GREEN"4 - кредитная карта\n" ANSI_COLOR_RESET);
		printf(ANSI_COLOR_GREEN"5 - номер телефона\n" ANSI_COLOR_RESET);
		printf(ANSI_COLOR_BLUE"0 - для возврата\n" ANSI_COLOR_RESET);
	point5:
		check = scanf_s("%d", &choice5);
		while (check == 0) {
			getchar();
			check = scanf_s("%d", &choice5);

		}
		if (choice5 > 5) {
			printf("Ошибка ввода\n");
			goto point5;
		}
		switch (choice5) {
		case 0:
			goto point;
			break;
		case 1:
			for (i = 0; i < records; i++)
				for (j = i + 1; j < records; j++)
					if (strcmp(pokupateli[i].name, pokupateli[j].name) > 0)
					{
						t = pokupateli[i]; pokupateli[i] = pokupateli[j]; pokupateli[j] = t;
					}
			break;
		case 2:
			for (i = 0; i < records; i++)
				for (j = i + 1; j < records; j++)
					if (strcmp(pokupateli[i].fam, pokupateli[j].fam) > 0)
					{
						t = pokupateli[i]; pokupateli[i] = pokupateli[j]; pokupateli[j] = t;
					}
			break;
		case 3:
			for (i = 0; i < records; i++)
				for (j = i + 1; j < records; j++)
					if (strcmp(pokupateli[i].homeadress, pokupateli[j].homeadress) > 0)
					{
						t = pokupateli[i]; pokupateli[i] = pokupateli[j]; pokupateli[j] = t;
					}
			break;
		case 4:
			for (i = 0; i < records; i++)
				for (j = i + 1; j < records; j++)
					if (strcmp(pokupateli[i].creditcard, pokupateli[j].creditcard) > 0)
					{
						t = pokupateli[i]; pokupateli[i] = pokupateli[j]; pokupateli[j] = t;
					}
			break;
		case 5:
			for (i = 0; i < records; i++)
				for (j = i + 1; j < records; j++)
					if (strcmp(pokupateli[i].callnumber, pokupateli[j].callnumber) > 0)
					{
						t = pokupateli[i]; pokupateli[i] = pokupateli[j]; pokupateli[j] = t;
					}
			break;
		}
		break;
	case 7:                                      // Выход
		exit(0);


	default: printf("Неверный выбор \n");
	}

	goto point;
	_getch();
	return 0;
}
