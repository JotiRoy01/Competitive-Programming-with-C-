#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

class Solution{
    public :
        int maxProfit(vector<int>&prices){
            int n = prices.size();
            cout<<"n = "<<n<<endl;
            int bestPrice = 0;
            int profit = 0;
            int min  = prices[0];
            int max = prices[1];
            int i = 0;
            int j = 0;
            for(i;i<n-1;i++){
                cout<<"outer while loop = "<<"i = "<<i<<endl;
                j = i;
                if(prices[j] < prices[j+1]){
                    //min = prices[i];
                    
                    while(prices[j] < prices[j+1]){
                        cout<<"inner while loop i = "<<j<<", prices = "<<prices[j]<<" n = "<<n<<endl;
                        if (prices[j] <= min){
                            min = prices[j];
                            cout<<"j = "<<j<<", prices = "<<prices[j]<<", min = "<<min<<endl;
                        }
                        if (prices[j+1] >= max){
                            max = prices[j+1];
                            cout<<"j = "<<j<<", prices = "<<prices[j]<<", max = "<<max<<endl;
                        }
                            // bestPrice = max - min;
                        
                        // cout<<"while loop"<<endl;
                        j++;
                    }
                    bestPrice += (max-min) ;
                    cout<<"bestPrice = "<<bestPrice<<endl;
                     //i = 1 - j;
                    min = prices[j];
                    max = prices[j+1];
                    i = j;
                    --i;
                }
               
               
            }
            return bestPrice;
        }
};


int main(){
    Solution s;
    vector<int>prices = {7,1,5,3,6,4};
    int maxProfit = s.maxProfit(prices);
    cout<<"maxProfit = "<<maxProfit;
    return 0;
}