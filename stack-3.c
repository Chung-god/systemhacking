// stack-3.c
#include <stdio.h>
#include <unistd.h>
int main(void) {
    char win[4]; 
    int size;
    char buf[24];
    
    scanf("%d", &size); 
	//허용 가능한 버퍼의 크기보다 더 많은 입력을 받아서 스택 오버 플로우 발 생  
    read(0, buf, size);
    
    if (strncmp(win, "ABCD", 4)){
        printf("Theori{-----------redeacted---------}");
    }
}
