#include <stdio.h>
void update(int *arr, int value, int position) {
    arr[position] = value;  
}
int main() {
    int arr[] = {1, 2, 30, 4, 200};  
    int n = sizeof(arr) / sizeof(int);
    printf("Mang ban dau:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    int position;
    int value;
    printf("Nhap vi tri muon thay doi: ");
    scanf("%d", &position);
    printf("Nhap gia tri moi: ");
    scanf("%d", &value);
    update(arr, value, position);
    printf("Mang moi:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}
