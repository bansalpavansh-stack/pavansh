#include<iostream>
#include<cctype>
using namespace std;

int main()
{
	char ch;
	cout<<"enter letter in uppercase: ";
	cin>>ch;
	
	ch= tolower(ch);
	cout<<"lowercase chracter ="<< ch ;
	return 0;
}
