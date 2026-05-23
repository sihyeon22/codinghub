#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// slicer_len은 배열 slicer의 길이입니다.
// num_list_len은 배열 num_list의 길이입니다.
int* solution(int n, int slicer[], size_t slicer_len, int num_list[], size_t num_list_len) {
    int* answer;
    int idx = 0;
    int a = slicer[0];
    int b = slicer[1];
    int c = slicer[2];
    
    switch (n) {
        case 1:
            answer = (int*)malloc(sizeof(int) * (b + 1));
            for (int i = 0; i <= b; i++)
                answer[idx++] = num_list[i];
            break;
            
        case 2:
            answer = (int*)malloc(sizeof(int) * (num_list_len - a));
            for (int i = a; i < num_list_len; i++)
                answer[idx++] = num_list[i];
            break;
            
        case 3:
            answer = (int*)malloc(sizeof(int) * (b - a + 1));
            for (int i = a; i <= b; i++)
                answer[idx++] = num_list[i];
            break;
            
        case 4:
            answer = (int*)malloc(sizeof(int) * ((b - a) / c + 1));
            for (int i = a; i <= b; i += c)
                answer[idx++] = num_list[i];
            break;
            
        default:
            break;
    }

    return answer;
}