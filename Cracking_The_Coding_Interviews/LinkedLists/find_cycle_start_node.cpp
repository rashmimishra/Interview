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

node* cycle_node(node* head)
{
	node* fast = head;
	node* slow = head;
	do 
	{
		slow = slow->next;
		if(fast == NULL || fast->next == NULL)  return NULL;
		fast = fast->next->next;

	} while (slow != fast);

	slow = head;
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}


return slow;
}

node* createlist(int arr[], int n)
{
	node* head = new node(arr[0]);
	node* first = head;
	for (int i =1;i<n;++i)
	{
		node* second = new node(arr[i]);
		first->next = second;
		first = second;
	}
	return head;

}
/*
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
}*/



int main()
{

  int n;
	cin>>n;
	int arr[n];
	for (int i=0;i<n;++i)
		cin>>arr[i];
	node* l1= createlist(arr,n);
	//creating the loop
	l1->next->next = l1->next;
	node* cyclenode = cycle_node(l1);
	cout<<cyclenode->data<<endl;


	return 0;
}

