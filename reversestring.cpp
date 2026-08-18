#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	
	cout<<"enter string first :";
	getline(cin, str);
	
	cout<<" Reverse string is :=";
	for(int i=str.length()-1;i>0;i--)
	{
		cout<<str[i];
	}
	return 0;
	
}
