// Task X [The exam results]
// Результаты экзамена
//
// Дан список оценок студентов, полученных за самостоятельную работу (или экзамен).
// Используется четырёхбальная система оценивания знаний (от 2 до 5).
// Необходимо разработать эффективный алгоритм и написать функцию, которая обрабатывает
// результаты экзамена. Для каждой оценки функция должна вычислить процент от общего 
// количества оценок. 
// 
// На базе данной функции необходимо реализовать тестовый или полноценный проект.
//
// Далее приведен рекомендуемый вид экрана функции.
// 
// Обработка результатов экзамена
// Введите исходные данные: 5 4 4 5 3 4 3 4 5 3 4 4 3 4 4 3 5 3 3 4 5 5 5 5 4 5 5 5 2 5
// Результаты самостоятельной работы (или экзамена):
//	пятерок 40 % (12)
//	четверок 33.3 % (10)
//	троек 23.3 % (7)
//	двоек 3.4 % (1)

#include "logic.h"

int find_count_in_array(int* array, int size, int number) {
	int count = 0;

	for (int i = 0; i < size; i++)
	{
		if (*(array + i) == number) {
			count++;
		}
	}

	return count;
}

double find_interest(int all, int count) {
	return 100.0 * count / all;
}

string find_all_interest_of_marks(int* array, int size) {
	string msg = "";

	int count_of_2 = find_count_in_array(array, size, 2);
	int count_of_3 = find_count_in_array(array, size, 3);
	int count_of_4 = find_count_in_array(array, size, 4);
	int count_of_5 = find_count_in_array(array, size, 5);


	msg += "Interest of mark 2 " + to_string(find_interest(size, count_of_2)) + "\n" +
		"Interest of mark 3 " + to_string(find_interest(size, count_of_3)) + "\n" +
		"Interest of mark 4 " + to_string(find_interest(size, count_of_4)) + "\n" +
		"Interest of mark 5 " + to_string(find_interest(size, count_of_5)) + "\n";

	return msg;
}