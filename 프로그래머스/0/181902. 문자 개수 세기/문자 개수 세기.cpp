#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer(52);
    
    for (char ch : my_string) {
        if ('A' <= ch && ch <= 'Z')
            answer[ch - 'A']++;
        else
            answer[ch - 'a' + 26]++;
    }
    
    return answer;
}