#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    int diff = 0;
    string answer = "";
    
    for (int i = 1; i < numLog.size(); i++) {
        diff = numLog[i] - numLog[i - 1];
        
        switch(diff) {
            case   1:   answer.push_back('w'); break;
            case  -1:   answer.push_back('s'); break;
            case  10:   answer.push_back('d'); break;
            case -10:   answer.push_back('a'); break;
            default:    break;
        }
    }
    
    return answer;
}