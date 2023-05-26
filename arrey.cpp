#include<iostream>
#include<string>
using namespace std;

void print_arr(int s, int *m)
{
	for(int i = 0 ; i < s ;  i++)
		cout << *(m + i) << "\t";
}

int el_cnt(int s, int m[])
{
	int br = 0; 
	if(*m > *(m + 1))
		br++;
	if(*(m + s - 1) > *(m + s - 2))
		br++;
	for(int i = 1; i < s-1 ; i++)
	{
		if(*(m +i) > *(m + i + 1) && *(m + i) > *(m + i -1))
			br++;
	}
	return br;
}
	 
int main ()
{
	int n, pos = 0;
	
	do
	{ 
		cout << "\n site: ";
		cin >> n;
	}
	while(n <= 1);
	int *a = new int [n];
	int *b = new int [pos];
	int *c = new int [n - pos];
	for(int i =0 ; i < n ; i++)
	{
		cout << "\n ARREY[ "<< i << "]"<< endl;
		cin >> *(a + i);
		if(*(a + i ) > 0)
		pos++;	
	}
	int bi = 0 , ci = 0;
	for(int i = 0 ; i < n ; i++)
	{
		if(*(a + i) > 0)
		{
			*(b + bi) = *(a + i); bi++;
		}
		else
		{
			*(c + ci) = *(a + i); ci++;
		}
	}
	cout << "\n Array: ";
	print_arr(n,a);
	cout << "\n Array positive: ";
	print_arr(pos,b);
	cout << "\n Array negative: ";
	print_arr(n - pos,c);
	cout<<"\n Number of el >  neib.... "<<el_cnt(n,a) << endl;
	 
	
}
/*
const int N = 5; 
int a[N][N] = {0};
int main()
{
for(int i= 0 ; i < N ; i++)
	for(int j = 0; j< N - i; j++ )
			*(*(a + i) +j) = j + 1;
for(int i= 0 ; i < N ; i++)
{   cout<<endl;
	for(int j = 0; j< N ; j++ )
			cout<<*(*(a + i) +j) <<"\t";
}
return 0;
}
*/