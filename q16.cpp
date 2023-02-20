#include<iostream>
using namespace std;
int main()
{
	int top,n;
	int j=0;
	top=-1;
    cout<<"how many element you want to enter?";
    cin>>n;
    int a[n];    

            
	    	while(top<n-1)
	   		{
				top++;
				cout<<endl<<"enter the element: ";
				cin>>a[top];
	    	}
	    	
		 cout<<"elements in stack are: ";
		 for(int i=0;i<=top;i++)
		 {
		 	cout<<"  "<<a[i];
		 }
		
		
		for(int p=0;p<n-1;p+=2)
		{
		     if ((a[p]-a[p+1])==1 || (a[p]-a[p+1])==-1)
			 {
			 	++j;
			 } 	
			else
			{
			cout<<endl<<"("<<a[p]<<","<<a[p+1]<<")"<<" is not consecutive";	  
		    }
		}
		
		if(j==n/2)
		{ 
		  cout<<endl<<"true";
		}
return 0;
}