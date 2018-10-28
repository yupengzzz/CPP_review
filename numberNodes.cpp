#include<iostream>

using namespace std;

struct ListNode
{
	int number;
	ListNode *next;
};
typedef ListNode* ListNodePtr;

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

	cout << "Number stored are as follows: ";
	for(ite = head; ite != nullptr; ite = ite->next)
	{
		cout << ite->number << " ";
	}

	return 0;
}
