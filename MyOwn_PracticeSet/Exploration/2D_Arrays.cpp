#include<iostream>
using namespace std;
int main(){
	int k=10;
	int arr[5][2];
	for(int i=0;i<5;i++){
		for(int j=0; j<2; j++){
			arr[i][j]= k;
			k+=10;
		}
	}
	for(int i=0;i<5;i++){
	    cout<<"{";
		for(int j=0; j<2; j++){
		    if(j<2-1){
			    cout<<arr[i][j]<<",";
		    }
			else{
			    cout<<arr[i][j];
			}
		}
		cout<<"} ";
	}
	
	return 0;
}
