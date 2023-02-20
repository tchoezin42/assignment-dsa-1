#include<iostream>
#include<string>
using namespace std;
struct link
{   
	struct link *next;
	string data;
};

string f(link *head,int n)
{
	link *ptr=head;
	while(n>1)                             //time complexity is O(n)
	{
	   ptr=ptr->next;
	   --n;	
	}
	return ptr->data;
}

int main()
{   int n,k;
    cout<<"enter how many element you want?";
    cin>>n;
    cout<<"enter integer constant number k:";
    cin>>k;
    link *ptr=new link[n];
    link *head=ptr;
    
    for(int i=0;i<n;i++)
	{	     
	cout<<"enter "<<i+1<<" element:";
		cin>>ptr->data;
	ptr++;
	}

	ptr--;
	ptr->next=NULL;
	ptr=head;
    link *ptr1=++ptr;
    --ptr;
	
	for(int i=0;i<n-1;i++)
	{
	   ptr->next=ptr1;
       ptr++; ptr1++;
    }
    ptr1--;
	ptr=head;
	
	while(ptr!=NULL)
	{
		cout<<ptr->data<<"   ";
		ptr=ptr->next;
	}

//   assignment


	while(n>0)
	{
		if(n%k==0)                       //O(n)
		{
			cout<<endl<<"modular node of singly link list is: "<<f(head,n);
			break;
		}
			--n;
	}
	return 0;
}
	
	