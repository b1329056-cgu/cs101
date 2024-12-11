#include <stdio.h>

int main() {
    int i = 12345;  
    int original = i; 

    int units = i % 10;        
    int thousands = (i / 1000) % 10;

    
    i = i - units - (thousands * 1000); 
    i = i + thousands + (units * 1000); 

    printf("%d\n",original);
    printf("%d\n",i);

    return 0;
}
