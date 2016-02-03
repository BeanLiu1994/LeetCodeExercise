#pragma once
#include "Solution.h"

class LongestCommonPrefix :public Solution
{
public:
	virtual void Process();
	virtual string GetName() { return "LongestCommonPrefix"; }
	string longestCommonPrefix(vector<string>& strs);
};