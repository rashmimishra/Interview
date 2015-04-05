#include<cstdio>
#include<iostream>

using namespace std;
struct ListNode 
{
	int data;
	node* next;
	ListNode(int d): data(d), next(NULL){}

};

class Solution
{
public:

	void sawp (int* a, int* b)
	{
		int temp = *a;
		*a = *b;
		*b = temp;
	}

	 ListNode *swapPairs(ListNode *head)
	 {
	 	ListNode* temp = head;
	 	while (temp != NULL && temp->next != NULL)
	 	{
	 		swap(&temp->data,&temp->next->data);
	 		temp = temp->next->next;
	 	}
	 	retun head;
	 }

};

int main()
{

}

