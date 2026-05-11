#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    int prev_val = num_list[num_list.size() - 2];
    int next_val = num_list[num_list.size() - 1];
    
    if (next_val > prev_val)
        num_list.push_back(next_val - prev_val);
    else
        num_list.push_back(next_val * 2);
    
    
    return num_list;
}