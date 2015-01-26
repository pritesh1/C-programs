//HelpAshu code for adobe competition

#include <iostream>
#include <string>
#include <cstring>
#include <sstream>
#include <algorithm>
 
using namespace std;

long long modify(long long * arr1, long long start, long long end);

long long countodd(long long * arr1, long long start, long long end);

long long counteven(long long * arr1, long long start, long long end);

int main(){
	long long len;
	cin>>len;
	long long i;
	long long input[len+2];
	
	for (i=0;i<len;i++){
		cin>>input[i];
	}
	//cin>>input;
	
	long long testcase;
	cin>>testcase;
	
	long long arr[testcase+2][3];
	
	
	for (i=0;i<testcase;i++){
		cin>>arr[i][0];
		cin>>arr[i][1];
		cin>>arr[i][2];
	}
		
	
	for (i=0;i<testcase;i++){
		if (arr[i][0]==0){
			modify(input,arr[i][1],arr[i][2]);
		}
		else if (arr[i][0]==2){
			cout<<countodd(input,arr[i][1],arr[i][2])<<endl;
		}
		else if (arr[i][0]==1){
			cout<<counteven(input,arr[i][1],arr[i][2])<<endl;
		}
		
	}
	
	
}

long long counteven(long long * arr1, long long start, long long end){
	long long i;
	long long count=0;
	for (i=start-1;i<=end-1;i++){
		if (arr1[i]%2==0){
			count=count+1;
		}	
	}
	return count;
	
}

long long countodd(long long * arr1, long long start, long long end){
	long long i;
	long long count=0;
	for (i=start-1;i<=end-1;i++){
		if (arr1[i]%2==0){
		}	
		else{
			count=count+1;
		}
	}
	return count;
	
}

long long modify(long long * arr1, long long start, long long end){
	long long temp;
	temp = arr1[start];
	arr1[end]=arr1[start];
	//arr1[end]=temp
}




