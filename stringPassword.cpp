#include<iostream>
#include<string>
using namespace std;

int main()
{
	string password = "appel" ;
	string input;
	cout << "Enter your password: ";
	cin >> input;
	if(password == input)
	{
		cout << "Laoding... "<<endl;
	}
	else
	{
		cout<<"Wrong... "<<endl;
	}


}