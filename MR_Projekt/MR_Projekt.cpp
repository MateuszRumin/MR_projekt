#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   
	float a, b,c, wynik,wynik2=0,delta;
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

	cout << "Miejcem zerowym funkcji liniowej w postaci ax + b dla liczb a: "<<a<<" b: "<<b<<" jest: " << wynik << "\n";

	if (a == 0)
	{
		wynik = (-b)-c;

	}
	else
	{
		wynik = ((-b) / a)-c;
	}


	cout << "Miejcem zerowym funkcji liniowej w postaci Ax + By + C = 0 dla liczb a: " << a << " b: " << b <<" c: " <<c<< " jest: " << wynik << "\n";

	
	
	
	
	if (a == 0)
	{
		if (b == 0)
		{
			wynik = (-c);

		}
		else
		{
			wynik = (-c) / b;
		}
		cout << "Funkcja kwadratowej w postaci ax^2 + bx + c dla liczb a: " << a << " b: " << b << " c: " << c << " jest funkcja liniowa bx + c a jej miejcem zerowym jest : " << wynik << "\n";
	}
	else
	{

		delta = (b * b) - (4 * a * c);
		if (delta == 0)
		{
			wynik = (-b) / (2 * a);
			cout << "Miejcem zerowym funkcji kwadratowej w postaci ax^2 + bx + c dla liczb a: " << a << " b: " << b << " c: " << c << " jest: " << wynik << "\n";
		}
		else if (delta > 0)
		{
			delta = sqrt(delta);
			wynik = (((-b) - delta)) / (2 * a);
			wynik2 = (((-b) + delta)) / (2 * a);

			cout << "Miejscami zerowymi funkcji kwadratowej w postaci ax^2 + bx + c dla liczb a: " << a << " b: " << b << " c: " << c << " jest: " << wynik << " oraz " << wynik2 << "\n";

		}
		else if (delta < 0)
		{
			cout << "Funkcji kwadratowa w postaci ax^2 + bx + c dla liczb a: " << a << " b: " << b << " c: " << c << " nie posiada miejsc zerowych \n";
		}


	}













	return 0;
}



