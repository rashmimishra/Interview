/* simple demonstration of linked lists. This is for single
linked list */
#include<iostream>
#include<cstdlib>

class node
{

  private:
  int data;
  node *next;
  public:
  node(int d)
  {
  	data = d;
  	node *next = NULL;
  }

};


int main()
{
	return 0; 
}
