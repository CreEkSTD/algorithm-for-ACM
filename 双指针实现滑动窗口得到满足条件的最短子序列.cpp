//����һ������ n ���������������һ�������� s ���ҳ���������������� �� s �ĳ�����С�� ���� �����飬
//�������䳤�ȡ���������ڷ��������������飬���� 0��



#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

using ll = long long;
const ll N = 1e5, inf = 1e9;


int main()
{
	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n = 6, s = 7;
	vector<int> nums = { 2,3,1,2,4,3 };
	//��������
	int result = 1e9;
	int sum = 0; // ����������ֵ֮��
	int i = 0; // ����������ʼλ��
	int length = 0;
	for (int j = 0;j < n;j++)
	{
		sum += nums[j];
		while (sum >= s)
		{
			int length = (j - i + 1);
			if (length < result)
			{
				result = length;
			}
			sum -= nums[i++];

		}
	}

	int res = result;
	cout << res << endl;

	return 0;
}