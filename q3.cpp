#include<iostream>
#include<string>
using namespace std;
struct link
{   
	struct link *next,*prev;
	string data;
};

int main()
{   int n;
    cout<<"enter how many element you want?";
    cin>>n;
    link *ptr=new link[n];
    link *head=ptr;
    link *l;
    head->prev=NULL;
    
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
	   ptr1->prev=ptr;
       ptr++; ptr1++;
    }
    ptr1--;
	ptr=head;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<"   ";
		ptr=ptr->next;
	}
	cout<<endl;
	ptr=head;
	
	
	
	// assignment

	while(ptr!=ptr1)
	{
	     l=ptr->next;
		 ptr->next=ptr1;
		 ptr1->next=l;
		 l->prev=ptr1;
		 ptr1=ptr1->prev;
		 l->prev->prev=ptr;
		 ptr=l;	
	}
	ptr->next=NULL;
	ptr=head;	
		while(ptr!=NULL)
	{
		cout<<ptr->data<<"   ";
		ptr=ptr->next;
	}
		
	return 0;
}