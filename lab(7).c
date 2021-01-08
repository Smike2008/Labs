#include <stdio.h>
#include <stdlib.h>
#define SIZE 500
void main(void)
{
    char* line;
    int i = 0;
    int nach=0;
    int schet = 0;
    int max = 0;
    line = (char*)malloc(SIZE*sizeof(char));
    gets_s(line,SIZE);
    while (line[i] != '\0') // поиск максимальной длины слова и его начала
    {
        if ((line[i] != ' ') && (line[i] != '\0'))
        {
            schet++;
            if (schet > max)
            {
                max = schet;
                nach = i - max + 1;
            }
        }
        else
            schet = 0;
        i++;
    }
    i = nach;
    while (i < (SIZE - max)) //перезапись
    {
        line[i] = line[i + max];
        i++;
    }
    puts(line);
}
