#include "B.h"
#include <iostream>

using namespace std;

int main()
{
	A a(1);
	B b(2, 3);
	try
	{
		//a = b;
		//a = a;
		//b = b;
		b = a;
		cout << "Continue" << endl;
	}
	catch (A)
	{
		cout << "catch(B)" << endl;
		exit(101);
	}
	cout << "End" << endl;

	return 0;
}