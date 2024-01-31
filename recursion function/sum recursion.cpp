#include<bits/stdc++.h>
using namespace std;

int getValue(int arr[], int n) {
    if (n == 0) {
        return 0;
    }

    
    int ans=arr[0] + getValue(arr + 1, n - 1);
    return ans;
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
	cout<<"Ans is "<< ans<<endl;
	
	
	
}