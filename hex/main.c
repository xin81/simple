#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void print_help(char* program);

void print_help(char* program){
	printf("Usage: ./%s [{0,..,N-1}|{0X00,.., 0XFF}]\n", program);
}

int main(int argc, char* argv[]){
char program[8];
strcpy(program, argv[0]);
if(argc > 1){
	if(strcmp(argv[1], "--help")!=0){
		int number=0;
		if(strchr(argv[1], 'X')!=NULL){
			number=(int)strtol(argv[1], NULL, 16);
			printf("%d\n", number);
		}else{
			number=(int)atoi(argv[1]);
			printf("0X%0X\n", number);
		}
	}else{
		print_help(program);
	}
}else{
	char buf[25];
	if(sprintf(buf, "Too few arguements: %d", argc) > (-1)){
		perror(buf);
	}
	print_help(program);
}
return EXIT_SUCCESS;
}
