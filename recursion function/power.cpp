#include <bits/stdc++.h>
using namespace std;
int power(int a,int b){
	if(b==0){
		return 1;
	}
	if(b==1){
		return a;
	}
	int ans= power(a,b/2);
	
	if(b%2==0){
		ans=ans*ans;
		return ans;
	}else{
		ans=a*(ans*ans);
		return ans;
	}
	
	
}
int main(){
	int a,b;
	cin>>a>>b;
	int ans=power(a,b);
	cout<<"ANS is   "<<ans<<endl;
}