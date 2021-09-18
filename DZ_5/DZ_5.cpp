
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cassert>
using namespace std;

//T1

void wtf()
{
	cout << "\n// DZ soo hard//\n";
}

double mvp[9]{ 9.1, 8.2, 7.3, 6.4, 5.5, 4.6, 3.7, 2.8, 1.9 };

bool MyMassive(double mvp[], int size)
{
	if (mvp == nullptr || size == 0)
		return false;
	for (size_t a = 0; a < size; a++)
		cout << "| " << a << (a > mvp[a] ? " > " : " < ") << mvp[a] << " |";
	return true;

};
//T2

void Public(int* t, const int n)
{
	for (int d = 0; d < n; d++)
		if (t[d]) t[d] = 0; else t[d] = 1;
}
void Republic(int* t, const int n)
{
	for (int o = 0; o < n; o++)
		cout << t[o] << " ";

}
//T3  

void inferno(int* x, const int v)
{
	for (int w = 0; w < v; w++)
		if (x[w]) x[w] = 0;
		else x[w] = 1;
}

void coublestonne(int* x, const int v)
{
	for (int w = 0; w < v; w++)
		cout << x[w] << " ";

}
//T4

void wtr(int* x, const int d, int n)
{
	while (n < 0)
	{
		n += d;
	}

	for (int v = 0; v < n; v++) {
		int ggg;
		ggg = x[d - 1];
		for (int i = d - 2; i >= 0; i--)
		{
			x[i + 1] = x[i];
		}
		x[0] = ggg;
	}
	for (int i = 0; i < d; i++)
	{
		cout << x[i] << " ";
	}

}
//T5

bool chtogdekogda(int* mass, int size)
{
	setlocale(LC_ALL, "Rus");

	int one;
	int two;

	for (int w = 0; w < size; w++) {
		one = 0;
		two = 0;

		int d1;
		for (d1 = 0; d1 < w; d1++)
		{
			one += mass[d1];
		}


		for (int d2 = d1; d2 < size; d2++) {
			two += mass[d2];
		}

		if (one == two) {
			cout << "Баланс обнаружен." << endl;
			return true;
		}
	}
	{
		cout << "Баланс не найден." << endl;
	}
	return false;
}
void chtogdezachem(int* mass, int size)
{
	setlocale(LC_ALL, "Rus");

	int one;
	int two;

	for (int w = 0; w < size; w++) {
		one = 0;
		two = 0;

		int d1;
		for (d1 = 0; d1 < w; d1++)
		{
			one += mass[d1];
		}


		for (int d2 = d1; d2 < size; d2++) {
			two += mass[d2];
		}
		if (one == two)
		{
			cout << "|| ";
		}
		cout << mass[w] << " ";

	}
}




int main()
{
	setlocale(LC_ALL, "Rus");

	//Task 1
	{
		wtf();
		MyMassive(mvp, 9);
		cout << "\n";
	};
	//Task 2 
		
	{
		wtf();
		const int d = 10;
		int t[d] = { 1, 1, 0, 0, 1, 0, 1, 1, 0, 0 };
		Republic(t, d);
		cout << "\n";
		Public(t, d);
		Republic(t, d);
		cout << "\n";
	};
	//Task 3

	{
		wtf();
		int rap[8];
		rap[0] = 1;
		for (int w = 1; w < 8; w++) {
			rap[w] = rap[w - 1] + 3;
		}
		coublestonne(rap, 8);
		cout << "\n";
	}
	// Task 4

	wtf();
	const int d = 5;
	{
		int lol[d] = { 1, 2, 3, 4, 5 };
		Republic(lol, d);
		cout << "\n";
		wtr(lol, d, 2);
		cout << "\n";

	}
	//Task 5

	{
		wtf();

		int massive[6] = { 1,1,2,2,2,0 };
		chtogdezachem(massive, 6);
		chtogdekogda(massive, 6);
	}

	return 0;
}

