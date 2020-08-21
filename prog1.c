# include <stdio.h>

#define SIZE 5

int main(){
	/*here I am just initializing an array space!!! nothing gets
	 * automatically initialized to 0, so make sure you set your 
	 * stuff to 0 if you need it to */
	int array[SIZE];
	int index;


	for(index = 0; index < SIZE; index++){
		scanf("%d",&array[index]);
	}
	
	for(index = 0; index < SIZE; index++){
		printf("%d ",array[index]);
	}
	printf("\n");

}
