#include <stdio.h>
#include <math.h>


int main() {
	double x = 0.9, y;// Дробные числа
	y = 1.5 * x * sin(x * x) + (sqrt((cos(x) * cos(x)) + 1)) - ((24 * pow(x, 3) - sqrt(x)) / cos(x + 0.2))+exp(x+1);
	printf("Y=%.1f\n", y);  //вывод на экран


	return 0;
}
