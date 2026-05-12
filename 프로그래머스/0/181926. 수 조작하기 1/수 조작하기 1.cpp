#include <string>
#include <vector>

using namespace std;

int solution(int n, string control) {
    for (char ch : control) {
        switch(ch) {
            case 'w':
                n++;
                break;
            case 's':
                n--;
                break;
            case 'd':
                n += 10;
                break;
            case 'a':
                n -= 10;
                break;
            default:
                break;
        }
    }
    
    return n;
}