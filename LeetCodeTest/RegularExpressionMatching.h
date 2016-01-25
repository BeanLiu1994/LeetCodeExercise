#pragma once
#include "Solution.h"
class RegularExpressionMatching :public Solution
{
public:
	void Process();
	bool isMatch(string s, string p);
};