#include<iostream>
using namespace std;
int findStairs(int n){
	if(n<0){
		return 0;
	}
	if(n==0){
		return 1;
	}
	
	
	
	int ans=findStairs(n-1) + findStairs(n-2);
	return ans;
}
int main(){
	int n;
	cin>>n;
	cout<<"CLIMBING STAIRS"<<endl;
	int stairs=findStairs(n);
	cout<<"count is  "<<stairs<<endl;
}