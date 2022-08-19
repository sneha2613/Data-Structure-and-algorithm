#include<iostream>
using namespace std;

void printNto1(int i, int n){
	if(i<1)
		return ;
	cout<<i<<" ";
	printNto1(i-1,n);
}

int main(){
	int n;
	cin>>n;
	printNto1(n,n);
}
