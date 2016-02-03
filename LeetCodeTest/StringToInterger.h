#pragma once
#include "Solution.h"
class symbol
{
public:
	int symbol_ind;
	symbol(const char &a) :symbol_ind(0)
	{
		if (a == '+')symbol_ind = 1;
		else if (a == '-')symbol_ind = -1;
	}
};
class StringToInterger :public Solution
{
public :
	virtual void Process();
	virtual string GetName() { return "StringToInterger"; }
	int myAtoi(string str);
	int result_after_check(symbol* sp, long long result);
};