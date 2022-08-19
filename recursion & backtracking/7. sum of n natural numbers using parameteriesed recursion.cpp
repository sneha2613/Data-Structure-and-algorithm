#include<iostream>
using namespace std;

void sumUptoN(int i,int sum){
	if(i<1){
		cout<<sum<<" ";
		return;
	}
	sumUptoN(i-1,sum+i);
}

int main(){
	int n;
	cin>>n;
	sumUptoN(n,0);
}
