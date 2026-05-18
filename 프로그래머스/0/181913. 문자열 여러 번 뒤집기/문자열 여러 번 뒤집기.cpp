#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    for (auto q : queries) {
        int  start = q[0];
        int  end   = q[0] + (q[1] - q[0]) / 2;
        char tmp;
        
        for (int i = start; i <= end; i++) {
            tmp = my_string[i];
            my_string[i] = my_string[q[0] + q[1] - i];
            my_string[q[0] + q[1] - i] = tmp;
        }
    }
    
    return my_string;
}