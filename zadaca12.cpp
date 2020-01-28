#include <iostream>
using namespace std;
 

int main()
{
	setlocale(LC_ALL, "rus");
	int a, i;
	bool prost = true;
	cout << "Введите число";
	cin >> a;
	if (a <= 0) {
		cout << "не является натуральным";
		exit(1);
	}
	if (a == 1) {
		cout << "чило 1 не является ни простым ни сосьавным" << endl;
		exit(1);
	}
	if (a > 1) {
		for (i = 2; i < a; i++) {
			if (a % i == 0) {
				prost = false;
				break;
			}
		}
	}
	if (prost == true) {
		cout << "простое число";
	}
	else {
		cout << "составное число" << endl;
	}
	

}

