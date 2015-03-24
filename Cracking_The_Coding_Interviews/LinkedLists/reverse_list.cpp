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

//function to reverse the list
void reverse_list(node* head)
{
	node* prev;
	node* current;
	node* temp;
	prev = NULL;
	current = head->next;
	while (current != NULL)
	{
		temp = current->next;
		current->next = prev;
		prev = current;
		current = temp;
	}
	head->next = prev;
}

//creating the list

node* createlist(int arr[], int n)
{
	node* head = new node(0);
	node* start = head;
	for (int i =0 ;i<n;++i)
	{
		node* second = new node (arr[i]);
		start->next = second;
		start = second;
	}
	return head;
}


// printing the list 

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