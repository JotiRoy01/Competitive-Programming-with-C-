#include<iostream>
using namespace std;
#include<vector>


class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows <= 1 || s.size() <= 1) return s;
        vector<string> rows(min((int)numRows, (int)s.size()));
        int cur = 0;
        bool pointer = false;
        for (char c : s) {
            rows[cur] += c;
            if (cur == 0 || cur == numRows - 1){ 
                pointer = !pointer;
            }
            if(pointer){
                cur += 1;
            }
            else{
                cur += -1;
            }
        }
        string finalRows;
        for (const string& r : rows) {
            finalRows += r;
        }
        return finalRows;
    }
};

// int main(){
//     string s = "PINALSIGYAHRPI";
//     int rows = 4;
//     Solution sol;
//     sol.convert(s, rows);
//     return 0;
//       cur += pointer ? 1 : -1;
//}
int main(){
    string s = "PAYPALISHIRING";
    int rows = 4;
    Solution sol;
    cout << sol.convert(s, rows) << endl;
    cout<<"row = "<<rows<<endl;
    cout<<"row int = "<<(int)rows<<endl;

    return 0;
}