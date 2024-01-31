#include<bits/stdc++.h>
using namespace std;
bool getValue(int arr[],int n){
	if(n==0||n==1){
		return 1;
	}
	
	if(arr[0]>arr[1]){
		return 0;
	}else{
		bool ans=getValue( arr+1,n-1);
		return ans; 
		
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		
	}
	cout<<endl;
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
		
	}
	cout<<endl;
	int ans=getValue(arr,n);
	if(ans==1){
		cout<<"Sorted"<<endl;
	}
	else{
		cout<<"NO NO"<<endl;
	}
	
	
	
}