#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string str[5];
	
	cout<<"enter 5 strings :=";
	for(int i=0; i<5; i++)
	{
		cin >>str[i];
	}
	sort(str, str+5);
	cout<<"strings in alphabatical order :=";
	for(int i=0; i<5; i++)
	{
		cout<<str[i]<<endl;
		
	}
	return 0;
}
