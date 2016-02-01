#include "ValidParentheses.h"


void ValidParentheses::Process()
{
	cout << isValid("()") << endl;
	cout << isValid("[][]{}") << endl;
	cout << isValid("{([])}") << endl;
	cout << isValid("[](]{}") << endl;
	cout << isValid("[(]{)}") << endl;
}
unordered_map<char, char> kh{ {'(',')'},{ '[',']' },{ '{','}' } ,{' ',' '} };
bool ValidParentheses::isValid(string s)
{
	vector<char>layer{ ' ' };
	for (const auto& single_char : s)
	{
		switch (single_char)
		{
		case '[':case '{':case'(':
			layer.push_back(single_char);
			break;
		case ']':case '}':case ')':
			if (kh[layer.back()] != single_char) return false;
			layer.pop_back();
			break;
		default:break;
		}
	}
	layer.pop_back();
	return layer.empty();
}