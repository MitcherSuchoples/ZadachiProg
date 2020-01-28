#include <math.h>
#include <iostream>

int main()
{
	using namespace std;
	setlocale(LC_ALL, "rus");
	int s, p = 0;
	cout << "Введите число и узнайте количество степеней 2ки в этом числе" << endl;
	cin >> s;
	while (s > 0) {
		s = s - pow(2, p);
		p++;
	}
	cout << endl << "Количество степеней 2 в данном числе: " << p;
}