#include <stdio.h> 

void copy_buf(char *buf,int sz){
	char temp[16];
	int i;
	for(i = 0; i <= sz; i++) //<= �� ����ϸ� ������ ��� ��꿡 ���� �ʴ´�. 
		temp[i] =buf[i];//sz ���� �ƴ� sz+1 �� �ݺ��ϰ� �ȴ�. 
		//off-by-one 
}

int main(void){
	char buf[16];
	read(0,buf,16);
	copy_buf(buf,sizeof(buf));
}
