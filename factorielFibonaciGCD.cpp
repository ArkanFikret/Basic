#include<iostream>
#include<string>
using namespace std;


int fact_i(int n)
{ int fact=1;
	for(int i = 1;i<=n; i++)
		fact *= i;
	return fact ;
}


int fact_r(int n)
{
	if(n==1)
		return 1;
	return n*fact_r(n-1);
}


int fib(int i)
{
	if(i==1)
		return 0;
	if(i==2)
		return 1;
	return fib(i-1)+fib(i-2);
}


int GCD(int m, int n)
{
	if(n==0)
		return m;
	if(n>m)
		return GCD(n,m);
	else 
		return GCD(n,m%n);
}

int b,c;
void prog(int a)
{
	
	if(a + b <= c)
		prog(a + b );
cout<<a<<"\t";

}


void bin(int n)
{
	int s= n / 2;
	int res = n % 2;
	if(s > 0)
		bin(s);
	cout<<res<<" ";
}


int main()
{
	int n;
	int m;
	int a;
	do
	{
		cin>>n;
	}
	
	while(n<=0);

	cout<< "\nn!"<<fact_i(n);
	cout<<"\nn!"<<fact_r(n);

	for(int i=1;i<=n;i++)
		cout<<fib(i)<<"\t";
	do
	{
		cin>>m;
	}
	while(m<=0);
	cout<<"\nGCD(m,n)= ";
	cout<<GCD(m,n);
	do
	{
		cin>> a;
	}
	while(a <= 0);
	do
	{
		cin >> b;
	}
	while(b <= 0);

	do
	{
		cin >> c;
	}
	while(c <a+b);
	prog(a);
		do
	{
		cin>> a;
	}
	while(a <= 0);
	bin(a);
}
