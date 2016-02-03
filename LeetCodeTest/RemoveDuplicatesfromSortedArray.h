#pragma once
#include "Solution.h"
class RemoveDuplicatesfromSortedArray :public Solution
{
public:
	virtual void Process();
	virtual string GetName() { return "RemoveDuplicatesfromSortedArray"; }
	int removeDuplicates(vector<int>& nums);
};