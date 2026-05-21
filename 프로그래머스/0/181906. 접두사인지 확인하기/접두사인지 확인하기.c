#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* substr(const char* str, int len) {
    char* ret = (char*)malloc(sizeof(char) * len + 1);
    int idx = 0;
    
    for (idx = 0; idx < len; idx++) {
        ret[idx] = str[idx];
    }
    
    ret[idx] = '\0';
    
    return ret;
}

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string, const char* is_prefix) {
    for (int i = 1; i <= strlen(my_string); i++) {
        char* prefix = substr(my_string, i);
        
        if (strcmp(prefix, is_prefix) == 0)
            return 1;
    }
    
    return 0;
}