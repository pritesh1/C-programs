#include <iostream>
#include <string>
#include <cstring>
#include <sstream>
#include <algorithm>
 
using namespace std;

int copy(char * arr, char * arr2);

int modify(int * arr1, int start, int end);

int countodd(int * arr1, int start, int end);

int counteven(int * arr1, int start, int end);

int main(){
	int len;
	cin>>len;
	int i;
	int input[len+2];
	int even;
	int odd;
	
	for (i=0;i<len;i++){
		cin>>input[i];
	}
	modify(input,2 ,3);
	for (i=0;i<len;i++){
	//	cout<<input[i];
	}
	
	even= counteven(input,1 ,6);
	cout<<even;
	odd= countodd(input,1 ,6);
	cout<<odd;
}


int modify(int * arr1, int start, int end){
	int temp;
	temp = arr1[start];
	arr1[start]=arr1[end];
	arr1[end]=temp;
}

int counteven(int * arr1, int start, int end){
	int i;
	int count=0;
	for (i=start-1;i<=end-1;i++){
		if (arr1[i]%2==0){
			count=count+1;
		}	
	}
	return count;
	
}

int countodd(int * arr1, int start, int end){
	int i;
	int count=0;
	for (i=start-1;i<=end-1;i++){
		if (arr1[i]%2==0){
		}	
		else{
			count=count+1;
		}
	}
	return count;
	
}



int copy(char * arr, char * arr2){	
	int i;
	for(i=0;i<strlen(arr);i++){
		//cout<<arr[i];
		arr2[i]=arr[i];
	}
	arr2[strlen(arr)]='\0';
return 0;
}
