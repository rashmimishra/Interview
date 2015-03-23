/* This program is written to find the out the node where the cycle 
starts in the linked lists */

#include<iostream>
#include<cstdio>

using namespace std;

class node
{

  public:
  int data;
  node* next;

  node(int d) :data(d), next(NULL){}
};

bool removecycle(node* head)
{
	node* fast = head;
	node* slow = head;
	do 
	{
		slow = slow->next;
		if(fast == NULL || fast->next == NULL)  return false;
		fast = fast->next->next;

	} while (slow != fast);

	// loop found now need to remove the loop

	node* prev = slow;
	node* slow1 = head;
	while (slow1 != slow)
	{
		prev = slow;
		slow = slow->next;
		slow1->next =slow1->next;
		
	}
	prev->next = NULL;
	return true;
}

node* createlist(int arr[], int n)
{
	node* head = new node(0);
	node* first = head;
	for (int i =0;i<n;++i)
	{
		node* second = new node(arr[i]);
		first->next = second;
		first = second;
	}
	return head->next;

}

void printlist(node* head)
{
	if(head == NULL)
		cout<<"Empty List";
	while(head != NULL)
	{
		cout<<head->data<<" ";
		head= head->next;

	}
	cout<<endl;
}



int main()
{

  int n;
	cin>>n;
	int arr[n];
	for (int i=0;i<n;++i)
		cin>>arr[i];
	node* l1= createlist(arr,n);
	//creating the loop
	l1->next->next->next->next->next = l1->next->next;
	bool temp = removecycle(l1);
	cout<<temp<<endl;
	printlist(l1);

	return 0;
}

