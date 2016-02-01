#pragma once
#include "Solution.h"
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
class MergeTwoSortedLists :public Solution
{
public:
	virtual void Process();
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);
};
