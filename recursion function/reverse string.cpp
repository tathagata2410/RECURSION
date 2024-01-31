#include<bits/stdc++.h>
using namespace std;
void getReverse(char arr[],int i,int j){
	cout<<arr<<endl;
	if(i>=j){
		return ;
	}
	
	swap(arr[i],arr[j]);
	
	getReverse( arr, i+1, j-1);
	

}

int main(){
	int n;
	cin>>n;
	char arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
     getReverse(arr,0,n-1);
     cout<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}

}