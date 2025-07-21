#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;


class Solution{
    public :
        int firstMissingPositive(vector<int>&nums){
            int n = nums.size();
            // int small = nums[0];
            // int height = nums[0];
            // for ( int i = 0 ; i<n ; i++){
            //     if(small > nums[i]){
            //         small = nums[i];
            //     }
            //     else if(height<nums[i]){
            //         height = nums[i];
            //     }
            // }

            // int k = 0;
            // int smp = small;
            // for(int j = small ; j<height ; j++){
                
            //     while(small != nums[k]){
            //         if (smp < small){
            //             smp = small;
            //         }

            //     }
            // }
            // if(small != 1){
            //     small = 1;
            // }
            // vector<int>newArray = {};
            // int missing;
            // for(int i = 0 ; i<n-1; i++){
            //     int temp;
            //     for(int j = i + 1 ; j>0; j--){
            //         if(nums[j-1] > nums[j]){
            //         temp = nums[j-1];
            //         nums[j-1] = nums[j];
            //         nums[j] = temp;
            //         }
            //     }
            // }

            // for(int i = 0; i<n ; i++){
            //     if(nums[i] != i+1){
            //         return i + 1;
            //     }
            // }
            // for (int i = 0; i < n - 1; i++) {
            //     if(nums[i] >= 0){
            //         if (nums[i+1] - nums[i] != 1) {
            //             return nums[i] + 1; // he missing number
            //         }
            //         else if(nums[i+1] - nums[i] == 1  && i == n-1){
            //             return nums[i] + 1;
            //         }
            //     }
            // }

            //return 1; // or throw an exception if nothing is missing

            
            for(int i = 0; i<n ; i++){
                while(nums[i] >=1 && nums[i] <=n && nums[nums[i] - 1] != nums[i]){
                    int temp = nums[nums[i] - 1];
                    nums[nums[i] - 1] = nums[i];
                    nums[i] = temp;
                }
            }

            for(int i = 0 ; i<n ; i++){
                if(nums[i] != i + 1){
                    return i + 1;
                }
            }
            return n + 1;
        }        

};


int main(){
    Solution s;
    vector<int>nums = {1,2,8,4,5,6,7,11,12,13};
    int a = s.firstMissingPositive(nums);
    cout<<"Solution = "<<a<<endl;
    // ...existing code...
    cout << "NewArray = ";
    for (int num : nums) {
        cout << num << " ";
        }
        cout << endl;
    // ...existing code...
    
}