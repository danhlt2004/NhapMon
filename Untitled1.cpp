#include<iostream>
#include<cmath>
using namespace std;
void nhap(int a[][100],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
}
void xuat(int a[][100],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<a[i][j];
		}
		cout<<"\n";
	}
}
bool SHH(int k){
	int sum=0;
	for(int i=1;i<=k/2;i++){
		if(k%i==0){
			sum = sum + i;
		}
	}
	if(sum==k){
		return true;
	}else 
	return false;
}
void inSHH(int a[][100],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(SHH(a[i][j])==true){
				cout<<a[i][j]<<" ";
			}
		}
	}
}
int main(){
int a[100][100],n,m;
cin>>n>>m;
nhap(a,n,m);
xuat(a,n,m);
inSHH(a,n,m);
	return 0;
}
