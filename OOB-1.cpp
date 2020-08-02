/*
OOB는 버퍼의 길이 범휘를 벗어나는 인덱스에 접근할 때 발생하는 취약점  
*/
#include <stdio.h>

int main(void){
	int win;
	int idx;
	int buf[10]; //길이 10, 인덱스 가능 0~9  
	
	//유효한 인덱스 입력을 받는지 검사하지 않 음  
	do{
		printf("유효한 인덱스 0~9 를 입력해주세요 : ");
		scanf("%d",&idx);
		printf("\n"); 		
	} while(idx > 9||idx < 0);
	
	printf("Value: ");
	scanf("%d",&buf[idx]);
	
	printf("idx: %d, value: %d\n",idx,buf[idx]);
	
	if(win == 31337){
		printf("Theori{----redeacted-----}");
	}
}
