#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin>>n;
    //Bagian Atas
	for(int i=n;i>0;i--){  
		for(int j=0;j<i-1;j++){ 
			cout<<"   ";
		}
		cout<<"***"; 
		for(int j=0;j+i<n;j++){
			cout<<"      ";
		}
		cout<<"***";
		cout<<endl;
	}
	for(int i=1;i<n;i++){
		if(i<=7){
			cout<<"|  ";
		}
		if(i>7){
			cout<<"***";
		}
		for(int j=1;j<i;j++){
			cout<<"   ";
		}
		cout<<"***";
		for(int j=1;j+i<n;j++){
			cout<<"      ";
		}
		cout<<"***";
		for(int j=1;j<i;j++){
			cout<<"   ";
		}
		if(i<=7){
			cout<<"  |";
		}
		if(i>7){
			cout<<"***";
		}
		cout<<endl;
	}
	if(n<8){
		for(int i=n;i<8;i++){
			cout<<"|  ";
			for(int j=0;j<n-2;j++){
				cout<<"   ";
			}
			cout<<"  ||  ";
			for(int j=0;j<n-2;j++){
				cout<<"   ";
			}
			cout<<"  |";
			cout<<endl;
		}
	}
    //tutup bagian bawah
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			cout<<"   ";
		}
		cout<<"***";
		for(int j=1;j+i<n-1;j++){
			cout<<"   ";
		}
		if(i<n-1){
			cout<<"  ||  ";
		}
		for(int j=1;j+i<n-1;j++){
			cout<<"   ";
		}
		cout<<"***";
		for(int j=1;j<i;j++){
			cout<<"   ";
		}
		cout<<endl;
        
	}
}
