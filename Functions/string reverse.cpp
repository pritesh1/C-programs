//Detect Pangrams.
//Google.

#include <iostream>
#include <string>
#include <cstring>
#include <sstream>

using namespace std;

int reverse(char rev[]);



//int size(char  arr[]);

int main(){
	int i;
	char input[20];
	cin.getline(input,20);
	reverse(input);
	cout<<"Hello:"<<input;
	//cout<<"\nYe lo:"<<inputa;
}


int  reverse(char rev[]){
	int l= strlen(rev);
	char rev1[20];
	int i;
	char temp;
	for (i=0;i<l/2;i++){
		temp =rev[l-i-1];
		//cout<<temp<<"\n";		
		rev[l-i-1] =rev[i];
		rev[i]= temp;
		//cout<<temp<<"\n";
	}
	
}



