#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, R;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		cout << "R=  "; cin >> R;

		if ((y >= -x - 2 * R && y <= 0 && x <= 0) || (R * R <= x * x + y * y && x <= 2 * R && y <= 2 * R && x >= 0 && y >= 0))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;
	cout << "R=  "; cin >> R;
	for (int i = 0; i < 10; i++)
	{
		
		x = 4 * R * rand() / RAND_MAX - 2 * R;
		y = 4 * R * rand() / RAND_MAX - 2 * R;

		if ((y >= -x - 2 * R && y <= 0 && x <= 0) || (R * R <= x * x + y * y && x <= 2 * R && y <= 2 * R && x >= 0 && y >= 0))
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}
	return 0;
}
