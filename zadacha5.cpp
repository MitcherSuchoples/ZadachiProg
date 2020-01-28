
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	double xt, x0, v0, t;
	const double a = -9.8;
	cout << "Введите значения x0,v0,t"; 
	cin >> x0 >>v0  >> t  ;
	xt = x0 + v0 * t + (a * t * t / 2);
	cout <<"Результат вычислений xt="<< xt << endl;

	xt = x0 + v0 * t + (1/2*a * t * t  );
	cout << "Результат вычислений xt=" << xt << endl;
  
}