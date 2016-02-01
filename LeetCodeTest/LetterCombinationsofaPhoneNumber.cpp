#include "LetterCombinationsofaPhoneNumber.h"
#if false
const unordered_map<char, vector<string>> content{
	pair<char,vector<string>>{'2',vector<string>{"a","b","c"} },
	pair<char,vector<string>>{'3',vector<string>{"d","e","f"} },
	pair<char,vector<string>>{'4',vector<string>{"g","h","i"} },
	pair<char,vector<string>>{'5',vector<string>{"j","k","l"} },
	pair<char,vector<string>>{'6',vector<string>{"m","n","o"} },
	pair<char,vector<string>>{'7',vector<string>{"p","q","r","s"} },
	pair<char,vector<string>>{'8',vector<string>{"t","u","v"} },
	pair<char,vector<string>>{'9',vector<string>{"w","x","y","z"} },
};
#else
const unordered_map<char, vector<string>> content{
	{'2',{"a","b","c"} },
	{'3',{"d","e","f"} },
	{'4',{"g","h","i"} },
	{'5',{"j","k","l"} },
	{'6',{"m","n","o"} },
	{'7',{"p","q","r","s"} },
	{'8',{"t","u","v"} },
	{'9',{"w","x","y","z"} },
};
#endif
void LetterCombinationsofaPhoneNumber::Process() 
{
	cout << letterCombinations("234432").size()<< endl;
}
vector<string> LetterCombinationsofaPhoneNumber::letterCombinations(string digits)
{
	if (digits[digits.size() - 1]<'2' || digits[digits.size() - 1]>'9')
		return vector<string>();
	if (digits.size() == 1)
	{
		return content.at(digits[0]);
	}
	else
	{
		vector<string> iter(letterCombinations(digits.substr(0, digits.size() - 1)));
		if (iter.size() == 0)return iter;
		vector<string> appender(content.at(digits[digits.size() - 1]));
		vector<string> result; result.reserve(iter.size()*appender.size());
		//以下是合法情况
		for (int i = 0; i < appender.size(); ++i)
		{
			for (int j = 0; j < iter.size(); ++j)
				result.push_back(iter[j]+appender[i]);
		}
		return result;
	}
}