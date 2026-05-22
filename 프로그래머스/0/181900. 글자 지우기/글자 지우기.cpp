#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = "";
    
    for (int i = 0; i < my_string.length(); i++) {
        int is_in = 0;
        
        for (int idx : indices) {
            if (i == idx) {
                is_in = 1;
                break;
            }
        }
        
        if (is_in == 0)
            answer.push_back(my_string[i]);
    }
    
    return answer;
}