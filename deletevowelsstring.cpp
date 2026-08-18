#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	
	cout<<"Enter string :=";
	getline(cin,str);
	
	cout<<"string after deleting vowels :=";
	for( int i=0; i < str.length(); i++)
	{
		if(str[i] !='a' && str[i] !='e' && str[i] !='o' && str[i] !='u' && str[i] !='a' &&str[i] !='A' && str[i] !='E' &&str[i] !='U' &&str[i] !='I' &&str[i] !='O' )
		{
			cout<<str[i];
		}
	}
	return 0;
}
