#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef enum {MIN, MAX} heap_type_t;
typedef struct {
	heap_type_t type;
	int* data;
} heap_t;

void insert_heap(heap_t* heap, int value){
	if(heap->type == MIN){

	}
	else{	//we know it's max if not min

	}
}

int main(){
	printf("Hello world!\n");
	return EXIT_SUCCESS;
}
