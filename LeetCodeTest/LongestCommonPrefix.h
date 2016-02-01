#pragma once
#include "Solution.h"

class LongestCommonPrefix :public Solution
{
public:
	virtual void Process();
	string longestCommonPrefix(vector<string>& strs);
};