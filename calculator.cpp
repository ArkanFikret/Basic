#include<iostream>
#include<string>
using namespace std;

int main()
{
	int a,b;
	string ishlem;
	
	cout <<"1. + " << endl;
	cout <<"2. - " << endl;
	cout <<"3. * " << endl;
	cout <<"4. / " << endl;
	
	cout << "Enter program" << endl;
	cin >> ishlem;

	if(ishlem == "1")
	{
		cout << "a:";
		cin >> a;
		cout << "b:";
		cin >> b;
		cout << a + b << endl; 
	}
	else if(ishlem == "2")
	{
		cout << "a:";
		cin >> a;
		cout << "b:";
		cin >> b;
		cout << a - b << endl;

	}
	else if(ishlem == "3")
	{
		cout << "a:";
		cin >> a;
		cout<< "b:";
		cin >> b;
		cout << a * b << endl;

	}
	else if(ishlem == "4")
	{
		cout << "a:";
		cin >> a;
		cout << "b:";
		cin >> b;
		cout << a / b <<endl;

	}
	else
	{
	 cout << "Error";
	}
return 0; 
}