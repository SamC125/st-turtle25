#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double mylist[10000];
	mylist[0] = 1;
	for (int i = 1; i < 10000; i++)
	{
		int counter2 = 1;
		int check2 = 1;
		while (check2 == 1)
		{
			int inner1 = mylist[i - 1] + counter2; //number being tested
			int digit;
			double check(1);
			int add = 0;
			int inner2 = inner1;
			while (check == 1) //checking number
			{
				digit = inner2 % 10;
				inner2 = inner2 / 10;
				add = add + pow(digit, 2);
				if (inner2 == 0) // when done separating digits
				{
					if (add == 4 || add == 16 || add == 37 || add == 58 || add == 89 || add == 145 || add == 42 || add == 20)
					{
						check = 2;
					}
					else if (add == 1) // check for happy
					{
						check = 3;
						mylist[i] = inner1;
					}
					else
					{
						inner2 = add;
						add = 0;
					}
				}
			}
			if (check == 3)
				check2 = 2;
			else if (check == 2)
				counter2 = counter2 + 1;
		}
		
	}
	//printing out the numbers

	int check;
	for (int i = 0; i < 1000; i++)
	{
		check = i * 10;
	
		//printing numbers in a line
		cout << mylist[check] << " " << mylist[check + 1] << " " << mylist[check + 2] << " " << mylist[check + 3] << " " << mylist[check + 4] << " " << mylist[check + 5] << " " << mylist[check + 6] << " " << mylist[check + 7] << " " << mylist[check + 8] << " " << mylist[check + 9] << " " << endl;
	
	}
	system("pause");
	return 0;

}