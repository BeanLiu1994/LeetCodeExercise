#include "Solution.h"
#include "TestSeg.h"
#include "ImplementstrStr.h"
//���Է�ʽ:������ֱ�ӷŽ���
class ConCreteTestSeg :public TestSeg
{
private:
#pragma region [Content of test.cpp]
//=============================== File Start ===============================
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
int main(int argc, char* argv[])
{
	TestCasesManager myMG(true);
	vector<Solution*> myTestSet;

	myTestSet.push_back(new ImplementstrStr());
	myTestSet.push_back(new ConCreteTestSeg());
	myTestSet.push_back(new ConCreteTestSeg2());

	myMG.Add(myTestSet);
	myMG.RunAllSeg();

	getchar();
	return 0;
}