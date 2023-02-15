#include<iostream>
using namespace std;

class Employee {
private:
	char name[30];
	int age;
	char designation[30];
	double salary;
public:
	void acceptValues()
	{
		cout << "Enter name of the employee :" << endl;
		cin >> name;

		cout << "Enter age of the employee :" << endl;
		cin >> age;

		cout << "Enter designation of the employee :" << endl;
		cin >> designation;

		cout << "Enter salary of the employee :" << endl;
		cin >> salary;
	}
	void printValues()
	{
		cout << "The name of the employee : " << name << endl;
		cout << "The age of the employee : " << age << endl;
		cout << "The designation of the employee : " << designation << endl;
		cout << "The salary of the employee : " << salary << endl;
	}
};
int main()
{
	Employee e[5];
	for (int a = 0; a < 5; a++)
	{
		cout << endl << "Enter employee " << a + 1 << " details" << endl << endl;
		e[a].acceptValues();
	}
	for (int a = 0; a < 5; a++)
	{
		cout << "Employee" << a + 1 << " Details:" << endl;
		e[a].printValues();
	}
	return 0;
}

