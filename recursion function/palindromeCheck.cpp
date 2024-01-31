#include<iostream>
using namespace std;
bool getPali(int arr[],int i,int j){
	if(i>j){
		return 1;
	}
	
	if(arr[i]!=arr[j]){
		return 0;
		
	}else{
		bool x= getPali(arr,i+1,j-1);
		return x;
	}
	
}

int main(){
	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Input Array"<<endl;
		for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	cout<<endl;
	cout<<"Pali or Not"<<endl;
	int x= getPali(arr,0,n-1);
	cout<<x;
	if(x==1){
		cout<<"PALI";
	}
	else{
		cout<<"No";
	}

}