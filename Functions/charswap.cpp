//Detect Pangrams.
//Google.

#include <iostream>
#include <string>
#include <cstring>
#include <sstream>

using namespace std;

int swap(char rev[],char rev1[],int a , int b);

int swap1(int rev[],int rev1[],int a , int b);


//int size(char  arr[]);

int main(){
	int i;
	char input[20];
	cin.getline(input,20);
	swap(input,input,3,4);
	cout<<"Hello:"<<input;
	//cout<<"\nYe lo:"<<inputa;
}


int swap(char rev[],char rev1[],int a , int b){
		char temp;
		temp =rev[a-1];
		//cout<<temp<<"\n";		
		rev[a-1] =rev1[b-1];
		rev1[b-1]= temp;
}


int swap1(int rev[],int rev1[],int a , int b){
		int temp;
		temp =rev[a-1];
		//cout<<temp<<"\n";		
		rev[a-1] =rev1[b-1];
		rev1[b-1]= temp;
}



