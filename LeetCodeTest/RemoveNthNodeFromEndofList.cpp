#include "RemoveNthNodeFromEndofList.h"

void RemoveNthNodeFromEndofList::Process()
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

	ListNode *p = removeNthFromEnd(a, 3);
	for (; p != NULL;p = p->next)
	{
		cout << p->val << endl;
	}
}
ListNode* RemoveNthNodeFromEndofList::removeNthFromEnd(ListNode* head, int n)
{
	//n>=1 n<=length
	ListNode *p = head, *q = head;
	for (int i = 0; i < n; ++i, p = p->next);
	if (p == NULL) {
		p = head->next; delete head;
		return p;
	}
	for (; p->next != NULL; p = p->next, q = q->next);
	
	p = q->next->next;
	delete q->next;
	q->next = p;
	
	return head;
}
