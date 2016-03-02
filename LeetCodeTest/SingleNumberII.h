#pragma once
#include "Solution.h"
class SingleNumberII :public Solution
{
public:
	virtual void Process();
	virtual string GetName() { return "SingleNumberII"; }
	int singleNumber(vector<int>& nums);
};