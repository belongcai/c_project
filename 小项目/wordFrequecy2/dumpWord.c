#include<stdio.h>
#include"word_manage_part.h"
void dump_word(FILE *file){
	int i;
	for(i=0;i<num_of_word;i++){
		fprintf(file,"��������%-20s ����Ƶ�ʣ�%5d\n",word_array[i].name,word_array[i].count);
	}
	
}
