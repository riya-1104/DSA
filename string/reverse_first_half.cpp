//ip a string of even length & reverse the first half of string
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	cout<<"enter a string of even length:";
	string s;
	getline(cin,s);
	int n=s.length();
	if(n % 2 != 0){
    cout<<"Please enter even length string";
    return 0;
}
    else{
	cout<<"before reverse string is: "<<s<<endl;
	reverse(s.begin(),s.begin()+(n/2));
	cout<<"after reverse string is: "<<s;
  }
}
