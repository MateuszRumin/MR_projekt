#include <iostream>
#include <cmath>


using namespace std;

int main()
{
	float a=0, b=0, c=0, wynik=0, wynik2 = 0, delta=0,p=0,q=0;
	int x = 0;
	while (x > 4 || x < 1)
		{
			cout << "                           MENU \n ";
			cout << "1. Miejsce zerowe funkcji liniowej w postaci ax + b \n ";
			cout << "2. Miejsce zerowe funkcji liniowej w postaci Ax + By + C = 0 \n ";
			cout << "3. Miejsce zerowe funkcji kwadratowej w postaci ax^2 + bx + c \n ";
			cout << "4. Miejsce zerowe funkcji kwadratowej w postaci y= a(x-p)^2+q \n ";
			cout << "Wybieram : ";
			cin >> x;
			system("cls");
		}

	switch (x)
	{
		case 1:
			
			cout << "Podaj a: ";
			cin >> a;
			cout << "Podaj b: ";
			cin >> b;
			cout << " \n ";

			if (a == 0)
				{
					wynik = (-b);

				}
			else
				{
					wynik = (-b) / a;
				}

			cout <<"Miejcem zerowym funkcji liniowej w postaci ax + b dla liczb a: " << a << " b: " << b << " jest: " << wynik << "\n\n";

		break;

		case 2:
			
			cout << "Podaj a: ";
			cin >> a;
			cout << "Podaj b: ";
			cin >> b;
			cout << "Podaj c: ";
			cin >> c;
			cout << " \n ";
			if (a == 0)
				{
					wynik = (-b) - c;

				}
			else
				{
					wynik = ((-b) / a) - c;
				}


			cout <<"Miejcem zerowym funkcji liniowej w postaci Ax + By + C = 0 dla liczb a: " << a << " b: " << b << " c: " << c << " jest: " << wynik << "\n\n";

		break;

		case 3:
			
			cout << "Podaj a: ";
			cin >> a;
			cout << "Podaj b: ";
			cin >> b;
			cout << "Podaj c: ";
			cin >> c;
			cout << " \n\n ";

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

					cout <<"Funkcja kwadratowej w postaci ax^2 + bx + c dla liczb a: " << a << " b: " << b << " c: " << c << " jest funkcja liniowa bx + c a jej miejcem zerowym jest : " << wynik << "\n\n";
				}
			else
				{

					delta = (b * b) - (4 * a * c);
					if (delta == 0)
						{
							wynik = (-b) / (2 * a);
							cout <<"Miejcem zerowym funkcji kwadratowej w postaci ax^2 + bx + c dla liczb a: " << a << " b: " << b << " c: " << c << " jest: " << wynik << "\n\n";
						}
					else if (delta > 0)
						{
							delta = sqrt(delta);
							wynik = (((-b) - delta)) / (2 * a);
							wynik2 = (((-b) + delta)) / (2 * a);

							cout <<"Miejscami zerowymi funkcji kwadratowej w postaci ax^2 + bx + c dla liczb a: " << a << " b: " << b << " c: " << c << " jest: " << wynik << " oraz " << wynik2 << "\n\n";

						}
					else if (delta < 0)
						{
							cout <<"Funkcji kwadratowa w postaci ax^2 + bx + c dla liczb a: " << a << " b: " << b << " c: " << c << " nie posiada miejsc zerowych \n\n";
						}


				}

		break;
		case 4:
			cout << "Podaj a: ";
			cin >> a;		
			cout << "Podaj p: ";
			cin >> p;
			cout << "Podaj q: ";
			cin >> q;
			cout << " \n ";

			if (a == 0)cout << "a w postaci kanonicznej funkcji kwadratowej nie moze byc równe 0";
			else
			{

				b =  -( (  2* a ) * p );
				delta = -( (4 * a) * q );

				if (delta == 0)
				{
					wynik = (-b) / (2 * a);
					cout << "Miejcem zerowym funkcji kwadratowej w postaci ax^2 + bx + c dla liczb a: " << a << " b: " << b << " c: " << c << " jest: " << wynik << "\n\n";
				}
				else if (delta > 0)
				{
					delta = sqrt(delta);
					wynik = (((-b) - delta)) / (2 * a);
					wynik2 = (((-b) + delta)) / (2 * a);

					cout << "Miejscami zerowymi funkcji kwadratowej w postaci ax^2 + bx + c dla liczb a: " << a << " b: " << b << " c: " << c << " jest: " << wynik << " oraz " << wynik2 << "\n\n";

				}
				else if (delta < 0)
				{
					cout << "Funkcji kwadratowa w postaci ax^2 + bx + c dla liczb a: " << a << " b: " << b << " c: " << c << " nie posiada miejsc zerowych \n\n";
				}





















			}
			
	   break;

	}

   
	




	

	

	
	
	
	
	







	system("PAUSE");
	system("cls");
	main();
	return 0;
}



