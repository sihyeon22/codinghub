#include <string>
#include <vector>
#include <set>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = "";
    set<int> idx_set(indices.begin(), indices.end());
    
    for (int i = 0; i < my_string.length(); i++) {
        if (idx_set.count(i) == 0)
            answer.push_back(my_string[i]);
    }
    
    return answer;
}