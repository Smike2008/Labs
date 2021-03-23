
#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<Windows.h>
#include <cstdlib>
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
	printf("\n\tБаза данных\t\n");
	printf("1. Добавить покупателя\n");
	printf("2. Показать список покупателей\n");
	printf("3. Редактирование параметров покупателя\n");
	printf("4. Удаление покупателя из списка\n");
	printf("5. Сортировка покупателей\n");

	printf("7. Выход\n");
	int button;
	scanf_s("%d", &button);
	switch (button)
	{
	case 1:                                      // Ввод
		if (records < 30) {

			system("cls");
			printf("%d покупатель\n", records);
			puts("Введите имя: ");
			fflush(stdin);
			getchar();
			gets_s(pokupateli[records].name);
			puts("Введите фамилию: ");

			gets_s(pokupateli[records].fam);
			puts("Введите кредитку: ");

			gets_s(pokupateli[records].creditcard);
			puts("Введите адрес: ");

			gets_s(pokupateli[records].homeadress);
			puts("Введите номер телефона: ");

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
			printf("\n Покупатель %d: %s %s\n", i, pokupateli[i].name, pokupateli[i].fam);
			printf(" Кредитка: %s\n", pokupateli[i].creditcard);
			printf(" Адрес покупателя: %s\n", pokupateli[i].homeadress);
			printf(" Номер телефона: %s\n", pokupateli[i].callnumber);

		}
		system("pause");
		break;
	case 3:                                // Редактирование 

		system("cls");
		int c;
		for (i = 1; i < records; i++)
		{
			printf("\n Покупатель %d: %s %s\n", i, pokupateli[i].name, pokupateli[i].fam);
			printf(" Кредитка: %s\n", pokupateli[i].creditcard);
			printf(" Адрес покупателя: %s\n", pokupateli[i].homeadress);
			printf(" Номер телефона: %s\n", pokupateli[i].callnumber);

		}
	cpoint:
		printf("\nВыберите номер покупателя,которого хотите редактировать\n");
		printf("Или введите '0' для выхода обратно\n");
		scanf_s("%d", &c);
		if (c > records - 1) {
			printf("Неверный ввод");
			goto cpoint;
		}
		if (c == 0) {
			break;
		}
		int per;
		for (int a = 1; a < 2; a++) {
			printf("Введите: \n");
			printf("1-для редактирования имени\n");
			printf("2-для редактирования фамилии\n");
			printf("3-для изменения адреса\n");
			printf("4-для изменения номера телефона\n");
			printf("5-для изменения кредитной карты\n");
			scanf_s("%d", &per);
			a++;
		}
		switch (per) {
		case 1:
			printf("Введите новое имя\n");
			getchar();
			gets_s(pokupateli[c].name);
			break;
		case 2:
			printf("Введите новую фамилию\n");
			getchar();
			gets_s(pokupateli[c].fam);
			break;
		case 3:
			printf("Введите новый адрес\n");
			getchar();
			gets_s(pokupateli[c].homeadress);
			break;
		case 4:
			printf("Введите новый номер телефона\n");
			getchar();
			gets_s(pokupateli[c].callnumber);
			break;
		case 5:
			printf("Введите новую кредитку\n");
			getchar();
			gets_s(pokupateli[c].creditcard);
			break;

		}
		break;
	case 4:                                       // Удаление
		for (i = 1; i < records; i++)
		{
			printf("\n Покупатель %d: %s %s\n", i, pokupateli[i].name, pokupateli[i].fam);
			printf(" Кредитка: %s\n", pokupateli[i].creditcard);
			printf(" Адрес покупателя: %s\n", pokupateli[i].homeadress);
			printf(" Номер телефона: %s\n", pokupateli[i].callnumber);

		}
		i = 1;
		int d;        //номер записи, которую нужно удалить
		printf("\nВведите номер покупателя, которого необходимо удалить\n");
		scanf_s("%d", &d);
		if (d != 99)
		{
			for (int i = d; i < records; i++) //цикл для удаления заданной записи, начинаем цикл с удаляемой записи
				pokupateli[i] = pokupateli[i + 1]; //замещаем текущую запись следующей за ней
			records = records - 1; //уменяьшаем счетчик полных записей на 1
		}
		if (d == 99)
		{
			for (int i = 0; i < 30; i++)
				pokupateli[i] = tmp;
			records = 0; //счетчик структур обнуляем, т.к. все записи удалены
		}
		break;
	case 5:        // Сортировка покупателей
		int choice5;
		printf("По какому параметру произвести сортировку?\n");
		printf("1 - имя\n");
		printf("2 - фамилия\n");
		printf("3 - адрес\n");
		printf("4 - кредитная карта\n");
		printf("5 - номер телефона\n");
		printf("0 - для возврата\n");
		point5:
		scanf_s("%d", &choice5);
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
				for (j = i + 1; j <records; j++)
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
