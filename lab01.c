#include <stdio.h>

int main(int argc, char *argv[]){
	if (argc < 2){
		printf("Hello!\n");
	}else{
	    	printf("Hello, %s!\n", argv[1]);
   	}
	return 0;
}
