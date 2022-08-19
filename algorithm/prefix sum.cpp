#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int p[n];
	p[0]=arr[0];
	for(int i=1;i<n;i++)
		p[i]=arr[i]+p[i-1];
	int l,r;
	cin>>l>>r;
	if(l==0)
		cout<<p[r-1];
	else
		cout<<p[r-1]-p[l-2]; 
}
