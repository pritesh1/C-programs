//Detect Pangrams.

#include <iostream>
#include <string>
#include <cstring>
#include <sstream>

using namespace std;


int min(int rev[],int a, int b);


//int size(char  arr[]);

int main(){
	int i,a;
	int input[20];
	for (i=0;i<5;i++){
		cin>>input[i];
	}
	a=min(input,1,5);
	
	cout<<"Ye lo:"<<a;
}




int min(int rev[],int a, int b){
	int temp=100000;
	int i;
	for(i=a-1;i<b;i++){
		if (rev[i]<temp){
			temp = rev[i];
		}	
	}
	return temp;
}



