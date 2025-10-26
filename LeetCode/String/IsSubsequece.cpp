#include<iostream>
using namespace std;

class Solution{
    public:
        bool isSubsequence(string s, string t){
            int i = 0;
            int j = 0;
            while (i<s.size() && j<t.size())
            {
                if(s[i] == t[j]){
                    i++;
                }
                j++;
            }
            return i == s.size();
            
        }
};

int main(){
    Solution sol;
    std::string a = "jotiroy";
    std::string b = "ry";
    bool result = sol.isSubsequence(b, a);
    cout << std::boolalpha << "Is \"" << b << "\" a subsequence of \"" << a << "\"? " << result << endl;

    return 0;

}