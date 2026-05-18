#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int get_len(const char* str) {
    int len = 0;
    
    while (*str) {
        len++;
        str++;
    }
    
    return len;
}

// queries_rows는 2차원 배열 queries의 행 길이, queries_cols는 2차원 배열 queries의 열 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int** queries, size_t queries_rows, size_t queries_cols) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = get_len(my_string);
    char* answer = (char*)malloc(sizeof(char) * len + 1);
    
    for (int i = 0; i < len; i++) {
        answer[i] = my_string[i];
    }

    for (int i = 0; i < queries_rows; i++) {
        int  start = queries[i][0];
        int  end   = queries[i][0] + (queries[i][1] - queries[i][0]) / 2;
        char tmp;
        
        for (int j = start; j <= end; j++) {
            tmp = answer[j];
            answer[j] = answer[queries[i][0] + queries[i][1] - j];
            answer[queries[i][0] + queries[i][1] - j] = tmp;
        }
    }
    
    answer[len] = '\0';

    return answer;
}