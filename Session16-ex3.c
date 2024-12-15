#include <stdio.h>
void sum(int *a, int *b, int *cal) {
    *cal = *a + *b;  
}
int main() {
    int x = 100;
	int y = 1; 
    int result = 0;     
    sum(&x, &y, &result);
    printf("Tong cua 2 so %d va %d la: %d\n", x, y, result);
    return 0;
}
