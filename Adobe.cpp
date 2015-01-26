// Problem 1 for Adobe competition

#include <iostream>
#include <string>
#include <cstring>
#include <sstream>
#include <algorithm>
#include <cstdarg>
using namespace std;

int copy(char * arr, char * arr2);


int main(){
	int len, testcases,i,j;
	cin>>len;
	cin>>testcases;
	
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
//cout<<input1<<"\n";

char testarray[len+2];

	for (i=0;i<testcases;i++){
		std::sort(input+arr[i][0]-1, input+arr[i][1]);
		//cout<<input<<"\n";
		int m=1;
		for (j=arr[i][0]-1;j<arr[i][1];j++){
			testarray[m] = input[j];
			//cout<<testarray[m];
			m++;
			
		 //cout<<input[j];
		}
		copy(input1,input);
		//cout<<input<<"\n";
		cout<<testarray[arr[i][2]];
		cout<<"\n";
	}



	/*
	for (i=0;i<testcases;i++){
		cout<<arr[i][0];
		cout<<arr[i][1];
		cout<<arr[i][2]<<"\n";
	}
	
	cout<<len<<testcases<<input<<endl;
	
	return 0;
	*/
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
