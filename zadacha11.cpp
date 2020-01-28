#include <cmath>
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int a, b = 1;
	cout << "Введите число" << endl;
	cin >> a;
	if (a < 0) { cout << "Несуществует" << endl; }
	else {
		for (int i = 1; i < a + 1; i++)
			b = b * i;
		cout << b;
	}
}
	
