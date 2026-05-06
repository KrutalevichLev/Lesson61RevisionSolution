#include "logic.h"

int main() {
	int a, b, c;

	cout << "Enter three number: ";
	cin >> a >> b >> c;

	print("Befor: \nA = " + to_string(a) + "\nB = " + to_string(b) + "\nC = " + to_string(c));


	get_in_order(&a, &b, &c);

	print("\nAfter: \nA = " + to_string(a) + "\nB = " + to_string(b) + "\nC = " + to_string(c));


	return 0;
}