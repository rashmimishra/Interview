/* This program is written to find out if the linked list is 
palindrome or not. This program will use stack hence the space  
complexity of this program is O(n) and time complexity of this 
program is also O(n)*/

#include<iostream>
#include<stack> 
using namespace std;

class node
{
public:
	char s;
	node* next;

	node(char t): s(t),next(NULL){}
};

bool ispalindrome( node* head)
{
	stack<char> mys;
	node* first = head;
	node* second = head; 
	while (first)
	{
		mys.push(first->s);
		first = first->next;
	}
	// printing stack
	/*
	while (!mys.empty())
	{
		cout << mys.top()<< " ";
		mys.pop();

	}
	cout <<endl; */

	while (second)
	{
		if(second->s != mys.top())
		{
			return false;
		}
		second = second->next;
		mys.pop();
	}

return true;

}

node* createlist(char arr[], int n)
{
	node* head = new node(0);
	node* first = head;
	for (int i =0;i<n;++i)
	{
		node* second = new node(arr[i]);
		first->next = second;
		first = second;
	}
	return head->next;

}

void printlist(node* head)
{
	if(head == NULL)
		cout<<"Empty List";
	while(head != NULL)
	{
		cout<<head->s<<" ";
		head= head->next;

	}
	cout<<endl;
}

int main()
{
	char arr[3] ={'m','a','m'};
	node* l1 = createlist(arr,3);
	printlist(l1);

	bool is_plain = ispalindrome(l1);
	cout<<is_plain<<endl;

	return 0;
}