#include "MergeTwoSortedLists.h"

void MergeTwoSortedLists::Process()
{
	ListNode *a = new ListNode(1);
	ListNode *b = new ListNode(2);
	ListNode *c = new ListNode(3);
	ListNode *d = new ListNode(4);
	ListNode *e = new ListNode(5);
	ListNode *f = new ListNode(6);
	a->next = b;
	b->next = c;
	c->next = d;
	d->next = e;
	e->next = f;

	ListNode*p = mergeTwoLists(a,a);
	for (; p != NULL; p = p->next)
	{
		cout << p->val << endl;
	}
	getchar();
}
ListNode* MergeTwoSortedLists::mergeTwoLists(ListNode* l1, ListNode* l2)
{
	ListNode *head = new ListNode(0);

	ListNode *p = head;
	while (l1 != NULL || l2 != NULL)
	{
		if (l1 == NULL)
		{
			p->next = new ListNode(l2->val); l2 = l2->next;
		}
		else if (l2 == NULL)
		{
			p->next = new ListNode(l1->val); l1 = l1->next;
		}
		else
		{
			p->next = new ListNode(l1->val < l2->val ? l1->val : l2->val);
			l1->val < l2->val ? l1 = l1->next : l2 = l2->next;
		}
		p = p->next;
	}
	p->next = NULL;
	p = head; head = head->next;
	delete p;
	return head;
}