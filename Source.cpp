#include <iostream>
#include <conio.h>

using namespace std;

int Faktorial(int);

int main()
{
	int n, fac;
	cout << "N! faktorialdi esaplaw!" << endl;
	cout << "N : "; cin >> n;
	fac = Faktorial(n);
	cout << endl << "N! faktorial = : " << fac << endl;

	_getch();
	return 0;
}

int Faktorial(int N)
{
	if (N <= 1) 
	{
		cout << N;
		return N;
	}
	else
	{
		cout << N << "x";
		return N * Faktorial(N - 1);
	}
}