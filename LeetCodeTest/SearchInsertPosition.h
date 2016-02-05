#pragma once
#include "Solution.h"
class SearchInsertPosition :public Solution
{
public:
	virtual void Process();
	virtual string GetName() { return "SearchInsertPosition"; }
	int searchInsert(vector<int>& nums, int target);
	int searchInsert(vector<int>& nums, size_t left_ind, size_t right_ind, int target);
};