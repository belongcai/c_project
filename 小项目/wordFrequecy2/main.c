#include<stdio.h>
#include<stdlib.h>
#include"getWord.h"
#include"wordManage.h"

#define WORD_LEN_MAX 100

int main(int argc, char	**argv){
	char buf[WORD_LEN_MAX];
	FILE *file;
	if(argc == 1){
		file = stdin;
	}else{
		file =fopen(argv[1], "r");
		if(file == NULL){
			fprintf(stderr,"%s %s can not open",argv[0],argv[1]);
			exit(1);
		}
	}
	/* 单词管理模块初始化*/ 
	word_initialize();
	
	while(getWord(buf, WORD_LEN_MAX, file) != EOF){
		add_word(buf);
	}
	
	dump_word(stdout);
	
	word_finalize();
	
	return 0;
}
