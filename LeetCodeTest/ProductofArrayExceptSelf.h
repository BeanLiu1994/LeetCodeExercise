#pragma once
#include "Solution.h"

class ProductofArrayExceptSelf :public Solution
{
public:
	virtual void Process();
	virtual string GetName() { return "ProductofArrayExceptSelf"; }
	vector<int> productExceptSelf(vector<int>& nums);
};