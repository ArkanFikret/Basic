#include<iostream>
#include<string>
using namespace std;

struct elem 
{
	int key;
	elem *next;
}
*S1 = NULL, *S2 = NULL ,*help = NULL;

void push(int n, elem *&start)
{
	elem *p = start;
	start = new elem;
	start -> key = n;
	start -> next = p;
}
int pop(int &n, elem *&start)
{
	if(start)
	{
		elem *p = start;
		n = start -> key;
		start = start -> next;
		delete p ;
		return 1;
	}
	else
		return 0;
}
int main()
{
	int v;
	do 
	{
		cout << "\nValue: ";
		cin >> v ;
		if(v > 0)
			push(v,S1);
	}
		
	while(v != 0);
	cout <<"\nOrginal stace: ";
	while(pop(v, S1))
	{
		push(v, help);
		cout << v << "\t";
	}
	while(pop(v, help))
		push(v , S2);
	cout << "\nCopy of: ";
	while(pop(v,S2))
		cout << v << "\t";
	cout << endl;

}