#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1, str2;
	cout<<"enter first string : ";
    getline(cin, str1);
	
	cout<<"enter second string :";
     getline(cin, str2);
	
	string str = str1 + str2;
	cout<<"concentrated string : "<<str;
	return 0;
}
