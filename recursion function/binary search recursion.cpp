#include<bits/stdc++.h>
using namespace std;

bool getValue(int arr[], int n,int k) {
	if(n==0)
	    return 0;
	    
	    if(arr[0]==k){
	    	
	    	return 1;
	    	
		}
		else{
			bool x= getValue(arr+1,n-1,k);
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
	int k;
	cin>>k;
	cout<<endl;
	
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
		
	}
	cout<<endl;
	int ans=getValue(arr,n,k);
	if(ans==1){
		cout<<"Got it"<<endl;
	}
	else{
		cout<<"N0";
	}
	
	
	
}