#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int a, b;
	double c, d;
	cout << "Введите два целых числа\n";
	cin >> a >>b;
	cout <<"\n" << a + b << "\t" << a - b << "\t" << a * b << "\t" << a / b << "\n";
	cout << "Введите два дробных числа";
	cin >> c >> d;
	cout << "\n"  << c + d << "\t" << c - d << "\t" << c * d << "\t" << c / d << "\n";
	cout << "Введите целое и дробное число";
	cin>> a >> c;
	cout << "\n" << a + c << "\t" << a - c << "\t" << a * c << "\t" << a / c << "\n";
	cout << "Ввидите дробное и целое число";
	cin >> d >> b;
	cout << "\n" << d+b << "\t" << d-b << "\t" << d*b << "\t" << d/b << "\n";
}    
