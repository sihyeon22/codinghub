#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* substr(const char* str, int start) {
    int idx = 0;
    int len = strlen(str);
    char* ret = (char *)malloc(sizeof(char) * (len - start) + 1);
    
    for (int i = start; i < len; i++) {
        ret[idx++] = str[i];
    }
    
    ret[idx] = '\0';
    
    return ret;
}

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string, const char* is_suffix) {
    int len = strlen(my_string);
    
    for (int i = 0; i < len; i++) {
        char* str = substr(my_string, i);
        
        if (strcmp(str, is_suffix) == 0) return 1;
    }
    
    return 0;
}