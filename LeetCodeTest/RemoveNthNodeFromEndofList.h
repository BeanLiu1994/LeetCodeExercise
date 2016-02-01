#pragma once
#include "Solution.h"

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class RemoveNthNodeFromEndofList :public Solution
{
public:
	virtual void Process();
	ListNode* removeNthFromEnd(ListNode* head, int n);
};