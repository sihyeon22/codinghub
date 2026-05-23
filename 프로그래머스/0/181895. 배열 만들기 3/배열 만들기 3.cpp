#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals) {
    vector<int> answer;
    
    for (auto i : intervals) {
        int s = i[0];
        int e = i[1];
        
        for (int idx = s; idx <= e; idx++)
            answer.push_back(arr[idx]);
    }
    
    return answer;
}