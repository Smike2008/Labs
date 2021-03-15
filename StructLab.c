#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include <cstdlib>

struct pokupbase
	
{
    //   имя
	char name[20];
    // фамилия
	char fam[30];
    //номер телефона
	int callnumber;
    //домашний адрес
	char homeadress[40];
	//кредитная карта
    char creditcard[20];
};

struct pokupbase pokupateli[30];
struct pokupbase tmp;
int sch;

int main()
{

	int i, j;
	int records = 1;
	setlocale(LC_ALL, "russian");
	point:
	system("cls");
	printf("\tБаза данных\t\n");
	printf("1. Добавить покупателя\n");
	printf("2. Показать список покупателей\n");
	printf("3. Редактирование параметров покупателя\n");
	printf("4. Удаление покупателя из списка\n");

	printf("7. Выход\n");
	int button;
	scanf_s("%d", &button);
	switch (button)
	{
	case 1:
		if (records < 30) {
			do
			{
				system("cls");
				printf("%d покупатель\n", records);
				puts("введите фамилию: ");
				fflush(stdin);
				getchar();
				gets_s(pokupateli[records].fam);
				puts("введите имя: ");

				gets_s(pokupateli[records].name);
				puts("введите кредитку: ");

				gets_s(pokupateli[records].creditcard);
				puts("введите адрес: ");

				gets_s(pokupateli[records].homeadress);
				puts("введите номер телефона: ");

				scanf_s("%d", &pokupateli[records].callnumber);
				records++;
				printf("продолжить? 1-да,0-нет\n");
				scanf_s("%d", &i);
			} while (i);
		}
		else printf("Введено максимальное кол-во покупателей");
		break;
		i = 0;
	case 2:
		system("cls");
		for (i = 1; i < records; i++)
		{
			printf("\nПокупатель %d: %s %s\n",i, pokupateli[i].name, pokupateli[i].fam);
			printf(" Кредитка: %s\n", pokupateli[i].creditcard);
			printf(" Адрес покупателя: %s\n", pokupateli[i].homeadress);
			printf(" Номер телефона: %d\n", pokupateli[i].callnumber);
			
		}
		system("pause");
		break;
	case 3:
		system("cls");
		int c;
		printf("Введите: \n");
		printf("1-для редактирования имени\n");
		printf("2-для редактирования фамилии\n");
		printf("3-для изменения адреса\n");
		printf("4-для изменения номера телефона\n");
		printf("5-для изменения кредитной карты\n");
		scanf_s("%d", &c);
		switch (c) {
		case 1:
			printf("Введите новое имя\n");
			getchar();
			gets_s(pokupateli[records].name);

		};
		system("pause");
		break;
	case 4:
		for (i = 1; i < records; i++)
		{
			printf("\nПокупатель %d: %s %s\n", i, pokupateli[i].name, pokupateli[i].fam);
			printf(" Кредитка: %s\n", pokupateli[i].creditcard);
			printf(" Адрес покупателя: %s\n", pokupateli[i].homeadress);
			printf(" Номер телефона: %d\n", pokupateli[i].callnumber);

		}
		int d;        //номер записи, которую нужно удалить
		printf("\nВведите номер записи, которую необходимо удалить\n");
		printf("Если необходимо удалить все записи,нажмите '99'\n");
		scanf_s("%d", &d);
		if (d != 99)
		{
			for (int i = (d - 1); i < records; i++) //цикл для удаления заданной записи, начинаем цикл с удаляемой записи
				pokupateli[i] = pokupateli[i + 1]; //замещаем текущую запись следующей за ней
			records = records - 1; //уменяьшаем счетчик полных записей на 1
		}
		if (d == 99)
		{
			for (int i = 0; i < 30; i++)//цикл по все записям от первой до 30-ой
				pokupateli[i] = tmp; //замещаем каждую структуру в массиве пустой структурой
			sch = 0; //счетчик структур обнуляем, т.к. все записи удалены
		}
		break;
	case 7:
		exit(0);


	default: printf("Неверный выбор \n");
	}

	goto point;	
	_getch();
	return 0;
}
