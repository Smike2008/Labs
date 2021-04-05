#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<Windows.h>
#include <cstdlib>
#define _CRT_SECURE_NO_WARNINGS
#define ANSI_COLOR_BLUE "\x1b[34m"
#define ANSI_COLOR_RESET   "\x1b[0m"
#define ANSI_COLOR_GREEN "\x1b[32m"


struct Student_info {
	//Подструктура студента
	struct student {
		char name[20];
		char fam[30];
		char otch[30];
	};
	union {
		int weight;
		int height;
	};

}student;





int main() {

	int i, j;
	int records = 1;
	setlocale(LC_ALL, "russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("cls");
	printf(ANSI_COLOR_BLUE"\n\tБаза данных\t\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_GREEN"1. Добавить студента\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_GREEN"2. Показать список студентов\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_GREEN"3. Редактирование параметров студентов\n" ANSI_COLOR_RESET);
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







	return;
}
