// Task 06 [The sorting from the specified range]
// Сортировка из указанного промежутка
//
// Дан вектор натуральных чисел. Необходимо разработать эффективный алгоритм
// и реализовать функцию, которая сортирует часть элементов заданного вектора
// в указанном диапазоне порядковых номеров либо по возрастанию, 
// либо по убыванию.
#include "logic.h"

void sort_in_range(int* array, int size, int start, int end, bool type) {
	if (end < start) {
		int t = start;
		start = end;
		end = t;
	}

	if (end <= 0 || end >= size || start < 0) {
		return;
	}


	if (type) {
		for (int i = start; i <= end - 1; i++)
		{
			int index = i;

			for (int j = i + 1; j <= end; j++)
			{
				if (*(array + index) > *(array + j)) {
					index = j;
				}
			}

			int t = *(array + index);
			*(array + index) = *(array + i);
			*(array + i) = t;
		}
	}
	else {
		for (int i = start; i <= end - 1; i++)
		{
			int index = i;

			for (int j = i + 1; j <= end; j++)
			{
				if (*(array + index) < *(array + j)) {
					index = j;
				}
			}

			int t = *(array + index);
			*(array + index) = *(array + i);
			*(array + i) = t;
		}
	}
}