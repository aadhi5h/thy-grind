#include<bits/stdc++.h>
using namespace std;


//approach 1
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n==1){
            return true;
        }
        if (n < 1) return false;
        while (n > 1){
            if (n % 2 == 0) n = n/2;
            else return false;
        }
        return true;
    }
};

//approach 2
class Solution2 {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;
        double k = log2(n);
        int kint = k;
        if (k - kint > 0) return false;
        else return true;
    }
};