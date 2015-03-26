/* This program is written to add two linked list where the numbers are 
stored in reverse order and return the sum as form of linked list.*/

#include<iostream>
using namespace std;

class node
{
public:
	int data;
	node* next;
	node(int d):data(d),next(NULL){

	}
};

//creating the list

node* createlist(int arr[] , int n)
{
	node* head = new node (arr[0]);
	node* q = head;
	for (int i =1;i<n;++i)
	{
		node* p = new node(arr[i]);
		q->next = p;
		q = p;
	}

return head;

}

// summing the list
node* sumlist( node* l1, node* l2)
{
	// if the numbers sum more than 9 then we need to have carry as well
	int carry =0 ;
	node *res = NULL;
	node *prev ;
	node *temp = res;
	int sum;

	while (l1 != NULL || l2 != NULL)
	{
	 sum = carry + (l1 ? l1->data : 0) +(l2 ? l2->data : 0);
	 cout<< sum<<endl;

		carry = sum/10;
		sum = sum%10;
		temp = new node(sum);
		if(res == NULL)
			res = temp;
		else
			prev->next = temp;
		prev = temp;
		if (l1) 
			l1 = l1->next;
		if(l2)
			l2 = l2->next;

	}

	if(carry >0)
		temp->next = new node(carry);
	return res;
}


void printList(node* head)
{
if (head==NULL)
	{
		cout << "Empty List" << endl; 
	}
while (head!=NULL)
{
	cout << head->data << " ";
	head = head->next;
}
cout << endl;
}


int main()
{

	int arr1[1] = {0};
	int arr2[2] = {7,3};

	node* l1 = createlist(arr1,1);
	node* l2 = createlist(arr2,2);
	//printList(l1);
	//printList(l2);
	node* l3 = sumlist(l1,l2);
	printList(l3);

	return 0;
}