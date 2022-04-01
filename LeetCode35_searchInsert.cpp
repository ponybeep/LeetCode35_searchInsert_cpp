#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
//题目描述：
//给定一个数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会按顺讯插入的位置。
//请必须使用时间复杂度为O(log n)的算法


//解题思路：二分查找缩小上下限，while(floor<=ceil),其中若不满足循环条件，返回floor即为插入的位置

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
    int target =3;         //更改这个值为0,2,4,6,9,7结果应该为0,1,2,3,4,3
    Solution solution;
    cout << solution.searchInsert(nums, target) << endl;
}

int main() {


    test01();




	system("pause");
	return 0;
}