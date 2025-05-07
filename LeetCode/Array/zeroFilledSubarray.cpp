#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

class SubArray{
    public:
        void zeroFilledSubArray(vector<int>&nums) {
            int totalsubarr = 0;
            int store = 0;
            int n = nums.size();
            cout<<"ArraySize = "<<n;
            cout<<endl;
            int count = 0;
            for (int i = 0; i < n; i++){
                cout<<"Forloop "<<i<<" = "<<nums[i]<<endl;
                cout<<endl;
                //int zero = 0;
                int j = i;
                count = 0;
                
                while(nums[j] == 0){
                    int zerolen = 0;
                    cout<<"whileloop "<<j<<" = "<<nums[j]<<endl;
                    count++;
                    cout<<"count = "<<count<<endl;
                    j++;


                }
                if(j != i){
                    store = (count * (count + 1)) / 2;

                    totalsubarr += store;
        
                    cout<<"Total SubArray = "<<totalsubarr;
                       
                
                    j--;
                    i = j;
                
                cout<<endl;
                }
            }

        }
};


int main(){
    SubArray r;
    vector<int> nums = {0,0,0,2,0,0};
    r.zeroFilledSubArray(nums);
    // for (int num : nums) {
    //     cout << num << " ";
    // }
    cout << endl;
}