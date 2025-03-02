#include<stdio.h>
int main() {
    int num=987;
    printf("super digit is:%d",num%9?num%9:num ? 9:0);
    return 0;
}