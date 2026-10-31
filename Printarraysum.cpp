#include<iostream>
using namespace std;
int main()
{
	int a[100],i,n,s=0;
	cout<<"enter size of array : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter element at "<<i+1<<"th position : " ;
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		s = s + a[i];
	}
	cout<<"Array ==> ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<",";
	}
	cout<<"\n";
	cout<<"Sum of elements in the array : "<<s;
	return 0;
}
