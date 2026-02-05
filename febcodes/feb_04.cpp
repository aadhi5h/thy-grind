#include<iostream>
#include<vector>
#include<string>

using namespace std;

vector<string> FizzBuzz(int n){
    vector<string> answer(n);
    for (int i = 1; i <= n; i++){
        if (i % 3 != 0 && i % 5 != 0){
            answer[i-1] = to_string(i);
        }
        else{
            if (i % 3 == 0){
                answer[i-1] += "Fizz";
            }
            if (i % 5 == 0){
                answer[i-1] += "Buzz";
            }
        }
    }
    return answer;
}

int main(){
    int n;
    cout << "Enter n";
    cin >> n;
    vector<string> ans = FizzBuzz(n);
    for (int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }


    return 0;
}