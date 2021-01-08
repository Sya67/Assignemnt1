

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



int main(){


void CaesarEncryption(){ //define function which will carry out the encryption
   
   char plainText[500], ch;
   int key, i;

   printf("Enter a plain text: \n");
   scanf("%s",&plainText); // Allows the input of plain text which can be encrypted

   printf("Enter the key: \n");
   scanf("%d", &key); // Allows the input of the key



    for(i = 0; plainText[i] !='\0'; i++) {

        ch = plainText[i];


        if( ch >= 'A' && ch <= 'Z') {
            ch = ch + key;

 
           if(ch > 'Z'){
            ch = ch - 'Z' + 'A' - 1;
        }

        plainText[i] = ch;
    }
}

printf("The encrypted text is : %s", plainText); //Print the encrypted text

return 0;

}



///////////////////////////////////////////////////////////////////////////////


void CaesarDecryption()
{
char ct[500], ch; // Variable to initialise the cipher text
int key, i; // variable to initialise the key

printf("Enter a message to decrypt: ");
scanf("%s",&ct); // Allows to enter message to decrypt

printf("Enter key: ");
scanf("%d", &key); // Allows the input of the key

    for(i = 0; strlen(ct); i++) { //for loop to traverse through each letter

    if (ct[i] >= 65 && ct[i]<=90)// checks if the letters in the message are uppercase
    {
        ch = ((ct[i] - 65 - key) % 26) + 65;
    }

   else if(ct[i]>=97 && ct[i]<=122)// checks if the letter in the message are lowercase
   {
       ch = ((ct[i] - 65 - key) % 26) + 65;
   }

   printf("Decrypted message: %s", ch); //prints the

    }

  return 0;



}

/////////////////////////////////////////////////////

void substitutionEncryptionDecryption()
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


//////////////////////////////////////////////////////////////////////////////////

/* The following C program will take in a file
containg cipher text and decrypt it using SUBSTITION cipher */


void inputFile(int argc, char *argv[]) {
     FILE *inputFile;
     FILE* output;
     FILE* key;
     char fn[255]; //ASCII character
     char subs[26]; // Number of Alphabets

     if(argc < 2) //argc refering to the number of arguments passed
     {
      printf("Input file:  \n"); //Asks user for the input file
     }
       inputFile = fopen(argv[1], "r");
       sprintf("fn, %s", argv[1]);
       output = fopen(fn, "w");
       key = fopen("key", "w");

       //Substitution

       for (int i= 0; i<26; i++) {
           fprintf("key, %c", i+65):
       }
        for(int i = 0; 1<26; i++){
          print(key, %c, subs[i]=65);
        }

       int i ;
       while(feof(inputFile)){
        char c;
        if(( c > 64) && (c < 91)) {
            c = subs[c -65]+65;
        printf("Decrypted text is : \n");
        }
       }
       retuen 0;
     }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* The following C program will take in a file
containg cipher text and decrypt it using CAESER cipher */

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










