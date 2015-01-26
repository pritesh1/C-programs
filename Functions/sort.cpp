#include <iostream>
#include <string>
#include <cstring>
#include <sstream>
#include <algorithm>
 
using namespace std;

int copy(char * arr, char * arr2);


int main(){
	int len, testcases,i,j;
	cin>>len;
	//cin>>testcases;
	
	char input[len+2];
	char input1[len+2];	
	cin>>input;
	
	
	//std::copy(std::begin(input),std::end(input),std::begin(input1) )
 
	int arr[testcases+2][3];
	int charr[testcases+2][3];
	
	
	for (i=0;i<testcases;i++){
		cin>>arr[i][0];
		cin>>arr[i][1];
		cin>>arr[i][2];
	}

copy(input,input1);
cout<<input1<<"\n";

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
