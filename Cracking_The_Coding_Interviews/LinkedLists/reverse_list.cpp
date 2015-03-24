/* This program is written to reverse the single linked list */

#include<iostream>

using namespace std;

class node
{
public:
	int data;
	node* next;
	node(int d): data(d), next(NULL){}
};
 void printlist (node* head)
{
	if (head == NULL)
		cout<<"The list is empty."<<endl;
	while (head)
	{
		cout<<head->data<< " ";
		head = head->next;
	}
	cout<<endl;
}
//function to reverse the list
void reverse_list(node* header)
{
	node* prev;
	node* current;
	node* temp;
	prev = NULL;
	//printlist(header);
	current = header->next;
	while (current != NULL)
	{
		temp = current->next;
		current->next = prev;
		prev = current;
		current = temp;
	}
	header->next = prev;
}

//creating the list

node* createlist(int arr[], int n)
{
	node* head = new node(arr[0]);
	node* start = head;
	for (int i =0 ;i<n;++i)
	{
		node* second = new node (arr[i]);
		start->next = second;
		start = second;
	}
	return head;
}



int main()
{
	int n;
	cin>>n;
	int arr[n];
	for (int i =0;i<n;++i)
		cin>>arr[i];

	node* l1= createlist(arr, n);
	printlist(l1);

	reverse_list(l1);
	printlist(l1);
	return 0;
}