#include "Solution.h"

int getPeachNumber(int n)
{
	if (n == 10)
	{
		return 1;
	}
	else
	{
		int num = (getPeachNumber(n + 1) + 1) * 2;
		cout << "第" << n << "天所剩桃子" << num << "个" << endl;
		return num;
	}
}
int main()
{
	int num = getPeachNumber(1);
	cout << "猴子第一天摘了:" << num << "个桃子。" << endl;
	return 0;
}