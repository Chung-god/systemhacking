#include <stdio.h> 

void copy_buf(char *buf,int sz){
	char temp[16];
	int i;
	for(i = 0; i <= sz; i++) //<= 을 사용하면 버퍼의 경계 계산에 맞지 않는다. 
		temp[i] =buf[i];//sz 번이 아닌 sz+1 번 반복하게 된다. 
		//off-by-one 
}

int main(void){
	char buf[16];
	read(0,buf,16);
	copy_buf(buf,sizeof(buf));
}
