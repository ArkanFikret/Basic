#include<iostream>
#include<string>
using namespace std;

struct elem
{
	int key;
	elem *next;
}
*f = NULL , *l = NULL;
void push(int n)
{
	elem *p = l;
	l = new elem;
	l -> key = n;
	l -> next =NULL;
	if(p)
		p -> next = l;
	else
		f = l;
}
int pop(int &n)
{
	if(f)
	{
		elem *p = f;
		n = f -> key;
		f = f-> next;
		delete p;
		if(f == NULL)
			l = NULL;
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
		cin >> v;
		if(v)push(v);
	}
	while(v);
	cout << "\nPurer: ";
	while(pop(v))
		cout << v << "\t";
}