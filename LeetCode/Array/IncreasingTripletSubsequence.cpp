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
        for(int i = 0; i<n; i++){
            count = 1;
            k = i;
            for(int j = i+1; j<n; j++){ 

                if(nums[k] < nums[j]){
                    //cout<<"count = "<<count<<endl;
                    cout<<"k = "<<k<<", "<<nums[k]<<" j = "<<j<<", "<<nums[j]<<endl;
                    count++;
                    k = j;
                    cout<<"count = "<<count<<endl;
                }
                if(count == 3){
                    return true;
                }
                    
            }
            

        }
        return false;
    }
};


int main(){
    Solution s;
    vector<int>nums = {1,2,1,3};
    bool a = s.increasingTriplet(nums);
    cout<<"Solution = "<<a;
}