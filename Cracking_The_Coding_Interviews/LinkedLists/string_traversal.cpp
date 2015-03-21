/* This program is written to find out from kth element till the last element in the single linked list. */

#include<iostream>
#include<string>
#include<cstdio>

using namespace std;

// node dec

class node
{
public:
	int data;
	node* next;

	// constructor
	node( int d):data(d), next(NULL){}
};

void display_from_k(node* head, int k)
{
	node* first = head;
	int count = 0;
	while (first->next)
	{

		count++;
		first = first->next;
		if (count >= k)
		{	
			
			cout<<first->data<<" ";	
			
		}
	}

}


int main()
{
	node* temp = new node(1);
	node * first = temp;
	int k,n;
	cin>>n;
	int arr[n];
	for (int i =0; i<n;++i)
		cin>> arr[i];
	cin >>k;
	for (int i = 0;i <n;++i)
	{
		node* second = new node(arr[i]);
		first->next = second;
		first = second;
	}

	// calling the actual function
	display_from_k(temp->next,k);
	return 0;

}