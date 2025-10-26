#include<iostream>
using namespace std;
#include<vector>


class Solution {
public:
    string convert(string s, int numRows) {
        int len = s.size();
        int skip = 0;
        for(int i = 0; i < numRows; i++){
            if(i == 0 || (i == numRows - 1)+skip ){
                for(int j = 0; j<=0; j++){

                }
            }
            if(){
                
            }
        }
    }
};

int main(){
    string s = "PAHNAPLSIIGYIR";
    int rows = 4;
    Solution sol;
    sol.convert(s, rows);
    return 0;
}