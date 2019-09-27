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
	cout << "Enter the number of batteries:";
	cin >> n;

	cout << "Batteries"
		<< "    Distance" << endl;
	while (n > 0)
	{
		x += dist(n);
		cout << setw(5) << n << setw(15) << x << endl;
		n--;
	}

	return 0;
}