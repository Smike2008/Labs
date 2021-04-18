#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<Windows.h>
#include <cstdlib>
#define _CRT_SECURE_NO_WARNINGS
#define ANSI_COLOR_BLUE "\x1b[34m"
#define ANSI_COLOR_RESET   "\x1b[0m"
#define ANSI_COLOR_GREEN "\x1b[32m"


struct info {
	char name[20];
	char fam[30];
	char otch[30];
	union {
		struct {
			char weight[25];  //  Рост вес;
			char height[25];

		}med1;

		struct {
			char weight[25];
			char height[25];
			char holesterin[50];
			char blood[50];
		}med2;




	}un;
};



struct info student[30], t;
struct info tmp;

int main()
{

	int i, j;
	int records = 1;
	setlocale(LC_ALL, "russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
point:
	system("cls");
	printf(ANSI_COLOR_BLUE	"\n\tБаза данных\t\n"						ANSI_COLOR_RESET);
	printf(ANSI_COLOR_GREEN	"1. Добавить студента\n"					ANSI_COLOR_RESET);
	printf(ANSI_COLOR_GREEN	"2. Показать список студентов\n"			ANSI_COLOR_RESET);
	printf(ANSI_COLOR_GREEN	"3. Редактирование параметров студента\n"	ANSI_COLOR_RESET);
	printf(ANSI_COLOR_GREEN	"4. Удаление студента из списка\n"			ANSI_COLOR_RESET);
	printf(ANSI_COLOR_GREEN	"5. Сортировка студентов\n"					ANSI_COLOR_RESET);
	printf(ANSI_COLOR_GREEN	"7. Выход\n"								ANSI_COLOR_RESET);
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
			printf(ANSI_COLOR_GREEN	"%d студент\n", records);

			puts(ANSI_COLOR_GREEN	"Введите имя: "					ANSI_COLOR_RESET);
			fflush(stdin);
			getchar();
			gets_s(student[records].name);
			puts(ANSI_COLOR_GREEN	"Введите фамилию: "			    ANSI_COLOR_RESET);
			gets_s(student[records].fam);


			puts(ANSI_COLOR_GREEN	"Введите отчество: "			ANSI_COLOR_RESET);
			gets_s(student[records].otch);


			puts(ANSI_COLOR_GREEN	"Введите рост: "				ANSI_COLOR_RESET);
			gets_s(student[records].un.med2.height);


			puts(ANSI_COLOR_GREEN	"Введите вес: "					ANSI_COLOR_RESET);
			gets_s(student[records].un.med2.weight);

			puts(ANSI_COLOR_GREEN	"Введите уровень холестерина: " ANSI_COLOR_RESET);
			gets_s(student[records].un.med2.holesterin);

			puts(ANSI_COLOR_GREEN	"Введите группу крови: "		ANSI_COLOR_RESET);
			gets_s(student[records].un.med2.blood);
			records++;

		}
		else {
			printf("Введено максимальное кол-во студентов");
		}
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
			printf(ANSI_COLOR_GREEN	"\n Студент %d:"					ANSI_COLOR_RESET" %s %s %s\n", i, student[i].fam, student[i].name, student[i].otch);
			printf(ANSI_COLOR_GREEN	" Рост студента:"				ANSI_COLOR_RESET" %s\n", student[i].un.med2.height);
			printf(ANSI_COLOR_GREEN	" Вес студента:"					ANSI_COLOR_RESET" %s\n", student[i].un.med2.weight);
			printf(ANSI_COLOR_GREEN	" Уровень холестерина студента:" ANSI_COLOR_RESET" %s\n", student[i].un.med2.holesterin);
			printf(ANSI_COLOR_GREEN	" Группа крови студента:"		ANSI_COLOR_RESET" %s\n", student[i].un.med2.blood);

		}
		system("pause");
		break;
	case 3:                                // Редактирование 

		system("cls");
		int c;
		for (i = 1; i < records; i++)
		{
			printf(ANSI_COLOR_GREEN	"\n Студент %d:"				 ANSI_COLOR_RESET" %s %s %s\n", i, student[i].name, student[i].fam, student[i].otch);
			printf(ANSI_COLOR_GREEN	" Рост студента:"				 ANSI_COLOR_RESET" %s\n", student[i].un.med2.height);
			printf(ANSI_COLOR_GREEN	" Вес студента:"				 ANSI_COLOR_RESET" %s\n", student[i].un.med2.weight);
			printf(ANSI_COLOR_GREEN	" Уровень холестерина студента:" ANSI_COLOR_RESET" %s\n", student[i].un.med2.holesterin);
			printf(ANSI_COLOR_GREEN	" Группа крови студента:"	     ANSI_COLOR_RESET" %s\n", student[i].un.med2.blood);
		}
	cpoint:
		printf(ANSI_COLOR_BLUE		"\nВыберите номер студента,которого хотите редактировать\n"	    ANSI_COLOR_RESET);
		printf(ANSI_COLOR_BLUE		"Или введите '0' для выхода обратно	\n"							ANSI_COLOR_RESET);
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
		int choice4;
		for (int a = 1; a < 2; a++) {
			printf(ANSI_COLOR_BLUE	"Введите: \n"								 ANSI_COLOR_RESET);
			printf(ANSI_COLOR_GREEN	"1 -для редактирования имени\n"				 ANSI_COLOR_RESET);
			printf(ANSI_COLOR_GREEN	"2 -для редактирования фамилии\n"	         ANSI_COLOR_RESET);
			printf(ANSI_COLOR_GREEN	"3 -для редактирования отчества\n"		     ANSI_COLOR_RESET);
			printf(ANSI_COLOR_GREEN	"4 -для редактирования роста\n"			     ANSI_COLOR_RESET);
			printf(ANSI_COLOR_GREEN	"5 -для редактирования веса\n"			     ANSI_COLOR_RESET);
			printf(ANSI_COLOR_GREEN	"6 -для редактирования уровня холестерина\n" ANSI_COLOR_RESET);
			printf(ANSI_COLOR_GREEN	"7 -для редактирования группы крови\n"	     ANSI_COLOR_RESET);
			rewind(stdin);
			pointd:
			check = scanf_s("%d", &choice4);
			while (check == 0) {
				getchar();
				check = scanf_s("%d", &choice4);

			}
			if (choice4 > 7 || choice4 < 1) {
				goto pointd;
			}

			a++;
		}
		switch (choice4) {

		case 1:
			printf(ANSI_COLOR_GREEN	"Введите новое имя\n"					ANSI_COLOR_RESET);
			getchar();
			gets_s(student[c].name);
			break;

		case 2:
			printf(ANSI_COLOR_GREEN	"Введите новую фамилию\n"				ANSI_COLOR_RESET);
			getchar();
			gets_s(student[c].fam);
			break;

		case 3:
			printf(ANSI_COLOR_GREEN	"Введите новое отчество\n"				ANSI_COLOR_RESET);
			getchar();
			gets_s(student[c].otch);
			break;

		case 4:
			printf(ANSI_COLOR_GREEN	"Введите новый рост\n"					ANSI_COLOR_RESET);
			getchar();
			gets_s(student[c].un.med2.height);
			break;

		case 5:
			printf(ANSI_COLOR_GREEN	"Введите новый вес\n"					ANSI_COLOR_RESET);
			getchar();
			gets_s(student[c].un.med2.weight);
			break;

		case 6:
			printf(ANSI_COLOR_GREEN	"Введите новый уровень холестерина\n"	ANSI_COLOR_RESET);
			getchar();
			gets_s(student[c].un.med2.holesterin);
			break;

		case 7:
			printf(ANSI_COLOR_GREEN	"Введите новую группу крови\n"			ANSI_COLOR_RESET);
			getchar();
			gets_s(student[c].un.med2.blood);
			break;


		}
		break;
	case 4:                                       // Удаление
		for (i = 1; i < records; i++)
		{
			printf(ANSI_COLOR_GREEN	"\n Студент %d:"					 ANSI_COLOR_RESET" %s %s %s\n", i, student[i].name, student[i].fam,student[i].otch);
			printf(ANSI_COLOR_GREEN	" Рост студента:"				 ANSI_COLOR_RESET" %s\n", student[i].un.med2.height);
			printf(ANSI_COLOR_GREEN	" Вес студента:"					 ANSI_COLOR_RESET" %s\n", student[i].un.med2.weight);
			printf(ANSI_COLOR_GREEN	" Уровень холестерина студента:" ANSI_COLOR_RESET" %s\n", student[i].un.med2.holesterin);
			printf(ANSI_COLOR_GREEN	" Группа крови студента:"	     ANSI_COLOR_RESET" %s\n", student[i].un.med2.blood);

		}
		i = 1;
		int d;        //номер записи, которую нужно удалить

		printf(ANSI_COLOR_BLUE	"\nВведите номер студента, которого необходимо удалить\n" ANSI_COLOR_RESET);
		printf(ANSI_COLOR_BLUE	"Или введите 555 для выхода\n"							  ANSI_COLOR_RESET);

		rewind(stdin);

		scanf_s("%d", &d);
		if (d == 555) {
			goto point;
		}

		if (d != 99)
		{
			for (int i = d; i < records; i++) //цикл для удаления заданной записи, начинаем цикл с удаляемой записи
				student[i] = student[i + 1]; //замещаем текущую запись следующей за ней
			records = records - 1; //уменяьшаем счетчик полных записей на 1
		}

		if (d == 30)
		{
			for (int i = 0; i < 30; i++)
				student[i] = tmp;
			records = 0; //счетчик структур обнуляем, т.к. все записи удалены
		}
		break;
	case 5:        // Сортировка покупателей
		int choice5;
		printf(ANSI_COLOR_BLUE	"По какому параметру произвести сортировку?\n" ANSI_COLOR_RESET);
		printf(ANSI_COLOR_GREEN	"1 - имя\n"									   ANSI_COLOR_RESET);
		printf(ANSI_COLOR_GREEN	"2 - фамилия\n"								   ANSI_COLOR_RESET);
		printf(ANSI_COLOR_GREEN	"3 - отчество\n"							   ANSI_COLOR_RESET);
		printf(ANSI_COLOR_GREEN	"4 - рост\n"								   ANSI_COLOR_RESET);
		printf(ANSI_COLOR_GREEN	"5 - вес\n"									   ANSI_COLOR_RESET);
		printf(ANSI_COLOR_GREEN	"6 - уровень холестерина\n"					   ANSI_COLOR_RESET);
		printf(ANSI_COLOR_GREEN	"7 - Группа крови\n"						   ANSI_COLOR_RESET);
		printf(ANSI_COLOR_BLUE	"0 - для возврата\n"						   ANSI_COLOR_RESET);
	point5:
		check = scanf_s("%d", &choice5);
		while (check == 0) {
			getchar();
			check = scanf_s("%d", &choice5);

		}
		if (choice5 > 7) {
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
					if (strcmp(student[i].name, student[j].name) > 0)
					{
						t = student[i]; student[i] = student[j]; student[j] = t;
					}
			break;
		case 2:
			for (i = 0; i < records; i++)
				for (j = i + 1; j < records; j++)
					if (strcmp(student[i].fam, student[j].fam) > 0)
					{
						t = student[i]; student[i] = student[j]; student[j] = t;
					}
			break;
		case 3:
			for (i = 0; i < records; i++)
				for (j = i + 1; j < records; j++)
					if (strcmp(student[i].otch, student[j].otch) > 0)
					{
						t = student[i]; student[i] = student[j]; student[j] = t;
					}
			break;
		case 4:
			for (i = 0; i < records; i++)
				for (j = i + 1; j < records; j++)
					if (strcmp(student[i].un.med2.height,student[j].un.med2.height)>0)
					{
						t = student[i]; student[i] = student[j]; student[j] = t;
					}
			break;
		case 5:
			for (i = 0; i < records; i++)
				for (j = i + 1; j < records; j++)
					if (strcmp(student[i].un.med2.weight,student[j].un.med2.weight)>0)
					{
						t = student[i]; student[i] = student[j]; student[j] = t;
					}
			break;
		case 6:
			for (i = 0; i < records; i++)
				for (j = i + 1; j < records; j++)
					if (strcmp(student[i].un.med2.holesterin, student[j].un.med2.holesterin) > 0)
					{
						t = student[i]; student[i] = student[j]; student[j] = t;
					}
			break;
		case 7:
			for (i = 0; i < records; i++)
				for (j = i + 1; j < records; j++)
					if (strcmp(student[i].un.med2.blood, student[j].un.med2.blood) > 0)
					{
						t = student[i]; student[i] = student[j]; student[j] = t;
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
