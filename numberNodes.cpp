#include<iostream>

using namespace std;

struct ListNode
{
	int number;
	ListNode *next;
};
typedef ListNode* ListNodePtr;

void headInsert(ListNodePtr& head)
{
	//Function inserts a new node from the head
	ListNodePtr temp = new ListNode;
	cout << "Enter the inserted number: ";
	cin >> temp->number;
	temp->next = head;
	head = temp;
}

ListNodePtr searchNode(ListNodePtr head, int n)
{
	//Function searchs for a node containing the given number
	//	and returns the pointer pointing to that node
	//The nullptr is returned if target DNE
	if(head == nullptr)
		return nullptr;
	else
	{
		ListNodePtr here = head;
		while(here->number != n && here->next != nullptr)
			here = here->next;
		if(here->number == n)
			return here;
		else
			return nullptr;
	}
}

void dispData(ListNodePtr& head)
{
	//Displays the current data stored in nodes to the console
	cout << "Number stored are as follows: ";
	for(ListNodePtr ite = head; ite != nullptr; ite = ite->next)
	{
		cout << ite->number << " ";
	}
}

int main()
{
	int count = 0;
	int i = 0;
	ListNodePtr head = new ListNode;
	ListNodePtr ite = head;
	
	cout << "Enter the number of nodes: ";
	cin >> count;

	for(i = 1; i <= count; i++)
	{
		cout << "Enter the number stored into node #" << i << ": ";
		cin >> ite->number;
		if(i == count)
		{
			ite->next = nullptr;
		}
		else
		{
			ite->next = new ListNode;
			ite = ite->next;
		}
	}

	dispData(head);

	cout << endl << "An instance of head insertion: " << endl;
	headInsert(head);
	dispData(head);
	
	cout << endl << "An instance of searching: " << endl;
	int n = 0;
	cout << "Enter the number you want to search for: ";
	cin >> n;
	ListNodePtr found = searchNode(head, n);
	cout << "Point to address " << found << endl;
	
	return 0;
}
