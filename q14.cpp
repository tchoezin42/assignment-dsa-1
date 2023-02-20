#include<iostream>
using namespace std;
int main()
{
	char a[4],b[4];
	int top1,top2,c,o=1;
	top1=top2=-1;
while(o)
{

	cout<<"enter 1 for enque \n  2 for deque \n 3 for last element in queue \n 4 for traversal in queue \n 5 for front element in queue: ";
	cin>>c;

	
	switch(c)
	{
		case 1:                                   
			if(top1==3)
			{
				cout<<endl<<"queue is queueflow";                      //O(1)
				break;
	    	}
			else
			{
				top1++;
				cout<<endl<<"enter the element: ";                                  //O(1)
				cin>>a[top1];
			}
			break;
			
		case 2:                                  
			if(top1==-1)
			{
				cout<<endl<<"queue is underflow";                                 //O(1)
				break;
			}
			else                                                                   //O(n)
			{   
			    
				for(int k=top1;k>=0;k--)
				{
					top2++;
					b[top2]=a[k];
				    top1--;
				}
				 cout<<endl<<"deleted element :"<<b[top2];
				 top2--;
				for(int l=top2;l>=0;l--)
				{  top1++;
				 	a[top1]=b[l];
				 	top2--;
			    }
		    
			break;	
				
			}
			
		case 3:                                             //O(1)
		      cout<<endl<<"last element of queue is:"<< a[top1];
			  break;	

        case 4:                                  // O(n)
        	 if(top1==-1)
        	 cout<<" queue is underlflow";
        	else
		{
			for(int i=0;i<=top1;i++)
        	{
        		cout<<a[i]<<" ";
			
			} 
		
		}
		break;
	    case 5:                                       // O(1)
	    	if(top1==-1)
	    	cout<<"queue underflow:";
	    	else
	    	cout<<endl<<"front element in queue is: " <<a[0];
	    break; 
	}
	
	cout<<endl<<"if you want to continue enter 1 or else 0:";
	cin>>o;
}
return 0;
}