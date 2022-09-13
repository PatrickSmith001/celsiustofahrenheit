#include <iostream>
using namespace std;
int main()
{
	double fahrenheit;
	double celsius;

	cout << "Please enter in temperature in celsius ";
	cin >> celsius;
	fahrenheit = 9.0 / 5.0 * celsius + 32.0;

	cout << celsius << " in fahrenheit is " << fahrenheit << endl;

	return 0;
}