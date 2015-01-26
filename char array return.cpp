#include <iostream>
#include <string>
#include <cstring>
#include <sstream>
using namespace std;

int histogram(char* message, int* arr);

int main()
{
    const int LEN =100;
    char message[LEN];
    int histogram1[26]={};

    cin.getline(message, LEN);
    histogram(message,histogram1);
    //cout << histogram(message) << endl;

    return 0;
}

int histogram(char* message, int * arr)
{
	for(int i = 0; i < strlen(message); i++){
		 cout<<message[i];
		 if (message[i]>90){
		 	arr[message[i]-97]=arr[message[i]-97]+1;
		 }
		 if (message[i]>64){
		 	arr[message[i]-65]=arr[message[i]-65]+1;
		 }
		
	}
 	cout<<"\n";
    for(int i = 0; i < 26; i++)
    {
        cout<<arr[i];
    }
    //message = hist;
    
}
