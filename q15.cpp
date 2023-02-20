#include<iostream>
using namespace std;
int main()
{
	char a[4],b[4];
	int rear1,front1,rear2,front2,c,o=1;
	rear1=front1=rear2=front2=-1;
while(o)
{

	cout<<"enter 1 for push \n 2 for pop \n 3 for peek of stack \n 4 for traversal : ";
	cin>>c;

	
	switch(c)
	{
		case 1:
			if(rear1==3)
			{
				cout<<endl<<"stack is full";         //O(1)    stack full
				break;
	    	}
	    	else if(rear1==-1 && front1==-1)                     //O(1)    push operation
	    	{
	    		rear1++; front1++;
				cout<<endl<<"enter the element: ";
				cin>>a[rear1];
			break;
			}
			else
			{
				rear1++;
				cout<<endl<<"enter the element: ";              //O(1)
				cin>>a[rear1];
			}
			break;
			
		case 2:
			if(rear1==-1&&front1==-1 || rear1==-1&&front1==0)                         //O(1)          stack empty
			{
				cout<<endl<<"stack is empty";
				break;
			}
			
			else
			{   
			    
	    		rear2++; front2++;
				b[rear2]=a[rear1];
				rear1--;
				for(int k=rear1;k>=0;k--)                                //O(n)          pop operation
				{
					rear2++;
					b[rear2]=a[k];
				    rear1--;
				}
				 cout<<endl<<"deleted element :"<<b[front2];
				 front2++;
				for(int l=rear2;l>=front2;l--)
				{  rear1++;
				 	a[rear1]=b[l];
				 	rear2--;
			    }
			    rear2=front2=-1;
		    
			break;	
				
			}
		case 3:
		    		if(rear1==-1&&front1==-1 || rear1==-1&&front1==0)
			{
				cout<<endl<<"stack is empty";
				break;
			}
			else
			cout<<"peek of stack is: "<<a[rear1];                     // O(1)                 peek of stack
	         break;
		case 4:
	    		if(rear1==-1&&front1==-1 || rear1==-1&&front1==0)
			{
				cout<<endl<<"stack is empty";
				break;
			}
			else                                                                       //          O(n) traversal
			{
				for(int i=0;i<=rear1;i++)
				{
					cout<<a[i]<<" ";
				}
			}
		    break;		
	}
	
	cout<<endl<<"if you want to continue enter 1 or else 0:";
	cin>>o;
}
return 0;
}