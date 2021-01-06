#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<stdlib.h>


int main() {
	setlocale(LC_ALL, "Russian");
	int neVesokos[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int Vesokos[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int a, b, c, a1, b1, c1;
point:
	printf("Введите первую дату: день/месяц/год\n");
	scanf_s("%d%d%d", &a, &b, &c);
	printf("Введите вторую дату: день/месяц/год\n");
	scanf_s("%d%d%d", &a1, &b1, &c1);

	if (a > 31 || a1 > 31 || a < 0 || a1 < 0) {
		printf("Введены неверные данные!\n");
		goto point;
	}

	if (b > 12 || b1 > 12 || b < 0 || b1 < 0) {
		printf("Введены неверные данные!\n");
		goto point;
	}

	if (c < 0 || c1 < 0) {
		printf("Введены неверные данные!\n");
		goto point;
	}
	int day, day1; day = day1 = 0;
	day = a + (b * 31) + (c * 365);
	day1 = a1 + (b1 * 31) + (c1 * 365);
	int result = day - day1;
	if (b == 2) {
		result = result + 3;
	}
	if (b1 == 2) {
		result = result + 3;
	}
	if (result < 0) {
		result *= -1;
	}

	printf("Разница между датами %d дней!\n", result);
	printf("Количество полных лет: %d", result / 365);

	return 0;
}


//#include<stdio.h>
//#include<stdlib.h>
//#include<locale.h>
//
//
//int main(void) {
//    const int vesokos[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//    const int ne_vesokos[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//
//    int d, m, y, d1, m1, y1;
//    printf("Enter first date: d/m/y\n");
//    scanf_s("%d%d%d", &d, &m, &y);
//    printf("Enter second date: d/m/y\n");
//    scanf_s("%d%d%d", &d1, &m1, &y1);
//
//    int days1 = 0;
//    int days2 = 0;
//
//    for (int i = 1; i < y; i++) {
//        if (i % 4 == 0) {
//            for (int i = 0; i < 12; i++) {
//                days1 += vesokos[i];
//            }
//        }
//        else {
//            for (int i = 0; i < 12; i++) {
//                days1 += ne_vesokos[i];
//            }
//        }
//    }
//    if (y % 4 == 0) {
//        for (int i = 0; i < m; i++) {
//            days1 += vesokos[i];
//        }
//    }
//    else {
//        for (int i = 0; i < m; i++) {
//            days1 += ne_vesokos[i];
//        }
//    }
//    days1 += d;
//
//
//
//    for (int i = 1; i < y1; i++) {
//        if (i % 4 == 0) {
//            for (int i = 0; i < 12; i++) {
//                days2 += vesokos[i];
//            }
//        }
//        else {
//            for (int i = 0; i < 12; i++) {
//                days2 += ne_vesokos[i];
//            }
//        }
//    }
//    if (y1 % 4 == 0) {
//        for (int i = 0; i < m; i++) {
//            days2 += vesokos[i];
//        }
//    }
//    else {
//        for (int i = 0; i < m; i++) {
//            days2 += ne_vesokos[i];
//        }
//    }
//    days2 += d1;
//
//    int result = days2 - days1;
//    if (result < 0) {
//        result = result * (-1);
//    }
//    printf("%d days.", result);
//}



