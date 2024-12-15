#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a; 
    *a = *b;       
    *b = temp;   
}
int main() {
    int x = 30;
	int y = 1;
    printf("Gia tri ban dau cua 2 bien la x = %d, y = %d\n", x, y);
    swap(&x, &y); 
    printf("Gia tri 2 bien sau khi doi cho nhau: x = %d, y = %d", x, y);
    return 0;
}
