#include<iostream>
#include<vector>

using namespace std;

int maxWealth(vector<vector<int>> &accounts){
    int vecsum, largest = 0;
    for (int i = 0; i < accounts.size(); i++){
        vecsum = accounts[i][0];
        for (int j = 1; j < accounts[i].size(); j++){
            vecsum+= accounts[i][j];
        }
        if (vecsum > largest) largest = vecsum;
    }
    return largest;
}