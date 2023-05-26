#include<iostream>
#include<string>
using namespace std;

struct elem
{
	int key;
	elem *next;
}*l  = NULL , *r = NULL;

void pushl(int n)
{
	elem *p = l ;
	l = new elem ;
	l -> key = n ;
	l -> next = p ;
	if(r == NULL)
		r= l;
}
void pushr(int n)
{
	elem *p = r;
	r = new elem;
	r -> key = n;
	r -> next = NULL;
	if(p)
		p -> next = r;
	else
		l =r;
}
int popl(int &n)
{
	if(l)
	{
		elem *p = l;
		n = l -> key;
		l = l  -> next;
		delete p;
		if(l == NULL)
			r = NULL;
		return 1;
		}
	else
		return 0;
}

int popr(int &n)
{
	if(r)
	{
		n = r -> key;
		elem *p = l;
	
		if(l == r)
		{
			l = r =NULL;
			delete p;
		}
		else
		{
			while(p -> next !=r)
				p = p -> next;
			p -> next = NULL;
			delete r;
			r = p;
		}
		return 1;
	}
	
	else
		return 0;

}
int main ()
{
	int v;
	do
	{
		cin >> v ;
		if(v)
		{
			if(v > 0)
				pushr(v);
			else 
				pushl(v);
		}
	}
	while(v);
	cout<<"\n DEQUE:";
	while(popl(v))
		cout<<v<<"\n";
	while(popr(v))
		cout<<v<<"\n";
	system("pause");
}
