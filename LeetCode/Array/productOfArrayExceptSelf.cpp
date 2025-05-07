#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;


class Solution{
    public :
        vector<int> productExceptSelf(vector<int>&nums) {
            int len = nums.size();
            int c = 1;
            int store = 1;
            int total = 1;
            
            vector<int>answer(len, 1);
            
            for (int i = 0; i<len ; i++){
                int result = 1;
                for(int j = 0 ; j<len; j++){
                    if(i != j){
                        result *= nums[j];
                    }
                    cout<<"result in innerloop("<<j<<") = "<<result<<endl;
                }
                cout<<endl<<"result in outer loop = "<<result<<endl;
                answer[i] = result;
            }
            return answer;
          
        }
};


int main(){
   
    Solution v ;
    //vector<int>answer;
    vector<int>nums = {1,2,3,4};
    int len = nums.size();
    vector<int>answer = v.productExceptSelf(nums);

    for (int i :answer){
        cout<<i<<" ";
    }
    
    return 0;
}