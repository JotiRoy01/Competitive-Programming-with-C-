#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;


class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        // Iterate through all possible triplets (i, j, k)
        int first = INT_MAX;
        int second = INT_MAX;
        for(int num:nums){
            if(num <= first){
                first = num;
                cout<<"first = "<<first<<endl;
            }
            else if(num <= second){
                second = num;
                cout<<"second = "<<second<<endl;
            }
            else{
                return true;
            }
            
        }
        return false;
    }
    
};


int main(){
    Solution s;
    vector<int>nums = {1,5,0,6};
    bool a = s.increasingTriplet(nums);
    cout<<"Solution = "<<a;
}

//{1,5,0,4,1,3}