#include "RegularExpressionMatching.h"

string p_takedown(string p)
{
	int p_ptr = 3;
	for (; p_ptr < p.length(); ++p_ptr)
	{
		if (p[p_ptr] == '*'&&p[p_ptr - 2] == '*'&&p[p_ptr - 1] == p[p_ptr - 3])
		{
			p = p.substr(0, p_ptr - 1) + p.substr(p_ptr + 1, p.length() - p_ptr - 1);
			p_ptr -= 2;
		}
	}
	return p;
}
void RegularExpressionMatching::Process()
{
#if true
	cout << isMatch("", "") << endl;// true
	cout << isMatch("a", "a*a*") << endl;// true
	cout << isMatch("bbbba", ".*a*a") << endl;// true
	cout << isMatch("a", "ab*") << endl;// true
	cout << isMatch("aaa", "ab*a*c*a") << endl;// true
	cout << isMatch("aa", "aa") << endl;// true
	cout << isMatch("aa", "a*") << endl;// true
	cout << isMatch("aa", ".*") << endl;// true
	cout << isMatch("ab", ".*") << endl;// true
	cout << isMatch("aab", "c*a*b") << endl;// true
	cout << endl;
	cout << isMatch("aaa", ".*c") << endl;// false
	cout << isMatch("aa", "a") << endl;// false
	cout << isMatch("aaa", "aa") << endl;// false
#endif
#if false
#endif
}

#define UsingDP true
bool RegularExpressionMatching::isMatch(string s, string p)
{
	p = p_takedown(p);
#if UsingDP
	int m = s.length(), n = p.length();
	vector<vector<bool>> f(m + 1, vector<bool>(n + 1, false));
	//index of s,n has an offset (1,1) to f.

	//some initial cases
	f[0][0] = true;//s="",p=""
	for (int i = 1; i < m + 1; i++)//s!="",p=""
		f[i][0] = false;
	for (int j = 1; j < n + 1; j++)//s=="",p!=""
		f[0][j] = j > 1 && '*' == p[j - 1] && f[0][j - 2];
	//some further cases
	for (int i = 1; i < m + 1; i++)
		for (int j = 1; j < n + 1; j++)
			if (p[j - 1] != '*')
				f[i][j] = f[i - 1][j - 1] && (s[i - 1] == p[j - 1] || '.' == p[j - 1]);
			else
				//
				//e.g.:	   f[i][j-2]   --> s="aaa[aaa]" p="aa*a*(b*)"
				//	    the other case --> s="aa(a)[aaa]" p="aa(a*)"
				//	    string in "()" is matched this time. string in "[]" is not processed yet
				//
				f[i][j] = f[i][j - 2] || (s[i - 1] == p[j - 2] || '.' == p[j - 2]) && f[i - 1][j];
				
	return f[m][n];
#else
	if (p.empty()) return s.empty();//if s is empty but p has * item, it's still true.

	if (p.length() > 1 && p[1] == '*')
	{
		if (s.length() == 0)
			return isMatch(s, p.substr(2, p.length() - 2));
		if (p[0] == s[0] || p[0] == '.')
			return isMatch(s, p.substr(2, p.length() - 2)) || isMatch(s.substr(1, s.length() - 1), p.substr(2, p.length() - 2)) || isMatch(s.substr(1, s.length() - 1), p);
		else
			return isMatch(s, p.substr(2, p.length() - 2));
	}
	else
	{
		if (s.length() == 0)return false;
		if (p[0] == s[0] || p[0] == '.')
			return isMatch(s.substr(1, s.length() - 1), p.substr(1, p.length() - 1));
		else
			return false;
	}
#endif
}