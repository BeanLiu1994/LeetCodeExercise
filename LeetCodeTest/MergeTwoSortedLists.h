#pragma once
#include "Solution.h"
#include "ListNode.h"
class MergeTwoSortedLists :public Solution
{
public:
	virtual void Process();
	virtual string GetName() { return "MergeTwoSortedLists"; }
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);
};
