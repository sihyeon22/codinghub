#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    
    for (auto ch : my_string) {
        if (n == 0) break;
        
        answer.push_back(ch);
        n--;
    }
    
    return answer;
}