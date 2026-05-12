#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    int tmp = 0;
    int left = 0;
    int right = 0;

    for (int i = 0; i < queries.size(); i++) {
        left  = queries[i][0];
        right = queries[i][1];
        
        tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;
    }

    return arr;
}