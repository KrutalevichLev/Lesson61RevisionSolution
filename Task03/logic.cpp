// Task 03 [The number of local extreme numbers]
// Количество локальных минимумов и максимумов
//
// Дан вектор целочисленных значений. Необходимо разработать эффективный алгоритм
// и реализовать функцию, которая подсчитывает количество локальных минимумов 
// и максимумов.

int count_local_extreme_numbers(int* array, int size) {
    if (size <= 1) {
        return 0;
    }

    int count = 0;

    if (array[0] != array[1]) {
        count++; 
    }

   
    for (int i = 1; i < size - 1; i++) {
        
        if (array[i] > array[i - 1] && array[i] > array[i + 1]) {
            count++;
        }
        else if (array[i] < array[i - 1] && array[i] < array[i + 1]) {
            count++;
        }
    }

    if (array[size - 1] != array[size - 2]) {
        count++; 
    }

    return count;
}
