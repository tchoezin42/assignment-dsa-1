

#include <iostream>
using namespace std;
struct Node {
  double data;
  Node *next;
};

int getLength(Node *head) {
  int length = 0;
  Node *current = head;
  while (current) {
    length++;
    current = current->next;
  }
  return length;
}

double nthRoot(double x, int n) {
  double low = 0, high = x, mid;
  while (high - low > 0.0001) {
    mid = (low + high) / 2;
    double midToTheN = 1.0;
    for (int i = 0; i < n; i++) {
      midToTheN *= mid;
    }
    if (midToTheN < x) {
      low = mid;
    } else {
      high = mid;
    }
  }
  return low;
}

void findNthRootOfEachElement(Node *head) {
  int n = getLength(head);
  Node *current = head;
  while (current) {
    current->data = nthRoot(current->data, n);
    current = current->next;
  }
}



int main()
{   int n;
    cout<<"enter how many element you want?";
    cin>>n;

    Node *ptr=new Node[n];
    Node *head=ptr;
    
    for(int i=0;i<n;i++)
	{	     
	cout<<"enter "<<i+1<<" element:";
		cin>>ptr->data;
	ptr++;
	}

	ptr--;
	ptr->next=NULL;
	ptr=head;
    Node *ptr1=++ptr;
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
	cout<<endl;
	 findNthRootOfEachElement(head);
    Node *curr = head;
    while (curr) {
        cout << curr->data << endl;
        curr = curr->next;
    }
    return 0;
}
	