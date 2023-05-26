#include<iostream>
#include<string>
using namespace std;

int main()
{ 
	int work;
	cout << "Wath is work: ";
	cin >> work;
	switch(work)
	{
		case 1:
			cout << "First work" << endl;
			break;
		case 2 :
			cout << "Secont work" << endl;
			break;
		case 3:
			cout << "Therth work" << endl;
			break;
		case 4:
			cout << "Fouret work" << endl ;
			break;
		default:
			cout << "Error" << endl;
			break;
	}
}