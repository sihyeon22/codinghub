#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(int a, int b, int c, int d) {
    int answer = 0;
    
    // 모두 같은 경우
    if ((a == b) && (b == c) && (c == d)) {
        answer = 1111 * a;
    }
    
    // (3, 1), (2, 2), (2, 1, 1), (1, 1, 1, 1)
    else {
        // (a, b, c) (d)
        if ((a == b) && (b == c)) {
            answer = pow(10*a + d, 2);
        }
        
        // (a, b, d) (c)
        else if ((a == b) && (b == d)) {
            answer = pow(10*a + c, 2);
        }
        
        // (a, c, d) (b)
        else if ((a == c) && (c == d)) {
            answer = pow(10*a + b, 2);
        }
        
        // (b, c, d) (a)
        else if ((b == c) && (c == d)) {
            answer = pow(10*b + a, 2);
        }
        
        // (2, 2), (2, 1, 1), (1, 1, 1, 1)
        else {
            // (a, b) (c, d)
            if ((a == b) && (c == d)) {
                answer = (a + c) * abs(a - c);
            }
            
            // (a, c) (b, d)
            else if ((a == c) && (b == d)) {
                answer = (a + b) * abs(a - b);
            }
            
            // (a, d) (b, c)
            else if ((a == d) && (b == c)) {
                answer = (a + b) * abs(a - b);
            }
            
            // (2, 1, 1), (1, 1, 1, 1)
            else {
                // (a, b) (c) (d)
                if (a == b)
                    answer = c * d;
                
                // (a, c) (b) (d)
                else if (a == c)
                    answer = b * d;
                
                // (a, d) (b) (c)
                else if (a == d)
                    answer = b * c;
                
                // (b, c) (a) (d)
                else if (b == c)
                    answer = a * d;
                
                // (b, d) (a) (c)
                else if (b == d)
                    answer = a * c;
                
                // (c, d) (a) (b)
                else if (c == d)
                    answer = a * b;
                
                // (a) (b) (c) (d)
                else
                    answer = min( {a, b, c, d} );
            }
        }
    }
    
    return answer;
}