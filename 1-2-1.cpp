#include<iostream>
using namespace std;

int main()
{
	int matrix[30][30]{};
	int m, n;
	cout << "Enter values of m and n" << endl;
	cin >> m;
	cin >> n;
	cout << "Enter elements in the matrix" << endl;
	for (int a = 0; a < m; a++)
	{
		cout << "Elements of row " << a << endl;
		for (int b = 0; b < n; b++) {
			cout << "Element " << b << endl;
			cin >> matrix[a][b];
		}
	}
	int lower_bound_row = 0, lower_bound_coloumn = 0, base_address;
	cout << "Enter the base address";
	cin >> base_address;
	int storage_size;
	cout << "Enter storage size of each element" << endl;
	cin >> storage_size;
	if (base_address == 1000) {
		int address = base_address + storage_size * (((m - 1) - lower_bound_row) * n + ((n - 1) - lower_bound_coloumn));
		cout << "Address is " << address << endl;
	}
	return 0;
}