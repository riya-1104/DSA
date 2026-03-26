//to count the no of vowels in a string
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
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'
		||s[i]=='I'||s[i]=='O'||s[i]=='U'){
			count++;
		}
		i++;
	}
	cout<<"no of vowels in "<<s<<" is: "<<count;
}
