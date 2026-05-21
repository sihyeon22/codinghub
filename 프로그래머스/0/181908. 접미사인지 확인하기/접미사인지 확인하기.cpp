#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    for (int i = 0; i < my_string.length(); i++) {
        string suffix = my_string.substr(i);
        
        if (suffix == is_suffix) return 1;
    }
    
    return 0;
}