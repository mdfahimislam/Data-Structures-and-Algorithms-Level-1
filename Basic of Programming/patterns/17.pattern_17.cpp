#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	for(int i = 1; i <= n/2; i++)
	{
		for(int j = 1; j <= n/2; j++){
			cout << "\t";
		}

		for(int j = 1; j <= i; j++)
		{
			cout << "*\t";
		}

		cout << endl;
	}

	for(int i = 1; i <= n; i++){
		cout << "*\t";
	}
	cout << endl;


	for(int i = n/2; i >= 1; i--)
	{
		for(int j = 1; j <= n/2; j++)
		{
			cout << "\t";
		}

		for(int j = 1; j <= i; j++)
		{
			cout << "*\t";
		}
		cout << endl;
	}

	cout << endl;
}