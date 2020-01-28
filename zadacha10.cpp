#include <cmath>
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	int a,b,i;
	double x;
	cout << "Введите число ";
	cin >> a;
	cout << "Введите степень числа ";
	cin >> b;
	x = 1;
	if (b > 0) {
		for (i = 0; i < b; i++)
			x = x * a;
		cout << x;
	
	}
	 
	if (b == 0) {
		cout << 1;
	

	}
		if (b < 0) {
			if (a == 0) {
				cout << "Невозможно вычеслить";
			}
			else {
				b = abs(b);
				for (i = 0; i < b; i++) {
					x = x * a;
				}
				x = 1 / x;
				cout << x;
			}

		}





}