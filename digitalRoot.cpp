#include<iostream>
using namespace std;

int digital_root(int n)
{
    int sum = 0;
    while(n > 0 || sum > 9)
    {
        if(n == 0)
        {
            n = sum;
            sum = 0;
        }
        sum += n % 10;
        n /= 10;
    }
	return sum;
}
void factorial(int n)
{
	long double factorial = 1.0;
	for(int i = 1 ; i <= n ; i++)
	{
		factorial *= i;
	}
	cout << "N!: " << factorial << endl;
}
int main()
{
    int n;
	cout << "Enter N:";
	cin >> n;
    cout << "DR: "<< digital_root(n) <<endl;
	factorial(n);
}