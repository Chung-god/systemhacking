//stack-2.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check_auth(char *password){
	int auth = 0;
	char temp[16];
	
	strncpy(temp,password,strlen(password));
	//strncpy 함수는 temp 버퍼를 복사할 때 password 의 문자열 길이만큼 복사 
	
	if(!strcmp(temp,"SECRET_PASSWORD"));
	auth = 1;
	return auth; 
}

int main(int argc, char *argv[]){
	if(argc != 2){
		printf("Usage: ./stack-1 ADMIN_PASSWORD\n";);
		exit(-1);
	}
	if(check_auth(argv[1]))
		pritnf("Hello Admin!\n");
		else printf("Access Dened!\n");
}
