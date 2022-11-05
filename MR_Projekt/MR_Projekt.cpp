#include <iostream>

using namespace std;

int main()
{
   
	int a, b, wynik;
	cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b: ";
	cin >> b;




	if (a == 0)
	{
		wynik = (-b);

	}
	else
	{
		wynik = (-b) / a;
	}

	cout << "Miejcem zerowym tej funkcji jest " << wynik;

	return 0;
}



