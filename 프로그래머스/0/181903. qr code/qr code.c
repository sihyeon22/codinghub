#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(int q, int r, const char* code) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    // q = 3, r = 1, code의 길이가 5라고 가정할 때,
    // strlen(code) / q = 1이 됨.
    // but, (code의 index) % 3 == 1에 해당하는 값은 두 개임.
    // 그러므로 answer의 크기를 할당해 줄 때, +1이 아닌 +2를 해줘야 함. (NULL 문자 포함)
    char* answer = (char*)malloc(strlen(code) / q + 2);
    int idx = 0;
    
    for (int i = 0; i < strlen(code); i++) {
        if (i % q == r)
            answer[idx++] = code[i];
    }
    
    answer[idx] = '\0';
    
    return answer;
}
