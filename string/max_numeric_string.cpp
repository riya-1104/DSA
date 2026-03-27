//given a vector of n strings consiting digits. return the max val string & its idx.
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
	vector<string>str={"0123","0023","456","00182","940","290"};
	if(str.size() == 1) {
    cout << stoi(str[0]) << " at index 0";
    return 0;
}
	int maxel=stoi(str[0]);
	int maxidx=0;
	for(int i=1;i<str.size();i++){
		int x=stoi(str[i]);
		if(x>maxel){
		     maxidx=i;
			 maxel=x;	
		}
	}
	cout<<maxel<<" at index "<<maxidx;
}}
