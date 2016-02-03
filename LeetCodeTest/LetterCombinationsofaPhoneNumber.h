#pragma once
#include "Solution.h"
class LetterCombinationsofaPhoneNumber :public Solution
{
public:
	virtual void Process();
	virtual string GetName() { return "LetterCombinationsofaPhoneNumber"; }
	vector<string> letterCombinations(string digits);
};