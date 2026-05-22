#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// indices_len은 배열 indices의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int indices[], size_t indices_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(char) * (strlen(my_string) - indices_len) + 1);
    char* tmp = (char*)malloc(sizeof(char) * strlen(my_string) + 1);
    int idx = 0;
    
    strcpy(tmp, my_string);
    
    for (int i = 0; i < indices_len; i++) {
        tmp[indices[i]] = ' ';
    }
    
    for (int i = 0; i < strlen(tmp); i++) {
        if (tmp[i] != ' ')
            answer[idx++] = tmp[i];
    }
    
    answer[idx] = '\0';
    
    return answer;
}