/* This code is written to implement deletion of duplicates in single linked list */

#include<iostream>
#include<string>
using namespace std;

class node
{
public:
	int data;
	node* next;
	//constructor
	node(int d) : data(d), next(NULL){}
};
	// member function for deletion 
void delete_duplicate (node* head)
{
	/*delcaring two variable and assign the head to it for comparision 
		for removing duplicates */
	node* first = head;
	node* second = head;
	if(head == NULL) cout <<"LIST is empty"<<endl;
	//running the loop till all elements are covered 
	while (first->next){
		bool temp = true;

		while (second != first->next){
			if(first->next->data == second->data){
				first->next = first->next->next;
					temp = false;
				break;
			}

			second = second->next;
		}
		if(temp){first = first->next;}				
			second = head;
	}
}


//main method 

int main()
{
	node* head = new node(1);
	node*  first = head;
	int n;
	cin >>n;
	int arr[n];
	for (int i =0;i<n;++i)
     cin>>arr[i];
 	for (int i =0;i<n;++i)
 	{
 		node* second = new node(arr[i]);
 		first->next = second;
 		first = second;
 	}
 	// calling method to remove duplicates

 	delete_duplicate(head);
 	if(head == NULL)
 	{
 		cout<<"The list is empty"<<endl;
 		return 0;
 	}
 	
 	while (head != NULL)
 	{
 		cout<<head->data<<" ";
 		head = head->next;
 	}
 	cout<< endl;

 	return 0;


}