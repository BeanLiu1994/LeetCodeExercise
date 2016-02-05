#pragma once
#include "Solution.h"

class SearchforaRange :public Solution
{
public:
	virtual void Process();
	virtual string GetName() { return "SearchforaRange"; }
	vector<int> searchRange(vector<int>& nums, int target);
};