#include<iostream>
using namespace std;
//fuction print name n times
void print_name(int i, int n){
	if(i>n)
		return ;
	cout<<"Sneha"<<endl;
	print_name(i+1,n);
}

int main(){
	int n;
	cin>>n;
	print_name(1,n);
}

