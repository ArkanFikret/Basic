#include<iostream>
#include<string>
using namespace std;

int mian()
{
	int pwd ;

	do
	{
		cout << "Enter your password: ";
		cin >> pwd ;
	}
	while(pwd != 1234);
	
	cout << "Louding...";
	
	
	return 0;
}