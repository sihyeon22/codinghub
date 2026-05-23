#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int is_find = -1;
    int s, e;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 2) {
            is_find = 1;
            s = i;
            break;
        }
    }
    
    if (is_find == -1) {
        answer.push_back(-1);
    }
    
    else {
        for (int i = arr.size() - 1; i > s; i--) {
            if (arr[i] == 2) {
                e = i;
                break;
            }
        }
        
        for (int i = s; i <= e; i++)
            answer.push_back(arr[i]);
    }
    
    return answer;
}