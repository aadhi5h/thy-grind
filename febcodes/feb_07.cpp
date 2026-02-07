#include<iostream>
#include<map>
#include<string>

using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int counter = 0;
        map<char,int> magazineCounter;

        if (ransomNote == magazine) return true;
        if (ransomNote.size() > magazine.size()) return false;

        for (int i = 0; i < magazine.size(); i++){
            if (magazineCounter.count(magazine[i]) == 0)
                magazineCounter[magazine[i]] = 0;
            magazineCounter[magazine[i]] += 1;
        }

        for (int i = 0; i < ransomNote.size(); i++){ 
            if (magazineCounter.count(ransomNote[i]) == 0)
                return false;
            else{
                if (magazineCounter[ransomNote[i]] > 0)
                    magazineCounter[ransomNote[i]]--;
                else
                    return false;
            }
        }
        return true;
    }
};
