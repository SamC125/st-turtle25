#include <iostream>
using namespace std;

int main()
{
	int i;
	for (i = 2; i < 1001; i++)
	{
		double m, n;
		double add(0);
		for (int j = 1; j < i; j++)
		{
			m = i / j;
			n = m*j;
			if (n == i && j != i)
				add = add + j;

		}
		cout << add << endl;

	}
	return 0;
}