#include<bits/stdc++.h>
using namespace std;
//time complexity = 2ex
//fuction to find nth fibonacci number
int fibonacci(int n){
	if(n<=1)
		return n;
	return fibonacci(n-1)+ fibonacci(n-2);
}

int main(){
	int n;
	cin>>n;
	cout<<fibonacci(n);
}
