
/*******************************************************************************************
����������Ѱ��100~1000֮���ˮ�ɻ�������ķ˹�������׳�ˮ�ɻ�������ָ����һ��3λ�������λ���ֵ������͵��ڸ�������
	   	���磺153��һ��ˮ�ɻ�������Ϊ��153=1^3+5^3+3^3

�㷨˼·����ٷ�
*******************************************************************************************/
#include<iostream>
#include<math.h>
using namespace std;

bool FindNarcissusNum(int num)
{
	int result = 0;
	int tmp =num;
	while (tmp!= 0)
	{
		int remainder = tmp % 10;
		tmp /= 10;
		result += pow(remainder, 3);
	}
	if (result == num)
		return true;
	return false;
}

int main()
{
	int start, end;
	cin >> start >> end;
	for (int i = start;i <= end;i++)
	{
		if (FindNarcissusNum(i))
			cout << i << '\t';
	}

	system("pause");
	return 0;
}