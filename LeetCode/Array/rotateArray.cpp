#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;



class Solution{
    public:
        void rotate(vector<int>&nums, int k){
           int l = nums.size();
           k = k % l;
           int temp = 0;
           int count = 0;
           int start = 0;
           while(count != k){
                temp = nums[l-count];
                start = nums[count];
                nums[count] = temp;
                nums[l-count] = start;
                count++;
           }

        }
};

int main(){
    Solution r;
    vector<int> nums = {4,1,4,6,3,2,1,6,7,8};
    r.rotate(nums, 2);
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
}