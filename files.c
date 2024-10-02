# include <stdio.h>
FILE  *ftpr;
int main(){

    ftpr =fopen("testing.txt", "w");
    char contents[1000];
    if (ftpr==NULL){
        printf("Error opening a file");
        return 1;
    }
{
    //write to a file
    fprintf(ftpr, "I have created a file opened it and written some text \n");
    fclose(ftpr);

      printf("File created and text written successfully.\n");
}
//opening a file for reading
ftpr =fopen("testing.txt", "r");
      if (ftpr !=NULL){
        fgets(contents, 1000, ftpr);
         printf("%s", contents);
      }
      return 0;
}