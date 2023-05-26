#include<iostream>
#include<string>
using namespace std;

int max_i(int n, int a[])
{
	int m=a[0];
	for(int i=1; i<n ; i++)
		if(m<a[i])
			m=a[i];
		return m;
}
int max_r(int l, int r , int a[])
{
	if(l ==r)
		return a[l];
	int m = (l+r)/2;
	int u = max_r(l,m,a);
	int v =max_r(m+1,r,a);
	if(u>v)
		return u;
	else return v;
}
int main()
{
	const int N=10;
	int n,b[N];
	do
	{
		cout<<"n:\n";
		cin>> n;
	}
	while(n<=1||n>N);
	for(int i =0;i < n ;i++)
	{
		cout <<"\n mas["<<i<<"]=";
		cin>>b[i];
	}
	cout<<"Max= \n";
	cout<<max_i(n,b);


	cout<<"\nMax=";
	cout<<max_r(0,n-1,b);
}