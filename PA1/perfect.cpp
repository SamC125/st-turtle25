#include <iostream>

using namespace std;

bool is_perfect(long int n)
{
	bool result;
	double m, o;
	double add = 0;
	for (int j = 1; j < n; j++)
	{
		m = n / j;
		o = m*j;
		if (o == n  && j != n)
			add = add + j;
	}
	if (add == n)
	{
		double a;
		double b;
		double add2 = 0;
		for (int c = 1; c < n + 1; c++)
		{
			a = n / c;
			b = a*c;
			if (b == n)
				add2 = add2 + c;
		}
		if (add2 == 2 * n)
			result = true;
		else
			result = false;
	}
	else
		result = false;
	return result;

}

int main()
{	
	double check;
	bool(k);
	cout << "enter a number to test for perfectness: ";
	cin >> check;
	if (check != 0)
	{
		k = is_perfect(check);
		if (k == true)
			cout << check << " is perfect." << endl;
		else
			cout << check << " is not perfect." << endl;
	}
	while (check != 0)
	{
		cout << "enter a number to test for perfectness: ";
		cin >> check;
		if (check != 0)
		{
			k = is_perfect(check);
			if (k == true)
				cout << check << " is perfect." << endl;
			else
				cout << check << " is not perfect." << endl;
		}
	}
	return 0;
}
