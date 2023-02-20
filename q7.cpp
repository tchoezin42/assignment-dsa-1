#include<iostream>
using namespace std;
int main()

{
	int n,m;
	cout<<"enter size of table:";
	cin>>m;
	cout<<"enter no of keys:";
	cin>>n;
	cout<<"expected no of collision is :"<<n-1/m;
	return 0;
}