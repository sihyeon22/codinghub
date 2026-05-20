#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* substr(const char* str, int start, int len) {
    int   idx = 0;
    char* ret = (char*)malloc(sizeof(char) * (len - start) + 1);
    
    for (int i = start; i < len; i++) {
        ret[idx++] = str[i];
    }
    
    ret[idx] = '\0';
    
    return ret;
}

void bubble_sort(char** arr, int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (strcmp(arr[j], arr[j+1]) > 0) {
                char* tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int    len    = strlen(my_string);
    char** answer = (char**)malloc(sizeof(char*) * len);
    
    for (int i = 0; i < len; i++) {
        answer[i] = substr(my_string, i, len);
    }
    
    bubble_sort(answer, len);
    
    return answer;
}