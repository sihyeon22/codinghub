#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len) {
    int s, e;
    int is_find = -1;
    int idx = 0;
    int* answer;
    
    for (int i = 0; i < arr_len; i++) {
        if (arr[i] == 2) {
            is_find = 1;
            s = i;
            break;
        }
    }
    
    if (is_find == -1) {
        answer = (int*)malloc(1);
        answer[0] = -1;
    }
    
    else {
        for (int i = arr_len - 1; i > s; i--) {
            if (arr[i] == 2) {
                e = i;
                break;
            }
        }
        
        answer = (int*)malloc(sizeof(int) * (e - s + 1));
        
        for (int i = s; i <= e; i++) {
            answer[idx++] = arr[i];
        }
    }
    
    return answer;
}