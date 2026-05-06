#include "util.h"

void print(string s) {
	cout << s;

}
void init_rnd(int** matrix, int size, int a, int b) {

	if (matrix == NULL || size <= 0)
	{
		return;
	}

	if (a > b)
	{
		int t = a;
		a = b;
		b = t;
	}


	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			*(*(matrix + i) + j) = rand() % (b - a + 1) + a;
		}
	}
}
void init_user(int** matrix, int size) {
	cout << "Input matrix elements: ";
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; i++) {
			cin >> *(*(matrix + i) + j);
		}
	}
}
string convert(int** matrix, int size) {
	string s = "";

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; i++) {
			s += to_string(*(*(matrix + i) + j)) + " ";
		}
		s += "\n";
	}
	return s;
}
int** create(int size) {
	if (size <= 0)
	{
		return NULL;
	}

	int** matrix = new int* [size];

	for (int i = 0; i < size; i++)
	{
		*(matrix + i) = new int[size];
	}

	return matrix;

}
void remove(int** matrix, int size) {
	if (matrix == NULL)
	{
		return;
	}

	for (int i = 0; i < size; i++)
	{
		delete[] * (matrix + i);
	}

	delete[] matrix;
}