#include<iostream>
using namespace std;


class Solution{
    public :
        bool isPalindrome(string s){
            int i = 0;
            int j = s.size() - 1;
            
            while( i<j ){
                
                while(i < j && !isalnum(s[i])){
                    i++;
                }
                while(i<j && !isalnum(s[j])){
                    j--;
                }
                while(tolower(s[i]) != tolower(s[j])){
                    return false;
                }
                i++;
                j--;
            }
            return true;   
        }   
        
       
};

int main(){
    Solution s;
    string st = "A man, a plan, a canal: Panama";
    bool p = s.isPalindrome(st);
    //cout<<"Is Palindrome "<<p<<endl;
    int n = st.size();
    cout<<p;
    // for(int i; i<n;i++) {
    //     cout<<"Is alphabeticnumeric "<<isalnum(st[i])<<" "<<st[i]<<" lowercase "<<tolower(st[i])<<endl;
    // }
    
    return 0;
}