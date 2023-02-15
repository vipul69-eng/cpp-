#include<iostream>
using namespace std;
int myVar = 69;

void func()
{
	int myVar = 96;
	cout << "The value at local scope is " << myVar << endl;
	cout << "The value at global scope is " << ::myVar << endl;
}

int main()
{
	func();
	return 0;
}