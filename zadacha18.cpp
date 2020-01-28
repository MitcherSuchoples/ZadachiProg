#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand(time(0));
	int arr[20], max, min;
	for (int x = 0; x < 20; x++)
	{
		arr[x] = rand() % 201 - 100;
		cout << arr[x] << " ";
	}
	max = arr[0];
	min = arr[0];
	for (int x = 0; x < 20; x++) {
		if (max < arr[x]) { max = arr[x]; };
		if (min > arr[x]) { min = arr[x]; };
	}
	cout << "\n" << min;
	cout << "\n" << max;
}