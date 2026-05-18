#include <string>
#include <vector>

using namespace std;

int solution(string number) {
    int sum = 0;
    
    for (char num : number) {
        sum += num - '0';
    }
    
    return sum % 9;
}