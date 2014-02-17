#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int test;
	cout << "Enter the number to test for palindromicity: ";
	cin >> test;
	
	//i is the base being checked
	for (int i = 2; i < test; i++)
	{
		double mylist[10000];
		int digit, storage;
		storage = test;
		int counter1;
		counter1 = 0;

		//convert to base i
		while (storage != 0)
		{
			digit = storage % i;
			storage = storage / i;
			mylist[counter1] = digit;
			if (storage != 0)
				counter1 = counter1 + 1;
		}
		counter1 = counter1 + 1;
		
		//i now have mylist. Test for palindromicity
		
		int hell = 1;
		int counter2 = 0;
		int check;

		check = counter1 / 2;
		while (hell == 1 && counter2 < check)
		{
			if (mylist[counter2] == mylist[counter1 - counter2 - 1])
			{
				if (counter2 == check - 1)
				{
					cout << i << endl;
					hell = 0;
				}
				else
				{
					hell = 1;
					counter2 = counter2 + 1;
				}
			}
			else
				hell = 0;
		}
	}

	return 0;
}