#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Enter a number" << endl;
	cin >> n;
	int num_of_digits = floor(log10(n)) + 1;
	int temp = n, a = 0;
	int arr[20]{};
	while (temp > 0)
	{
		int digit = temp % 10;
		if (a == num_of_digits - 1)
		{
			arr[num_of_digits - 1] = digit;
		}
		else if (a == 0)
		{
			arr[0] = digit;
		}
		else {
			arr[num_of_digits - 1 - a] = digit;
		}
		a++;
		temp /= 10;
	}
	int num = 0;
	for (int a = 0; a < num_of_digits; a++)
	{
		num += pow(10, (num_of_digits - a - 1)) * arr[a];
	}
	cout << "The original number is " << n << endl;
	cout << "The manipulated number is " << num;
	return 0;
}
