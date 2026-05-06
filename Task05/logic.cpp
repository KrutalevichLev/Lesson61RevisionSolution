// Task 05 [The sum of elements between first extreme elements]
// Сумма элементов между первыми экстримальными элементами  
// 
// Дан вектор целочисленных значений. Необходимо разработать эффективный алгоритм
// и реализовать функцию, которая вычисляет сумму элементов вектора, расположенных
// между первыми максимальным по модулю и минимальным по модулю элементами.
#include "util.h"

int find_min_index(int* array, int size) {
	int min = 9;
	int min_index = 0;

	for (int i = 0; i < size; i++)
	{
		int number = *(array + i);
		
		number = number < 0 ? -number : number;

		if (min > number){
			min = number;
			min_index = i;
		}
	}

	return min_index;
}

int find_max_index(int* array, int size) {
	int max = 0;
	int max_index = 0;

	for (int i = 0; i < size; i++)
	{
		int number = *(array + i);

		number = number < 0 ? -number : number; 

		if (max < number) {
			max = number;
			max_index = i;
		}
	}

	return max_index;
}

int sum_between_first_min_max(int* array, int size) {
	int big_index = find_max_index(array, size);
	int little_index = find_min_index(array, size);
	int sum = 0;

	if (little_index > big_index) {
		int temp = little_index;
		little_index = big_index;
		big_index = temp;
	}

	little_index++;

	for (int i = little_index; i < big_index; i++)
	{
		sum += *(array + i);
	}

	return sum;
}

