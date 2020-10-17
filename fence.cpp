#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	
	while(t-->0){
		int a,b,c,d=0;
		cin>>a>>b>>c;
		
		int check=0;
		if(a==b) d=c;
		else d=b;
		cout<<d<<endl;
	}
	return 0;
}
