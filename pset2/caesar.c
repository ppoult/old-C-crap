#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
 int main (int argc, string argv[])
   
 {
 
 if (argc != 2)
 {
    printf("Opps,try again!\n");       // validate user input
        return 1;
 }
 
  
 int k = atoi(argv[1]) ;
 string input = GetString();          // getting a string from the user
 
        
 for (int i = 0, n = strlen(input); i < n; i++)   // getting each character from the string
 
 {
    if (k > 26)   //using modulo to rotate the alphabet
    {
        k = k%26;
    }
    
        if  (((input[i] + k) > 122) && (isalpha(input[i])) && (islower(input[i])))    //working with the alphabetical lowercase chars
 {
    char rotation = (input[i] + k)- 26 ;
    printf ("%c", rotation);
 }
 
        else if ((isalpha(input[i])) && (islower(input[i])))                     //printing out the "normal" lowercase chars that exist in the range of the ASCII alphabet
    {
             printf("%c", input[i] + k);
    }
 
    else if (((isalpha(input[i]) && (isupper(input[i])) && ((input[i] + k ) > 90))))  // same thing for the uppercase alphabetical chars
         {
                char caprot = (input[i] + k)- 26 ;
                printf("%c", caprot);   
         }
                   
                    else if ((isalpha(input[i])) && (isupper(input[i])))            //printing the "normal" uppercase chars
                        {
                        printf ("%c", input[i] + k);
                        }
  
  else if (isprint(input[i]))       //leaving all the printed chars intact
    {
        printf("%c", input[i]);
    }
  
 }
 {
   printf ("\n");
 }  
 }
 
