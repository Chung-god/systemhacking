/*
OOB�� ������ ���� ���ָ� ����� �ε����� ������ �� �߻��ϴ� �����  
*/
#include <stdio.h>

int main(void){
	int win;
	int idx;
	int buf[10]; //���� 10, �ε��� ���� 0~9  
	
	//��ȿ�� �ε��� �Է��� �޴��� �˻����� �� ��  
	do{
		printf("��ȿ�� �ε��� 0~9 �� �Է����ּ��� : ");
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
