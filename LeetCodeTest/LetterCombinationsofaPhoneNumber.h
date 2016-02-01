#pragma once
#include "Solution.h"
class LetterCombinationsofaPhoneNumber :public Solution
{
public:
	virtual void Process();
	vector<string> letterCombinations(string digits);
};