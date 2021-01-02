

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){


   void caesarEncryption() //define function which will carry out the encryption
   {
   char msgText[500], ch[100];
   int key, i;

   printf("Enter a plain text: \n");
   scanf("%s",&msgText); // Allows the input of plain text which can be encrypted

   printf("Enter the key: \n");
   scanf("%d", &key); // Allows the input of the key



    for(i = 0; i < strlen(msgText); i++) //for loop to traverse through each character
    {

        if( msgText[i] >=65 && msgText[i]<= 90)
        {
            ch[i] = ((msgText[i] - 65 + key) % 26) + 65; // Apply the formula for Caesar encryption
            ch[i]= '\0';
            printf("The encrypted text is : %s", ch); //Print the encrypted text
            i++;
        }

        else{
            msgText[i]=ch[i];
        }

    }

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
