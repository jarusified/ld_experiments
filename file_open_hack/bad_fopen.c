#define _GNU_SOURCE

#include<stdio.h>
#include<dlfcn.h>

void virus_code(const char *loc){
	printf("Executing vulnerable code\n");
	system("ls");
}

FILE *fopen(const char *path, const char *mode){
	virus_code(path);
	FILE *(*original_fopen)(const char*, const char* mode);
	original_fopen = dlsym(RTLD_NEXT,"fopen");
	return (*original_fopen)(path,mode);
}
