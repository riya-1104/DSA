#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	stringstream ss(s);
	string temp;
	vector<string>v;
	int i;
	while(ss>>temp){
		v.push_back(temp);
	}
	sort(v.begin(),v.end());
	int count=1;
	int mcount=1;
	if(v.size() == 1) {
    cout << v[0] << " 1";
    return 0;
}
    else{
	for(i=1;i<v.size();i++){
		if(v[i]==v[i-1]) count++;
		else {
			mcount=max(mcount,count);
			count=1;
		}
	}
	mcount=max(mcount,count);
	count =1;
	for(i=1;i<v.size();i++){
		if(v[i]==v[i-1]) count++;
		else{
			if(count==mcount) cout<<v[i-1]<<" "<<mcount<<endl;
			count=1;
		}
	}
	if(count==mcount) cout<<v[i-1]<<" "<<mcount;
}}
