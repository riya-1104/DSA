#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	cout<<"enter first string:";
	string s;
	cin>>s;
	cout<<"enter first string:";
	string t;
	cin>>t;
	if(s.length()!=t.length()) cout<<"false";
	else{
	sort(s.begin(),s.end());
	sort(t.begin(),t.end());
	if(s==t) cout<<"true";
	else cout<<"false";
}
}
