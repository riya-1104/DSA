//take float ip and print fractional part
#include<iostream>
using namespace std;
int main(){
	float x;
	cin>>x;
	int y=(int)x;
	if(x>=0){
	cout<<x-y;
}
    else{
    	int z=y-1;
    	cout<<x-z;
	}
    
}
