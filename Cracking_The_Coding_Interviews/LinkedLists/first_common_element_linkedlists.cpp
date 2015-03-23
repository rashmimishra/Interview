/* This program is written to find the first common node of the two linked lists */

#include<iostream>
#include<cstdio>

using namespace std;

class node
{
public:
	int data;
	node* next;
	int size;
	node(int d): data(d), next(NULL)
	{

	}
};

//creating linked list.

node* createlist(int arr[] , int n)
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

node* first_common_node(node* l1, node* l2, int m, int n)
{
	node* head1 = l1;
	node* head2 = l2;
	if (m >n)
	{
		for (int i =1;i<= m-n;++i)
			{
				head1 = head1->next;
			}
	}
	else
	{
		for (int i =1 ;i<=n-m; ++i)
		{
			head2 = head2->next;
		}

	}
	while (head1 != head2)
	{
		head1= head1->next ;
		head2 = head2->next;
	}
return head1;
}

void printlist(node* head)
{
	if (head == NULL)
		cout<<"List is empty"<<endl;
	while (head)
	{
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}


int main()
{
	/*
	int m,n;
	scanf("%d", &m);
	int arr1[m];
	for (int i =0;i<m;++i)
		scanf("%d", &arr1[i]);
	scanf("%d", &n);
	int arr2[n];
	for (int i =0;i<n;++i)
		scanf("%d", &arr2[i]);
	node* l1 = createlist(arr1,m);
	node* l2 = createlist(arr2,n); 

	node* comm_node = first_common_node(l1,l2,m,n);
	printf("data :%d\n", comm_node->data);*/

	//printing the list first


	node* newnode;
	node* head1 = new node(10);

	node* head2 = new node(3);

	newnode = new node(6);
	head2->next = newnode;
	newnode = new node(9);
	head2->next->next = newnode;

	newnode = new node(15);
	head1->next = newnode;
	head2->next->next->next = newnode;

	newnode = new node(30);
	head1->next->next = newnode;
	head2->next->next->next->next = newnode;

	printlist(head1);
	printlist(head2);

	node* comm_node = first_common_node(head1, head2,3,5);
	printf("data :%d\n", comm_node->data); 
	return 0;
}