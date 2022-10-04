#include<iostream>
using namespace std;

int main(){
	
	int temp;
	cin>>temp;
	
	while(temp-->0){
		int a,b,c,d=0;
		cin>>a>>b>>c;
		
		int check=0;
		if(a!=b) d=c; // big mistake... Merge this otherwise code will give logical error
		else d=b;
		cout<<d<<endl;
	}
	return 0;
}
