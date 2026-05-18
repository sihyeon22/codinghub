#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> index_list) {
    string answer = "";

    // string 크기 미리 확보 후 재할당 방지 -> push_back() 메모리 누수 방지
    answer.reserve(index_list.size());
    
    for (int idx : index_list) {
        answer.push_back(my_string[idx]);
    }
    
    return answer;
}
