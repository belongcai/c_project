#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"word_manage_part.h""

/*
*	void shiftArray(int index)  
* 	index:	插入的索引号 
* 	功能：	数组后移 
*/
static void shiftArray(int index){
	int src;
	for(src=num_of_word-1; src >= index; src--){
		word_array[src+1] = word_array[src];
	}	
	num_of_word++;
}

/*
*	注意：word 用 strlen 而不用 sizeof  
*/
static char	*strcpy2(char *word){
	char *dest;
	
	dest = (char *)malloc(sizeof(char) * (strlen(word) + 1));
	strcpy(dest,word);
	
	return dest;	
}

void add_word(char *word){
	int i;
	int result;
	for(i=0;i<num_of_word;i++){
		result = strcmp(word_array[i].name,word);
		if(result >= 0){
			break;
		}	
	}
	if(result == 0 && num_of_word != 0){
		word_array[i].count++;
	} 
	else{
		shiftArray(i);
		word_array[i].name = strcpy2(word);
		word_array[i].count= 1;
	}
}

