#include <iostream>
#include <iomanip>
constexpr auto k = 100;

using namespace std;

double dist(int n)
{
	if (n == 1 || n == 2)
		return k;
	else
		return (1.0 / (1.0 / dist(n - 1) + 2.0 / k));
}

int main()
{
	int n;
	double x = 0;

	cout << "Batteries"
		<< "   Distance" << endl;

	/* This gives the maximum distance that can be
	traveled by the car with n number of batteries
	in the initial pile */
	for (int m = 1; m <= 20; m++) {
		n = m;
		while (n > 0)
		{
			x += dist(n);
			n--;
		}
		cout << setw(5) << m << setw(15) << x << endl;
		x = 0;
	}

	return 0;
}