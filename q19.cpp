#include<iostream>
#include<string>
using namespace std;
struct link
{   
	struct link *next;
	string data;
};



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
	
	// asignment                   if kis treated as constant and only n as input then time coomplexity = k+n(1/k + 1) which belong to O(n)
	
	ptr=head;
	link *c,*l,*u,*q;
	c=ptr->next;
	l=ptr;
	int w=k;
	while(w>1)
	{
		u=c->next;
		c->next=ptr;
		ptr=c;
		c=u;
	    w--;	
	}
	w=k;
	head=ptr;
	ptr=c; //c=c->next;
	
	
	if(n%k==0)
	{
		l->next=NULL;
	}
	else if(n%k!=0 && n/k>=2)
    {
    	l->next=c;
	}
	else
	l->next=ptr;

    ptr=head;
    cout<<endl;
    while(ptr!=NULL)
	{
		cout<<ptr->data<<"   ";
		ptr=ptr->next;
	}
	
	return 0;
}
	