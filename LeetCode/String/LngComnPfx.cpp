#include<iostream>
using namespace std;
#include<vector>

class Solution{
    public :
        string longestCommonPrefix(vector<string>& strs){
            int len = strs.size();
            cout<<"len "<<len<<endl;
            string match;
            int count =0;
            //int w = strs[0].size();
            //cout<<"w = "<<w<<endl;
            if(len == 1){
                return strs[0];
            }
            for(int i = 0; i < len; i++){
                int w = strs[i+1].size();
                for(int j = 1; j<=w-1; j++){
                    if(strs[0][i] == strs[j][i])
                    {
                        
                    }
                    else if(count == 0 && strs[0][i] != strs[j][i]){
                        return "";
                    }

                }
                count++;
            }
            cout<<"Count = "<<count<<endl;
            return strs[0].substr(0, count-1);

        }
};

int main(){
    Solution s;
    vector<string> strs = {"flower", "flow", "flight"};
    //["flower","flower","flower","flower"]
    //["flower","flow","flight"]
    string prefix = s.longestCommonPrefix(strs);
    cout<<"Prefix : "<<prefix;
    return 0;
}