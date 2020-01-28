#include <iostream>
int main() {
	using namespace std;
	setlocale(LC_ALL, "rus");
	long long int x, l1, r1, l2, r2;
	bool R(0);
	cout << "Введите числа";
	cin >> x >> l1 >> r1 >> l2 >> r2;
	for (int a = l1; a <= r1; a++) 
	{
		for (int b = l2; b <= r2; b++) {
			if (a + b = x) {
				cout << a << " " << b;
				R = 1;
				break;
			}
			if (R) break;
		}
	}
	if (!R) cout << "-1";

	return(0);
}