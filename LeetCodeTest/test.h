#pragma once
#include "TestSeg.h"
//���Է�ʽ:������ֱ�ӷŽ���
class ConCreteTestSeg :public TestSeg
{
private:
#pragma region [Content of test.cpp]
	//=============================== File Start ===============================
#include "Solution.h"

	/*int getPeachNumber(int n)
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
	}*/
	class aaa
	{
	public: virtual void a(float) { cout << "aaa int" << endl; }
			virtual void a(aaa*) { cout << "aaa aaa" << endl; }
	};
	class bbb :public aaa
	{
	public: void a(float) { cout << "bbb int" << endl; }
	};
	int main()
	{
		aaa *a;
		a = new aaa();
		a->a(1);
		a = new bbb();
		a->a(1);
		bbb b;
		b.a(1);
		return 0;
	}
	//================================ File End ================================
#pragma endregion
};
//��һ�ֲ��Է�ʽ:ֱ��include�ļ�,���Ƕ�Ӧ�ļ���Ҫ����Ϊ"���������ų�"
class ConCreteTestSeg2 :public TestSeg
{
private:
#pragma region [Content of test.cpp]
	//=============================== File Start ===============================
#include "test.cpp"
	//================================ File End ================================
#pragma endregion
};