#include<iostream>
using namespace std;
#include<cmath>

int main()
{
	int marks[5]{};
	int sum = 0;
	cout << "Enter marks of 5 subjects" << endl;
	for (int a = 0; a < 5; ++a)
	{
		cout << "Enter marks for subject " << a + 1 << endl;
		cin >> marks[a];
		sum += marks[a];
	}
	cout << "The average marks of the class are " << sum / 5 << endl;
	return 0;
}