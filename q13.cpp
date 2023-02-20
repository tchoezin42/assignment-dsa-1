#include<iostream>
using namespace std;


int main()
{
	char c,a[4];
	int i,z=3,d,k,top1,top2;
	top1=-1;
	top2=4;
	
	while(z==3)
	{
	
 cout<<"1 for insert in stack"<<endl<<"2 for delete in stack choose:";
 cin>>k;
 switch(k)
 {
   case 1:
   	
   	  if(top1==top2-1)
	  cout<<endl<<"both stack is full"<<endl;
   	  else
	{
		cout<<endl<<"you want to enter char in stack 1 or stack 2?";
		cin>>i;
		cout<<"enter a char: ";
		cin>>c;
		if(i==1)
		{
			top1++;
 			a[top1]=c;
		}
		else 
		{
			top2--;
			a[top2]=c;
		}
	}
	 
	 
     break;
     
  case 2:
  	cout<<"choose stack 1 or 2 to delete: ";
  	cin>>d;
  	
  	if(d==1)
  	{
  	    if(top1==-1)
  	    cout<<"stack 1 is empty";
  	    else
	   	top1--;
    }
    else 
       if(top2==4)
       cout<<"stack2 is empty ";
	   else
	   top2++;
    break;
	
}
cout<<"if you want to continue enter 3:";
cin>>z;
}


return 0;
}