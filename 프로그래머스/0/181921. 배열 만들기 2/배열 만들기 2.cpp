#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    bool is_valid;
    vector<int> answer;
    
    for (int i = l; i <= r; i++) {
        string num = to_string(i);
        is_valid = true;
        
        for (char digit : num) {
            if (digit != '5' && digit != '0')
                is_valid = false;
        }
        
        if (is_valid)
            answer.push_back(i);
    }
    
    if (answer.size() == 0)
        answer.push_back(-1);
    
    return answer;
}