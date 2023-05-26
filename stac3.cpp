#include<iostream>
#include<string>
using namespace std;

struct elem1
{	
	int key;
	elem1 *next;
	
}*S1 = NULL, *S2 = NULL, *help = NULL;


void push(int n,elem1 *&start)
{
	elem1 *p=start;
	start = new elem1;
	start -> key= n;
	start -> next = p;
}

int pop(int &n,elem1 *&start)
{
	if(start)
	{
		elem1 *p = start;
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
			push(v,S1);
	}
	while(v != 0);
	cout << "\nOriginal stace: ";
		while(pop(v,S1))
		{
			push(v,help);
			cout << v << "\t";
		}
	while(pop (v, help))
		push(v, S2);
	cout << "\nCopy of: "; 
	
		while(pop(v,S2))
			cout << v <<"\t";
	cout << endl;
}
