#include<iostream>
#include<string>
using namespace std;

const int N=8;
int h[N][N]={0};
int dx[]={2,1,-1,-2,-2,-1,1,2};
int dy[]={1,2,2,1,-1,-2,-2,-1};
void print_m()
{
	for(int i = 0; i < N; i++)
		{cout<<endl;
		for(int j = 0; j < N; j++)
			cout<<h[i][j]<<" \t ";
		}
}
void next_move(int x,int y,int i)
{
	h[x][y]=i;
	if(i==N*N)
	{
		print_m();
			return;
	}
	for(int k = 0; k < N ; k++)
		{int newx= x + dx[k];
		int newy= y + dy[k];
		if(	newx < N&& 	newy < N&&	newx >= 0&&	newy >= 0&&	h[newx][newy]==0)
		next_move(newx , newy , i+1 );
		}
	h[x][y]=0;
}

int main()
{
	next_move(0,7,1);
	next_move(0,0,1);
	next_move(7,7,1);
	next_move(7,0,1);

	system("pause");
	return 0;
}