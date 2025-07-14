#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

class Solution{
    public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        int k;
        int count;
        int l;
        int m;
        for(int i = 0; i<n; i++){
            count = 1;
            k = i;
            m = i;
            l = 1;
            while(l < n){
                count = 1;
                k = i;
                for(int j = m+1; j<n; j++){ 

                    if(nums[k] < nums[j]){
                        k = j;
                        count++;
                    }
                    if(count == 3){
                        return true;
                    }    
                }
                l++;
                m++;
            }

        }
        return false;
    }
};


int main(){
    Solution s;
    vector<int>nums = {1,5,0,4,1,3};
    bool a = s.increasingTriplet(nums);
    cout<<"Solution = "<<a;
}