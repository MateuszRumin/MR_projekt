#include <iostream>

using namespace std;

int main()
{
   
	int a, b,c, wynik;
	cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b: ";
	cin >> b;
	cout << "Podaj c: ";
	cin >> c;




	if (a == 0)
	{
		wynik = (-b);

	}
	else
	{
		wynik = (-b) / a;
	}

	cout << "Miejcem zerowym funkcji w postaci ax + b jest: " << wynik<<"\n";

	if (a == 0)
	{
		wynik = (-b)-c;

	}
	else
	{
		wynik = ((-b) / a)-c;
	}







	cout << "Miejcem zerowym funkcji w postaci Ax + By + C = 0  jest: " << wynik << "\n";



	return 0;
}



