#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int cipher;
int message;
int code;
//char* check;

int main(int argc, char **argv)
{
    //check = argv[1];
   
    //printf("%i \n", cipher);
    if (argc == 2)
    {
        //printf("Test");
       
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            if (!isdigit(argv[1][i]))
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
        cipher = atoi(argv[1]);
    
    
        //printf("%i \n", argc);
    
    
     
        //int cipher = argv[1];
    
        char *plaintext = get_string("plaintext: ");
        printf("ciphertext: ");
        for (int c = 0; c < strlen(plaintext); c++)
        {
            if (isalpha(plaintext[c]))
            {
                int modifier = 65;
                if (islower(plaintext[c]))
                {
                    //printf("check");
                    modifier = 97;
                }
                int tempLetter = plaintext[c] + cipher;
                //printf("%c", tempLetter);
                tempLetter -= modifier;
                //printf("%i", tempLetter);
                tempLetter = tempLetter % 26;
                tempLetter += modifier;
                //printf("%i", tempLetter);
                plaintext[c] = (char)tempLetter;
                //printf("check");
                    
            }
            
            printf("%c", plaintext[c]);
            
        }
        printf("\n");
    
        
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    
    
    
    //plaintext[0] = (char)((int)plaintext[0] + 10) 
    //printf("What?");
    //printf("%d %d\n",strlen(plaintext));
    //code = 5;
    //code = atoi(&plaintext[0]);
    //printf("%c \n", plaintext[0]);
    //printf("%c \n", plaintext[1]);
    //printf("%c \n", plaintext[2]);
    //printf("%c \n", plaintext[3]);
    //char* code = plaintext + cipher;
    //printf("%s", message + 1);
    //
    //printf("%s \n", code);
}