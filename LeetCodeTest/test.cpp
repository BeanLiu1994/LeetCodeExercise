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
		cout << "��" << n << "����ʣ����" << num << "��" << endl;
		return num;
	}
}
int main()
{
	int num = getPeachNumber(1);
	cout << "���ӵ�һ��ժ��:" << num << "�����ӡ�" << endl;
	return 0;
}