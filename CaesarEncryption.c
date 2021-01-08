#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(){

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
