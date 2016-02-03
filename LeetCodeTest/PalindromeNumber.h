#pragma once
#include "Solution.h"

class PalindromeNumber :public Solution
{
public:
	virtual void Process();
	virtual string GetName() { return "PalindromeNumber"; }
	bool isPalindrome(int x);
};