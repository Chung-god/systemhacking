//oob-3.c
#include <stdio.h>
int main(void) {
    int idx;
    int buf[10];
    int dummy[7];
    int win;
    printf("Which index? ");
    scanf("%d", &idx);
    
    if(idx < 0)
        idx = -idx; //음수 문제 해결  
    idx = idx % 10; // No more OOB!@!#!
    printf("Value: ");
    scanf("%d", &buf[idx]);
    printf("idx: %d, value: %d\n", idx, buf[idx]);
    if(win == 31337){
        printf("Theori{-----------redeacted---------}");
    }
}
