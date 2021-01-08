#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
char str1[26];
char str2[26];

void encryption(){
char str1[20], str2[26];
         int i;
         printf("Enter Plain Text : ");
         scanf("%s", str1);
         for(i=0; str1[i];i++){
            str2[i]=cipher_encrypt(str1[i]);

         printf("Encrypted text: %s", str2);

            }
}

void decryption(){
    char str3[26], str4[26];
    int j;
    printf("Enter Cipher Text: ");
    scanf("%s", str3);
    for(j=0; str3[j];j++){
    str4[j]=cipher_decrypt(str3[j]);

    printf("Decrypted Text: %s", str4);
    }
}
int main(){
int inputofTask; // choice of task to carry out

    printf( "1. Encrypt\n" );
    printf( "2. Decrypt\n" );
    printf( "Select the task" );
    scanf( "%d", &inputofTask );

    switch(inputofTask) {
       case 1:
            void encryption();
            break;
        case 2:
            void decryption();
            break;
        default:
            printf( "No input \n" );
            break;}
 }
}
