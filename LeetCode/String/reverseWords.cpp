#include <iostream>
#include <vector>
#include <string>
#include<stdio.h>
class Solution{
  public :
    std::string reverseWords(std::string s) {

        reverseRange(s, 0, int(s.size() - 1));
            for(char c:s){
              std::cout<<c;
            }
        std::cout<<std::endl;
        reverseWord(s);
        return removeSubspace(s);
    }  

  private :
    void reverseRange(std::string& str, int left, int right){
        while(left < right) {
            char temp = str[left];
            //std::cout<<" temp "<<temp;
            str[left++] = str[right];
            //std::cout<<" left++ = "<<str[left++];
            str[right--] = temp;
        }
    }
  private :
    void reverseWord(std::string& str){
      int end = 0;
      int start = 0;
      int len = str.size();
      for(end = 0 ; end<len; end++){ 
          if (str[end] == ' '){
              //end--;
              reverseRange(str, start, end - 1);
              start = end+1;
          }
          // end++;
      }
       //|| end == len-1

      reverseRange(str, start, len - 1);
      std::cout<<str[end]<<std::endl;
    }

  private :
    std::string removeSubspace(std::string& str){
        std::string res = "";
        int i = 0;
        int n = str.length();
        
        while (i < n) {
            while (i < n && str[i] == ' ') i++; // Skip spaces
            if (i >= n) break;
            if (res.length() > 0) res += ' '; // Add space between words
            while (i < n && str[i] != ' ') {
                res += str[i];
                i++;
            }
        }
        return res;
    }

};

int main(){
    std::string s = "  The  sky in  the   blue ";
    Solution s1 ;
    std::string s2 = s1.reverseWords(s);
    for(char c:s2){
        std::cout<<c;
    }
    return 0;
}

// class Solution {
// public:
//     string reverseWords(string s) {

        
        
//     }
// };