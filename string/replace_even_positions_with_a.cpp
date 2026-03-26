//update all even position to 'a'
#include<iostream>
#include<string>
using namespace std;
int main(){
	cout<<"enter the string:";
	string s;
	getline(cin,s);
	int i=0;
	int count=0;
	while(i<s.length()){
		if(i%2==0)s[i]='a';
		i++;
	}
	cout<<s;
}
