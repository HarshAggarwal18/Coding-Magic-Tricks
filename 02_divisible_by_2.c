#include<stdio.h>
int main() {
    int number=21;
    if(!(number & 1)) {
        printf("even");
    }
    printf("odd");
    return 0;
}