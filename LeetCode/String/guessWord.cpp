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
        cout << "length " << length << endl;
        for(int i = 0; i < length; i++){
            int matches = 0;
            for(int j = 0; j < 6; j++){
                if(words[i][j] == word[j]){
                    matches++;
                }
            }
            if(matches == 6){
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