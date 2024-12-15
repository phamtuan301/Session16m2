#include <stdio.h>
int search(int *arr, int n, int value) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            return i; 
        }
    }
    return 1;  
}
int main() {
    int arr[] = {1, 44, 30, 100, 200};  
    int n = sizeof(arr) / sizeof(int); 
    int value;
	printf("Nhap gia tri can tim: ");
	scanf("%d", &value);  
    int position = search(arr, n, value);
    if (position != 1) {
        printf("Phan tu tim thay tai vi tri %d\n", position);
    } else {
        printf("Phan tu khong co trong mang\n");
    }
    return 0;
}
