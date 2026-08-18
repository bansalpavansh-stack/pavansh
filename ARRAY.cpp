#include<stdio.h>
using namespace std;

int main()
{
	whlile (1)
	int a=[100], n=0, i, pos, item, i, key;

{

	cout<<"/n1.Create";
	cout<<"/n2.Display";
	cout<<"/n3.Insert";
	cout<<"/n4.delete";
	cout<<"/n5.linear search";
	cout<<"/n6.exit";
	cin>>choice;
	
	switch(choice)
	
	case 1:
		cout<<"enter size";
		cin>>n;
		cout<<"enter elements :\n";
		for(i=0;i<n;i++)
		cin>>a[i];
		
		break;
	
	case 2:
	    cout<<"array";
		for(i=0; i<n;i++)
		cout<<a[i]<<"";
		
		
		break;
		
	case 3:
	    cout<<"enter position";
		cin>>pos;
		cout<<"enter elements";
		cin>>item;
		for(i=n; i>=pos; i--)
		a[i]=a[i-1];
		
		a[pos-1]=item;
		n++;
		
		
		
		break;
		
	case 4:
	    cout<<"enter position";
		cin>>pos
		
		for(i=pos-1; i<n-1; i++)
		a[i]=a[i+1];
		
		n--;
		
		break;
		
	case 5:
	    cout<<"enter element :";
		cin>>key;
		for(i=0;i<n; i++;)
		{
			if(a[i]==key)
			{
				cout<<"found at position";
				
				
				
				break;
				
			}
		}
		{
			if(i==n)
			cout<<"not found";
			
			break;
			
			case 6:
				
			return 0;
		}
			
}
		
}
