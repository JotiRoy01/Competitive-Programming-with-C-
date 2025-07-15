#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;


class Solution{
    public :
        int firstMissingPositive(vector<int>&nums){
            int n = nums.size();
            int small = nums[0];
            int height = nums[0];
            for ( int i = 0 ; i<n ; i++){
                if(small > nums[i]){
                    small = nums[i];
                }
                else if(height<nums[i]){
                    height = nums[i];
                }
            }
            
            int k = 0;
            int smp = small;
            for(int j = small ; j<height ; j++){
                
                while(small != nums[k]){
                    if (smp < small){
                        smp = small;
                    }

                }
                

            }
            if(small != 1){
                small = 1;
            }
            


        }
};


int main(){
    Solution s;
    vector<int>nums = {3,0,1};
    int a = s.firstMissingPositive(nums);
    cout<<"Solution = "<<a;
}