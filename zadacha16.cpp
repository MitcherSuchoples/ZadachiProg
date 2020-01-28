#include <iostream>
using namespace std;
void factorization(int z)
{
	int x = 2;
	cout << z << " = ";
	while (z > 1) 
	{
		int m = 0;
		while (z % x == 0)
		{
			m++;
			z = z / x;
		}
		if (m > 0)
		{
			cout << x;
			if (m > 1) cout << "^" << m;
			else cout << "*";
		}
		if (x == 2) x++;
		else x += 2;
	}
	cout << endl;
}
int main() 
{

	int z;
	cout << "z = ";
	cin >> z;
	factorization(z);
}