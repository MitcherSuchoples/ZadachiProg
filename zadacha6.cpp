#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int a, b, c;
	double x1, x2, D;
	cout << "Введите число a\t";
	cin >> a;
	cout << "Введите число b\t";
	cin >> b;
	cout << "Введите число c\t";
	cin >> c;

	if ((a == 0) && (b == 0)) {
		if (c != 0)
			cout << "Нет решений";
		else
			cout << "Бесконечное множество решений";
		exit(1);
	}
	else
		if ((b == 0) && (c == 0)) {
			cout << "x1 = 0";
			
			exit;
		}
		else
			if ((a == 0) && (c == 0)) {
				cout << "x1=0";
				
				exit(1);
			}
			else
				if (a == 0) {
					x1 = -c / b;
					cout << "x1=" << x1;
					
					exit(1);
				}
				else
					if (b == 0) {
						x1 = -c / a;
						if (x1 >= 0) {
							x1 = sqrt(x1);
							x2 = x1 * (-1);
							cout << "x1=" << x1 << endl;
							cout << "x2=" << x2 << endl;
						}

						else
							cout << "Решений нет";
						
						exit(1);
					}
					else
						if (c == 0) {
							x1 = 0;
							x2 = -b / a;
							cout << "x1=" << x1 << endl;
							cout << "x2=" << x2 << endl;
							
							exit;
						}
						else
							D = b * b - 4 * a * c;
	if (D > 0) {
		x1 = (-b + sqrt(D)) / (2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
		cout << "x1=" << x1 << endl;
		cout << "x2=" << x2 << endl;
	}
	else
		if (D == 0) {
			x1 = (-b) / (2.0 * a);
			cout << "x1=" << x1 << endl;
		}
		else {
			cout << "Корней нет";
		}
}