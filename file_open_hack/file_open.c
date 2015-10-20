#include<stdio.h>

int main(){
	FILE *fd = fopen("open_me.txt","r");
	if(!fd){
		printf("I am reading a null value \n");
		return 0;	
	}
	else{
		printf("I can read\n");
		return 1;
	}
}

