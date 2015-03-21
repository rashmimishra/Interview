/* This program is written to delete the mid element of the single linked list. */

#include<iostream>

using namespace std;

class node
{
  public:
  	int data;
  	node* next;

  	node(int d):data(d), next(NULL){}
};

void deletemid(node* head)
{
	/* declaring two pointers. the fast pointer will move to 
	two steps and slow pointer will one step. Once the fast 
	pointer will reach the end of the linked list then slow 
	pointer will reach the middle of the linked list*/ 
	node* fast = head;
	node* slow = head;

	if(!fast->next) 
		{
			head = NULL;return;
		}
	while( slow->next && fast->next->next)
	{
		fast = fast->next->next;
		slow = slow->next;

	}
	 // reached the middle now we need to delete the middle element;
	slow->next = slow->next->next;

}


int main()
{
	node* temp = new node(0);
	node* first = temp;
	int n;
	cin>>n;
	int arr[n];
	for (int i =0;i<n;++i)
	{
		cin>>arr[i];
	}
	for (int i =0;i<n;++i)
	{
		node* second = new node(arr[i]);
		first->next = second;
		first = second;
	}

	deletemid(temp->next);

	// printing the element
	node* head = temp->next;
	while(head != NULL)
	{
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
	return 0;
}