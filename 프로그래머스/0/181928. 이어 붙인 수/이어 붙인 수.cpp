#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int odd = 0;
    int even = 0;
    
    for (auto num : num_list) {
        if (num % 2) {
            odd *= 10;
            odd += num;
        }
        
        else {
            even *= 10;
            even += num;
        }
    }
    
    return odd + even;
}