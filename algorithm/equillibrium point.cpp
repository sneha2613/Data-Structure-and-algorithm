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
	//code for first equilribriul point
	if(p[0]==p[n-1]-p[0]){
		cout<<p[0];
		return 0;
	}
	for(int i=1;i<n;i++){
		if(p[i-1]==p[n-1]-p[i]){
			cout<<i+1<<" ";
			return 0;
		}
	}
}
