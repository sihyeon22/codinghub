#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    
    for (auto intStr : intStrs) {
        string tmp = "";
        for (int i = s; i < s + l; i++) {
            tmp.push_back(intStr[i]);
            
            if (stoi(tmp) > k)
                answer.push_back(stoi(tmp));
        }
    }
    
    return answer;
}