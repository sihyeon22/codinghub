#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    int size = my_string.length();
    vector<string> suffix_list(size);
    
    for (int i = 0; i < size; i++) {
        suffix_list.push_back(my_string.substr(i));
    }
    
    for (auto suffix : suffix_list) {
        if (suffix == is_suffix)
            return 1;
    }
    
    return 0;
}