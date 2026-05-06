// Task 02 [The arithmetic mean of non-zero elements]
// Среднее арифметическое ненулевых элементов
//
// Дан вектор целочисленных значений. Необходимо разработать эффективный алгоритм
// и реализовать функцию, которая вычисляет среднее арифметическое ненулевых 
// элементов вектора.

double calculate_arithmetical_mean_of_nonzero_elements(int* array,int size) {

	if (size <= 0 || array == nullptr) {
		return 0;
	}

	int count = 0;
	double sum = 0;

	for (int i = 0; i < size; i++)
	{
		if (*(array + i) != 0) {
			count++;
			sum += *(array + i);
		}
	}

	if (count == 0) {
		return 0;
	}

	return sum / count;
}