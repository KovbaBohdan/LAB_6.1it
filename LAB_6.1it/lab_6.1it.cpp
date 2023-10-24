#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* b, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		b[i] = Low + rand() % (High - Low + 1);
}
void Print(int* b, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << b[i];
	cout << endl;
}

int Sum(int* b, const int size)
{
	int S = 0;

	for (int i = 0; i < size; i++)
		if (b[i] > 0 && b[i] % 2 != 0)
		{
			S += b[i];
		}
	return S;
}
int Number(int* b, const int size)
{
	int N = 0;

	for (int i = 0; i < size; i++)
		if (b[i] > 0 && b[i] % 2 != 0)
		{
			N++;
		}
	return N;
}
void Zero(int* b, const int size)
{
	for (int i = 0; i < size; i++)
		if (b[i] > 0 && b[i] % 2 != 0)
		{
			b[i] = 0;
		}
}
int main()
{
	srand((unsigned)time(NULL));

	const int n = 23;
	int b[n];

	int Low = -25;
	int High = 80;
	Create(b, n, Low, High);
	cout << "b[n] =";
	Print(b, n);
	int S = Sum(b, n);
	int number = Number(b, n);
	cout << "Sum = " << S << endl;
	cout << "Number = " << number << endl;
	Zero(b, n);
	cout << "b[n] =";
	Print(b, n);
	return 0;
}
