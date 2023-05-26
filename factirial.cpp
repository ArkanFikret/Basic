#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n,i;
	long double factoriel = 1.0;
	
	cout << "N= ";
	cin >> n;
	
	if(n > 0)
	{
			for(int i = 1 ; i <= n ; ++i )
		{
			factoriel *= i;
		}
		cout << "Factoriel N: ";
	}
	else
	{
		cout << "Error...";	
	}
	return 0;
}