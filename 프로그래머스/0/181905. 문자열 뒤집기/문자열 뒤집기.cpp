#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int s, int e) {
    int len = e - s + 1;
    for (int i = s; i < s + len / 2; i++) {
        char tmp = my_string[i];
        my_string[i] = my_string[e + s - i];
        my_string[e + s - i] = tmp;
    }
    
    return my_string;
}