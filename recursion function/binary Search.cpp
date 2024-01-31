#include<iostream>
using namespace std;
bool getValue(int *arr,int s,int e,int k){
	if(s>e){
		return 0;
	} 
	
	int mid= s+ (e-s)/2;
	if(arr[mid]==k){
		return 1;
	}
	
	if(arr[mid]<k){
	 bool x= getValue(arr,mid+1,e,k);
	 return x; 
		
	}else{
		bool x= getValue(arr,s,mid-1,k);
		return x;
	
		
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
	int k;
	cin>>k;
	int ans=getValue(arr,0,n-1,k);
	if(ans==1){
		cout<<"GOT IT ";
	}
	else{
		cout<<"NO";
	}
	
	
}