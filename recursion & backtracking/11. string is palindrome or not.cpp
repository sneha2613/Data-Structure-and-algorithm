#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int i, string &s){
	if(i>s.size()/2)
		return true;
	if(s[i]!=s[s.size()-i-1])
		return false;
	isPalindrome(i+1,s);
}
int main(){
	string s;
	cin>>s;
	if(isPalindrome(0,s))
		cout<<"YES";
	else
		cout<<"NO";
}

