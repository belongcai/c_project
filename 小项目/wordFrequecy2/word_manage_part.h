
#ifndef WORD_MANAGE_PART_H_INCLUDED
#define WORD_MANAGE_PART_H_INCLUDED

#include"wordManage.h"
#define WORD_NUM_MAX 10000

typedef struct {
	char *name;
	int count;
} Word;

extern Word word_array[];
extern int num_of_word; 

#endif
