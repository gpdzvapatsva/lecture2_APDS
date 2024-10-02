#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
char name[100];
char * description;
strcpy(name, "University of Suffolk");
//using malloc
description =malloc(40 * sizeof(char));
if (description==NULL){
    fprintf(stderr, "Error in allocation memory\n");
    return 1;
}
else{
    strcpy(description, "University of Suffolk is  in Ipswich");
    printf("Description Pointer Address = %p\n", (void *)description); 
}
//reallocating the memory
description=realloc (description, 100 * sizeof(char));
if (description==NULL){
   fprintf(stderr, "Error in allocation memory\n");  
   return 1;
}
else{

    strcat(description, "We enjoy our time in the city");
}
printf("Name= %s\n", name);
printf("Description= %s\n", description);
printf("Description Pointer Address = %p\n", (void *)description); 
//freeing the memory allocation
free(description);
return 0;
}