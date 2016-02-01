#pragma once
#include "Solution.h"
class RegularExpressionMatching :public Solution
{
public:
	virtual void Process();
	bool isMatch(string s, string p);
};