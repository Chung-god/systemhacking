#include <stdio.h>

int main(void){
	char buf[32] = {0,};
	
	read(0,buf,31);
	sprintf(buf,"Your Input is: %s\n",buf);
	//31바이트를 가득 채운다면 sprintf 가 buf 에 쓸 때 버퍼 오버플로우가 발생 
	puts(buf);
}
