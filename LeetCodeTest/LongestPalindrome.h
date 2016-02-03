#pragma once
#include "Solution.h"

class LongestPalindrome :public Solution
{
public:
	virtual void Process();
	virtual string GetName() { return "LongestPalindrome"; }
	string longestPalindrome(string s);
};