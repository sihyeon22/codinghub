#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    int start = 0;
    int end = 0;
    int threshold = 0;
    int res;
    vector<int> answer;
    
    for (auto query : queries) {
        start = query[0];
        end = query[1];
        threshold = query[2];
        res = -1;
        
        for (int i = start; i <= end; i++) {
            if (arr[i] > threshold) {
                if (res == -1)
                    res = arr[i];
                else
                    if (arr[i] < res)
                        res = arr[i];
            }
        }
        
        answer.push_back(res);
    }
    
    return answer;
}