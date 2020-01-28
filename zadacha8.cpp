

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	setlocale(LC_ALL, "rus");
	double a, b,x;
	char c;
	cout << "Ведите число а: ";
	cin >> a;
	cout << "Введите число b: ";
	cin >> b;
	cout << "Введите знак: ";
	cin >> c;
	
	switch (c) {
	case '+':
		x = a + b; 
		cout << x;
		break;
	case'-':
		x = a - b;
		cout << x;
		break;
	case'*':
		x = a * b;
		cout << x;
		break;
	case'/':
		if (b == 0) {
			cout << "Деление на 0 невозможно,решений нет";

		}
		else {
			x = a / b;
			cout << x;
			
		}		
		break;
	default:
		cout << "Нет такой операции" << endl;
	}

          
	}

