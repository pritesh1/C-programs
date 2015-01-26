//Detect Pangrams
#include <iostream>
#include <string>
#include <cstring>
#include <sstream>

using namespace std;

int reverse(char rev[]);

//int size(char  arr[]);


int main(){
	int i;
	char prita[30];
	char prit[20];
	//cin>>prit;
	//cin>>prita;
	cin.getline(prit,20);
	
	
//	reverse(prit);
//	cout<<"Hello:"<<size(prit);
//	i = size(prit);

//reverse(prit);
	cout<<"Hello:"<<prit;
	cout<<"\nYe lo:"<<prita;
}

/*
int size(char arr[]){
	int l=0;
	cout<<arr;
	while(arr[l] != '\0'){
		//cout<<arr[l];
		l++;
	}
	return l;
}
*/





int  reverse(char rev[]){
	int l= strlen(rev);
	int i;
	for (i=0;i<l/2;i++){
		rev[i]=rev[l-i-1];
	}
	
}



