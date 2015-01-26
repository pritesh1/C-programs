//Detect Pangrams.
//Google.

#include <iostream>
#include <string>
#include <cstring>
#include <sstream>

using namespace std;

char* histogram(char rev[]);

//int size(char  arr[]);

int main(){
	int i;
	char input[20];
	char k[10];
	cin.getline(input,20);
	k = histogram(input);
	cout<<"Hello:"<<k;
	//cout<<"\nYe lo:"<<inputa;
}


char*  histogram (char rev[]){
	int l= strlen(rev);
	char temp[2]={'i','j'};
/*	for (i=0;i<l/2;i++){
		
	}
	*/
	return temp;
	
	
	}
	
	
	
