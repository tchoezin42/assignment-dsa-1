#include<iostream>
using namespace std;
int main()
{   int n,k,k1,k2;
    cout<<"Enter how many no of char you want? ";
    cin>>n;
	char A[n];
	if(n%2==0)
	{
		k2=n/2+1;
        k1=n/2;
	}
	else
    k=n/2+1;
	
	for(int j=0;j<n;j++)
	{ 
	    if(n%2==0)
	    {
	    	if(j==k1-1 || j==k2-1)
	    	{
	    		cout<<"enter X in"<<j+1<<" char:";
	    		cin>>A[j];
			}
			
			else
	     	{
		    cout<<"enter the "<<j+1<<" char: ";
		    cin>>A[j];
            }
            
		}
	
		else
		{
			if(j==k-1)
			{
				cout<<"enter X in "<<j+1<<" char:";
	    		cin>>A[j];
			}
			
			else
		    {
		    cout<<"enter the "<<j+1<<" char: ";
		    cin>>A[j];
            }
            
		}
		
	cout<<endl;
	}
	int j=0;
	while(j<n)
	{
		cout<<A[j];
		j++;
	}
	cout<<endl;
	
	
	
	// assignment
	  int t=0;
	  int i=n-1;
	 while(A[t]!='X')
	 {
	 	if(A[t]!=A[i])
	 	{
	 		break;
	    }

        t++;i--;
	 }
	  if(A[t]=='X')
	  {
	  	cout<<"pelindrome";
	  }
	  else 
	  cout<<"not a pelindrome";
	
	
	
}