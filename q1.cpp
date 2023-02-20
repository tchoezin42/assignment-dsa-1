#include<iostream>
using namespace std;

int main()
{
	int n,top=-1,temp;
	int a1[11];
	int a[]={4,12,5,3,1,2,5,3,1,2,4,6};
	n=11;
	
	
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	// asignment     
	for(int i=n-1;i>=0;i--)       
	{
		 while(top!=-1 && a[i]>=a1[top])
		 {
		 	top--;
		 }
		 temp=a[i];
		  if(top==-1)
		  {
		  	a[i]=-1;
		  }
		  else
		  a[i]=a1[top];
		  top++;
		  a1[top]=temp;
	}
	cout<<endl;
    
    for(int i=0;i<n;i++)
    {
    	cout<<a[i]<<" ";
	}
	return 0;
}
