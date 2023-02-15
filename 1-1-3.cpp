#include<iostream>
using namespace std;
#include<cmath>

int fibb(int n)
{
	if (n >= 1)
	{
		return fibb(n - 1) + fibb(n - 2);
	}
	else {
		return 1;
	}
}

int main()
{
	int first = 0;
	int second = 1;
	int terms;
	cout << "Enter number of terms of fibbonacci" << endl;
	cin >> terms;
	int a = 0;
	int fibbTerms[30]{};
	int ctr = 2;
	fibbTerms[0] = 0;
	fibbTerms[1] = 1;
	int missing[30]{};
	int ctr1 = 0;
	cout << "The terms of fibbonacci are:" << endl;
	cout << first << endl;
	cout << second << endl;
	if (terms >= 3) {
		for (int a = 0; a < terms; a++)
		{
			int r = fibb(a);
			cout << r << endl;
			if (r - fibb(a - 1) > 1)
			{
				for (int x = fibb(a - 1) + 1; x < r; x++)
				{
					missing[ctr1] = x;
					ctr1++;
				}
			}
			ctr++;
		}
		cout << "The missing terms of fibbonacci are:" << endl;
		for (int a = 0; a < 30; a++)
		{
			if (missing[a] != 0)
			{
				cout << missing[a] << endl;
			}
		}
	}


	else {
		cout << "List length is too small" << endl;
	}
	return 0;
}