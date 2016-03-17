#include"word_manage_part.h"
void word_finalize(){
	int i;
	for(i=0;i<num_of_word;i++){
		free(word_array[i]);
	}
	num_of_word = 0;
}
