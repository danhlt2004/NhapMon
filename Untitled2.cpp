#include<iostream>
using namespace std;
int main ()
{
	int n,m;
	int a[n][m];
	cin>>n>>m;
		for ( int i=0; i<n;i++)
			for ( int j=0; i<m;j++)
			{	
			cout<<"nhap i j";
			cin>>a[i][j];
			}
			
	for ( int i=0; i<n;i++)
			for ( int j=0; i<m;j++)
			{
				cout<<a[i][j];
			}
	return 0;
}

