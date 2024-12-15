#include <stdio.h>
int main() {
    int x = 30;        
    int *ptr = &x; 
	// Cach 1 in truc tiep    
    printf("Gia tri x: %d\n", x);
    printf("Dia chi x: %p\n", (void*)&x);
    // Cach 2 in gian tiep
    printf("Gia tri x: %d\n", *ptr);  
    printf("Dia chi x: %p\n", (void*)ptr);  
    return 0;
}
