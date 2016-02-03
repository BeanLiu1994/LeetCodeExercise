#pragma once
#include "Solution.h"
class ValidParentheses :public Solution
{
public:
	virtual void Process();
	virtual string GetName() { return "ValidParentheses"; }
	bool isValid(string s);
};