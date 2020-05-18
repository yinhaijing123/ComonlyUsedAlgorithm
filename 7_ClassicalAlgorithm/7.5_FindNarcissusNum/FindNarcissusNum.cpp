
/*******************************************************************************************
问题描述：寻找100~1000之间的水仙花数（阿姆斯特朗数俗称水仙花数），指的是一个3位数，其各位数字的立方和等于该数本身。
	   	例如：153是一个水仙花数，因为：153=1^3+5^3+3^3

算法思路：穷举法
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