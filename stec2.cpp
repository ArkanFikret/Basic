#include<iostream>
#include<string>
using namespace std;


struct elem
{	
	int key;
	elem *next;
	
}*pos = NULL,*neg = NULL;

void push(int n,elem *&start)
{
	elem *p=start;
	start = new elem;
	start -> key= n;
	start -> next = p;
}

int pop(int &n,elem *&start)
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
		cout << "\n Value: ";
		cin >> v;
		if(v > 0)
			push(v,pos);
		if(v < 0)
			push (v,neg);
	}
	while(v != 0);
	cout << "positiv Stack is: \n";
	while(pop(v,pos))
		cout << v << "\t";
	cout << "\nnegativ Stack is: \n";
	while(pop(v,neg))
		cout << v << "\t";
	cout << endl;
	
}
