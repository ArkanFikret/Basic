#include<iostream>
#include<string>
using namespace std;

void factorial(int number)
{
	int factorial = 1;
	for(int i = 1 ; i <= number ; i++)
	{
		factorial *= i;
	}
	cout << "Factorial: "<<factorial << endl ;
}

int main()
{
	int number;
	cout << "Enter number: ";
	cin >> number;
	
	factorial(number);
}