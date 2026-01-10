#include <iostream>
#include <vector>
#include <string>
#include<stdio.h>
using namespace std;

class Master{
    public :
        void guessWord(){

        }
};


class Solution {
public:
    void findSecretWord(vector<string>& words, string word) {
        int length = words.size();
        int n = 6;
        cout << "length " << length << endl;

        int allowedGuess = 10;
        Master.guess(eiowzz);
        //MinMax Approach
        

        for(int i = 0; i < length; i++){
            int matches = 0;
            for(int j = 0; j < n; j++){
                if(words[i][j] == word[j]){
                    matches++;
                }
            }
            if(matches == n){
                cout << "The guess word found at position " << i << endl;
            }
        }
    }
};



int main(){
    vector<string>str = {"acckzz","ccbazz","eiowzz","abcczz"};
    string word = "eiowzz";
    Solution s;
    s.findSecretWord(str, word);
    return 0;
}