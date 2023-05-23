#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;


int main()
{
	double val1 = 900.0;
	double val2 = 125.5;

	cout << fixed << setprecision(12) << sqrt(val1) << endl;
	cout << fixed << setprecision(12) << sqrt(val2) << endl;

	return (0);
}
