//����һ������ nums ��һ��ֵ val������Ҫ ԭ�� �Ƴ�������ֵ���� val ��Ԫ��
//�������Ƴ���������³��ȡ�

#include <iostream>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int nums1[4] = {3,2,2,3};
	int nums2[8] = { 0,1,2,2,3,0,4,2 };
	int val1 = 3, val2 = 2;
	////����ӽ���ĽǶȿ���ֱ�Ӽ���
	//int count1 = 0;
	//for (int i = 0;i < 4;i++)
	//{
	//	if (nums1[i] != val1)
	//	{
	//		count1++;
	//	}
	//}
	//int count2 = 0;
	//for (int i = 0;i < 8;i++)
	//{
	//	if (nums2[i] != val2)
	//	{
	//		count2++;
	//	}
	//}
	//cout << count1 << endl;
	//cout << count2 << endl;

	//���Ҫʵ��ʵ�ֵĻ���������˫ָ��,�ǳ�ʡʱ��
	//��ָ��fast��������
	//��ָ�����������±�
	int slow = 0;
	for (int fast = 0;fast < 4;fast++)
	{
		if (val1 != nums1[fast])
		{
			//��д
			nums1[slow++] = nums1[fast];
			////�ӳ���
			//nums1[slow] = nums1[fast];
			//slow++;
		}
	}
	cout << slow << endl;
	slow = 0;
	for (int fast = 0;fast < 8;fast++)
	{
		if (val2 != nums2[fast])
		{
			//��д
			nums2[slow++] = nums2[fast];
			////�ӳ���
			//nums1[slow] = nums1[fast];
			//slow++;
		}
	}
	cout << slow << endl;


	return 0;
}