#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int strlen(const char* str) {
    int len = 0;
    
    while (*str) {
        len++;
        str++;
    }
    
    return len;
}

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int   idx    = 0;
    int   len    = strlen(my_string);
    char* answer = (char*)malloc(sizeof(char) * n + 1);
    
    for (idx = 0; idx < n; idx++) {
        answer[idx] = my_string[len - n + idx];
    }
    
    answer[idx] = '\0';
    
    return answer;
}