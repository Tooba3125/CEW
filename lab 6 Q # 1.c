main.c

#include <stdio.h>#include "files.h"

int main(){ FILE* str;

printf("%d\n",doesExist("new.txt")); write("new.txt", str, "\nWorks
like\na charm!"); read("new.txt", str);return 0;
 
LAB:06

stream = fopen(file, "r"); while(fgets(buff, 10, stream)){
printf("%s", buff);
}
fclose(stream);
}

void write(char* file, FILE* stream,char* str){ stream = fopen(file, "a");
fprintf(stream, str); fclose(stream);
}

new.txt
 
}

files.h

#ifndef	FILES_h #define FILES_h void read();
void write();
int doesExist(); #endif

files.c

#include "files.h" #include
<stdlib.h>#include <stdio.h>

int doesExist(char* file){FILE* fptr;
if(!(fptr = fopen(file, "r"))){ return 0;
}
return 1;
}
void read(char* file, FILE* stream)
{
char* buff = malloc(10 * sizeof(char));
