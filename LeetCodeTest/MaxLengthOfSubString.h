#pragma once
#include "Solution.h"
// 16ms solution
class MaxLengthOfSubString:public Solution
{
public:
	int IsOc[256];
	virtual void Process();
	int lengthOfLongestSubstring(string s);
};