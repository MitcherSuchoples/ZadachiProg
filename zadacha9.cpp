#include <iostream>
#include <ctime>
using namespace std;




int main(){
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int n, x, a;
	bool t;

	do {
		cout << "Здравствуйте, попытайтесть угадатьзагаданное число от 0 до 100" << endl;
		int r = rand() % 101;
		for (x = 0; x < 10; x++) {
			cin >> n;
			if (n == r) {
				cout << "Вы выграли.Для нового раунда нажмите 1. Для остановки игры нажмите 2" << endl;
				break;
			}
			else 
				if (n < r) {
					cout << "Загаданное число больше" << endl;
				}
			
			else {
				cout << "Загаданное число меньше" << endl;
			}
		}
		if (x == 10) {
			cout << "Вы проиграли.Загаданное число =" << r << ";Для продолжения нажмите 1. Для остановки игры нажмите 2" << endl;
		}
		cin >> a;
		if (a == 1) 
		{
			system ("cls");
			t = true; }
		else 
			if(a != 1){
			t = false;
		}
	} while (t);
 
}