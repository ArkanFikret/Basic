#include<iostream>
#include<string>
using namespace std;

struct elem 
{
	int key;
	elem *left;
	elem *right;
}*root=NULL;

void add_node(int n, elem *&t)
{
	if(t ==NULL)
	{
		t = new elem;
		t -> key = n;
		t -> left = t -> right = NULL;
	}
	else
	{
		if(n > t -> key)
			add_node(n, t->right);
		else
		if(n < t -> key)
			add_node(n , t-> left);
		else
			cout << "\n Dupeicate:";
	}
}

void preorder(elem *t)
{
	if(t)
	{
		cout << t -> key << "\t";
		preorder(t -> left);
		preorder(t -> right);
	}
}

void inorder(elem *&t)
{
	if(t)
	{
		inorder(t -> left);
		cout << t -> key << "\t";
		inorder(t -> right);
	}
}

void postorder(elem *&t)
{
	if(t)
	{
		postorder(t -> left);
		postorder(t -> right);
		cout << t -> key << "\t";
	}
}

void printnode(int n, int h)
{
	for (int i = 0 ; i < h ; i++)
	{
		cout << "\t";
	}
	cout << n << endl;
}

void show(elem *t, int h)
{
	if(t)
	{
		show(t -> right, h + 1);
		printnode(t -> key , h);
		show(t -> right, h + 1);
	}
}

elem *&srch(int k)
{
	elem **p = &root;
	for(;;)
	{
		if(*p == NULL) return *p;
		if (k < (*p) -> key)
			p = &(*p) -> left;
		else
		if (k > (*p) -> key)
			p = &(*p) -> right;
		else
			return *p;
	}
}

int del(int k)
{
	elem *q, *&p = srch(k),*p0 = p,**qq;
	if(p -> right == NULL)
	{
		p = p -> left;
		delete p0;
	}
	else
	if (p -> left == NULL)
	{
		p = p -> right;
		delete p0;  
	}
	else
	{
		qq = &p -> left;
		while((*qq) -> right)
			qq = &(*qq) ->right;
		p -> key = (*qq) ->key;
		q = *qq;
		*qq = q ->left;
		delete q;
	}
	return 1;
}

int main()
{
	int v;
	do
	{
		cout << "\nElement: ";
		cin >> v;
		if(v)
			add_node(v, root);
	}
	while(v);
		cout << "\n Preorder: ";
		preorder(root);
		cout << "\nInorder: ";
		inorder(root);
		cout << "\nPostorder: ";
		postorder(root);
		cout << endl << "Tree\n";
		show(root, 0);

	cout << "\nDelete: ";
	cin >> v;
	del(v);
	cout << endl;
	show(root , 0);
	system("pause");
}
