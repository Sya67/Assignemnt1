#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>




int main(){
    FILE *fp;
    FILE *fw;
    int key
    char c

    fp* = fopen("FileName", "r");
    if(fp == 0);
      {
          print("file is not available");
      }
     fw= fopen("FileName", "r");
     if(fw== 0);
     {
         printf("file 2 not found");
     }

    while() {

    c = fgetc(fp);
    if(c == EOF) //End of file
    {
        printf("End of file");
        break;
    }
    else{
        c = (c- 65 - key) % 26) + 65;
        fputc(c, fw);
    }

      }
      fclose(fp);
      fclose(fw);
      printf("\n");
      return 0;
}
}
