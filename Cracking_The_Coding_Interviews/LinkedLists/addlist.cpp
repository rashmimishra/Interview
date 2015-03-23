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
	node* p = l1;
	node* q = l2;
	while (p && q)
	{
		int s = p->data+q->data+carry;
		carry = s/10;
		p->data = s%10;
		q->data = s%10;
	
		if (p->next && q->next) 
		{
			p = p->next;
			q = q->next;

		}
		
		else
			break;
	}
	if (carry>0 && (p->next == NULL && q->next == NULL))

		p->next = new node(carry);


	// since both the list can of of different sizes hence we need this code;
	// list 1 is over
	if(p == NULL)
	{
		while(q->next && carry >0)
		{
			q->data = q->data+carry;
			carry = q->data/10;
			q->data = q->data%10;
			q = q->next;
		}
		//only carry is left;
		if(carry >0)
		{
			q->data = q->data+carry;
			if(q->data >= 10)
			{
				//need to create another node to accomodate the other digit 
				q->next = new node(q->data/10);
				q->data = q->data%10;
			}

		}
		return l2;
	}

	// list 2 is over

	if( q == NULL)
	{
		while (p->next && carry >0)
		{
			p->data = p->data+carry;
			carry = p->data/10;
			p->data = p->data%10;
			p = p->next;
		}
		if(carry >0)
		{
			p->data = p->data+carry;
			if(p->data >= 10)
			{
				p->next = new node(p->data/10);
				p->data = p->data%10;
			}
		}
		return l1;
	}

 return l1;
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

	int arr1[4] = {2,6,5,4};
	int arr2[3] = {8,1,2};

	node* l1 = createlist(arr1,4);
	node* l2 = createlist(arr2,3);

	node* l3 = sumlist(l1,l2);
	printList(l3);

	return 0;
}