﻿
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	double a, b, c, S, V,p,a1,a2,b1,b2,c1,c2;
	cout << "Выбирете способ решения\n"<<"1-способ по 3 сторонам\n"<<"2-способ по вершинам\n";
	cin >> V;
	if (V == 1) {
		cout << "Введите значения длин сторон";
		cin >> a >> b >> c;
		if ((a == 0) || (b == 0) || (c == 0)) {
			cout << "Треугольник не образуется";
		}
		else {
			if ((a + b > c) && (b + c > a) && (a + c > b)) {

				p = (a + b + c) / 2;

				S = sqrt(p * (p - a) * (p - b) * (p - c));
				cout << "Прощадь треугольника =" << S << endl;
			}
			else { cout << "Треугольник не образуется"; }
		}
	}


	if (V == 2) {
		cout << "Введите координаты вершины А\n";
		cin >> a1 >> a2;
		cout << "Введите координаты вершины В\n";
		cin >> b1 >> b2;
		cout << "Введите координаты вершины С\n";
		cin >> c1 >> c2;
		if ( (a1==b1)&&(a2==b2)||(a1==c1)&&(a2==c2)||(b1==c1)&&(b2==c2)){
			cout << "Точки не образуют треугольник,решений нет" << endl;
		}
		
		
		else {
			S = abs((b1 - a1) * (c2 - a2) - (c1 - a1) * (b2 - a2)) / 2;
			cout << "Площадь треугольника =" << S << endl;
		}
		
	}
	
	if ((V != 1) && (V != 2))
		cout << "Нет такого метода решения";
}