#include<bits/stdc++.h>
using namespace std;

void printSubs(int i, int arr[],vector<int> &ds, int n){
	if(i==n){
		for(auto it: ds)
			cout<<it<<" ";
		cout<<endl;
		return;
	}
	
	if(ds.size()==0)
		cout<<"{}";
	ds.push_back(arr[i]);
	printSubs(i+1,arr,ds,n);
	ds.pop_back();
	printSubs(i+1,arr,ds,n);
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	vector<int> ds;
	printSubs(0,arr,ds,n);
}
