#include<iostream>
#include<cstdio>


using namespace std;

class node
{
public:
int val;
node* next;
node(int d): val(d), next(NULL){};
};


class solution
{
public:
node* delete_node( node* head)
 {
 	//node* temp = head;
 	if(head == NULL) return NULL;
 	node* prev = head;
 	while (prev->next)
 	{
 		node* temp = prev->next;
 		if (temp->next != NULL)
 		{
 			prev->next = prev->next->next;
 		}
 		else
 		{
 			prev->next = NULL;
 		}
 		delete temp;
 		if(prev->next != NULL) 
 		prev = prev->next;
 	}
 	return head;
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

void printList(node* head)
{
if (head==NULL)
	{
		cout << "Empty List" << endl; 
	}
while (head!=NULL)
{
	cout << head->val<< " ";
	head = head->next;
}
cout << endl;
}


int main()
{
	solution sol;
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i =0;i<n;++i)
	{
		scanf("%d", &arr[i]);
	}

   node* head = createlist(arr,n);
   printList(head);
   node* result =sol.delete_node(head);
   printList(result);
   return 0;

}



 