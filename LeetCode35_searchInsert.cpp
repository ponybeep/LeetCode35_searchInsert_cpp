#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
//��Ŀ������
//����һ�������һ��Ŀ��ֵ�����������ҵ�Ŀ��ֵ�������������������Ŀ��ֵ�������������У����������ᰴ˳Ѷ�����λ�á�
//�����ʹ��ʱ�临�Ӷ�ΪO(log n)���㷨


//����˼·�����ֲ�����С�����ޣ�while(floor<=ceil),������������ѭ������������floor��Ϊ�����λ��

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int floor = 0;
        int ceil = nums.size() - 1;
        int mid;
        while (floor <= ceil)
        {
            mid = (ceil - floor) / 2 + floor;
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] < target)
            {
                floor = mid + 1;
            }
            else
            {
                ceil = mid - 1;
            }
        }
        return floor;
    }
};

void test01()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(5);
    nums.push_back(7);
    int target =3;         //�������ֵΪ0,2,4,6,9,7���Ӧ��Ϊ0,1,2,3,4,3
    Solution solution;
    cout << solution.searchInsert(nums, target) << endl;
}

int main() {


    test01();




	system("pause");
	return 0;
}