#include <stdio.h>
void print(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, *(arr + i)); 
    }
}
int main() {
    int arr[] = {0, 6, 30, 1, 100};  
    int m = sizeof(arr) / sizeof(int); 
    print(arr, m);
    return 0;
}
