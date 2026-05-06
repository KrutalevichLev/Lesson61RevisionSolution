#include "logic.h"

int main() {
	int size;

	cout << "Enter size of marks list: ";
	cin >> size;

	int* array = create(size);

	cout << "Enter marks:" << endl;

	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << ") ";
		cin >> *(array + i);
	}

	cout << find_all_interest_of_marks(array, size);




	remove(array);


	return 0;
}