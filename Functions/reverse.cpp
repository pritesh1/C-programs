#include <iostream>
#include <cstring>
#include <string.h>

using namespace std;

int reverse(char word[]);

int main()
{
char Cstring[20];
cout<<"enter a word: ";
cin>>Cstring;
string results = reverse(Cstring);
cout <<results;
}

int reverse(char word[])
{
  
   return strlen(word);
  
}
