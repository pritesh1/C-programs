//Detect Pangrams.

#include <iostream>
#include <string>
#include <cstring>
#include <sstream>

using namespace std;


int max(int rev[],int a, int b);


//int size(char  arr[]);

int main(){
	int i,a;
	int input[20];
	for (i=0;i<5;i++){
		cin>>input[i];
	}
	a=max(input,1,5);
	
	cout<<"Ye lo:"<<a;
}




int max(int rev[],int a, int b){
	int temp=0;
	int i;
	for(i=a-1;i<b;i++){
		if (rev[i]>temp){
			temp = rev[i];
		}	
	}
	return temp;
}



