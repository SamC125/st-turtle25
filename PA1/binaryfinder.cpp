#include <iostream>
using namespace std;

int main()
{
	int test, seq;
	cin >> test >> seq;

	int testlist[100000];
	int seqlist[100000];
	if (test > 0)
	{
		if (seq > 0)
		{
			int chop = seq;
			int d = 1;
			while (chop != 0)
			{
				int digit = chop % 10;
				if (digit != 1 && digit != 0)
				{
					chop = 0;
					d = 0;
					cout << "Sequence must be binary." << endl;
				}
				chop = chop / 10;
			}
			if (d == 1)
			{
				//this is where i start looking for the sequence

				int chop2 = test;
				int counter1 = 0;
				int digit2;
				while (chop2 != 0) // here i throw the test into an array
				{
					digit2 = chop2 % 2;
					testlist[counter1] = digit2;
					chop2 = chop2 / 2;
					counter1 = counter1 + 1;
				}

				counter1 = counter1 - 1;

				int chop3 = seq;
				int counter2 = 0;
				int digit3;

				while (chop3 != 0) 
				{
					digit3 = chop3 % 10;
					seqlist[counter2] = digit3;
					chop3 = chop3 / 10;
					counter2 = counter2 + 1;
				}
				
				counter2 = counter2 - 1;

				int counter4 = 0;
				int check1 = 1;
				int check2 = 1;

				while (counter4 < counter1 + 1 && check1 == 1)
				{
					int counter3(0);
					int q(1);
					int tap = counter4;
					while (counter3 < counter2 + 1 && q == 1)
					{
						if (testlist[tap] != seqlist[counter3])
							q = 0;
						else if (counter3 == counter2)
						{
							cout << "Sequence " << seq << " " << "occurs in " << test << "." << endl;
							check2 = 2;
							q = 0;
						}
						else
						{
							counter3 = counter3 + 1;
							tap = tap + 1;
						}
					}
					if (check2 == 2)
						check1 = 2;
					else if (counter4 == counter1)
					{
						cout << "Sequence " << seq << " does not occur in " << test << "." << endl;
						check1 = 3;
					}
					else
					{
						counter4 = counter4 + 1;
					}
				}
				system("pause");
			}

		}
		else
		{
			if (seq < 0 || seq == 0)
				cout << "Sequence must be positive" << endl;
			int chop = seq;
			while (chop != 0)
			{
				int digit = chop % 10;
				if (digit != 1 && digit != 0)
				{
					chop = 0;
					cout << "Sequence must be binary." << endl;
				}
				chop = chop / 10;
			}
		}
	}
	else 
	{
		cout << "Number must be positive." << endl;
		if (seq < 0 || seq == 0)
			cout << "Sequence must be positive" << endl;
		int chop = seq;
		while (chop != 0)
		{
			int digit = chop % 10;
			if (digit != 1 && digit != 0)
			{
				chop = 0;
				cout << "Sequence must be binary." << endl;
			}
			chop = chop / 10;
		}
	}
		
	system("pause");
	return 0;
}