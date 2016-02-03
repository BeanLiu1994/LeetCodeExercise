#pragma once
#include "Solution.h"
#include "ListNode.h"
class RemoveNthNodeFromEndofList :public Solution
{
public:
	virtual void Process();
	virtual string GetName() { return "RemoveNthNodeFromEndofList"; }
	ListNode* removeNthFromEnd(ListNode* head, int n);
};