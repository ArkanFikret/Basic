#include<iostream>
#include<string>
using namespace std;

int main()
{
	string sys_username = "User02";
	string sys_password = "025004";

	string username;
	string password;

	while(true)
	{
		cout <<"Ussername: " << endl;
		cin >> username;
		cout << "Password: " << endl;
		cin >> password;
		
		if(username == sys_username && password == sys_password)
		{
			cout << "Welcom "<< username <<endl;
			break;
		}
		else if(username != sys_username && password == sys_password)
		{
			cout << "Username Error" << endl;
		}
		else if(username == sys_username && password != sys_password)
		{
			cout << "Password error" << endl;
		}
		else
		{
			cout << "username and password error" <<endl;
		}
	}
}