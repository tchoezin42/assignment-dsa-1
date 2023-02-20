#include<iostream>
#include<string>
using namespace std;
struct link
{   
	struct link *next;
	string data;
};



//  assignments 

string check(link *head)
{
	
link *p=head;

while(p->next!=NULL && p->next!=head){                     // O(n-1) 
 	
 	p=p->next;
 }
 if(p->next==NULL)
 {
 	return "terminated at NULL";
 }
 else
 return "cyclic";

}


int main()
{   int n,k;
    cout<<"enter how many element you want?";
    cin>>n;
    cout<<"enter 1 for null terminated link list and 2 for circlar link list:";
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
	if(k==1)
	ptr->next=NULL;
	else
	ptr->next=head;
	ptr=head;
    link *ptr1=++ptr;
    --ptr;
	
	for(int i=0;i<n-1;i++)
	{
	   ptr->next=ptr1;
       ptr++; ptr1++;
    }
	ptr=head;
	
cout<<"fh";
		while(ptr!=NULL)
	{
		cout<<ptr->data<<"   ";
		if(ptr->next==head)
		break;
		
		ptr=ptr->next;
	}
    cout<<endl<<"link list is :"<<check(head);
 return 0;
}