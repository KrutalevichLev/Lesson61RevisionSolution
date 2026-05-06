// Task 04 [The arithmetic mean of non-extreme elements]
// Среднее арифметическое неэкстремальных элементов
//
// Дан вектор натуральных чисел. Необходимо разработать эффективный алгоритм
// и реализовать функцию, которая вычисляет среднее рифметическое элементов
// вектора без учёта экстремальных элементов.
#include "logic.h"

int search_max_elements(int* array, int size) {
	int max = *array;

	for (int i = 1; i < size; i++)
	{
		if (*(array + i) > max) {
			max = *(array + i);
		}
	}

	return max;
}

int search_min_elements(int* array, int size) {
	int min = *array;

	for (int i = 1; i < size; i++)
	{
		if (*(array + i) < min) {
			min = *(array + i);
		}
	}

	return min;
}


double calculate_arithmetical_mean_of_nonextreme_elements(int* array, int size) {
	double sum = 0;
	int counter = 0;

	if (size <= 0 || array == nullptr) {
		return 0;
	}

	int max = search_max_elements(array, size);
	int min = search_min_elements(array, size);


	for (int i = 0; i < size; i++)
	{
		if (*(array + i) != max && *(array + i) != min) {
			sum += *(array + i);
			counter++;
		}
	}

	return  counter != 0 ? sum / counter : 0;
}