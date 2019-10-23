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
 
  
 string k = argv[1];
 
 for (int j = 0; j < strlen(k); j++)
 {
 if (!isalpha(k[j]))
 {
 printf("the key has to be all letters!\n");
 return 1;
 }
 }
 
 
 string input = GetString();
 
 int j = 0;
 
 
 
 for ( int i = 0 ; i < strlen(input); i++)
 {
 


 if (islower(input[i])&&isalpha(input[i])&&(toupper(k[j])-65+input[i])<=122)
 {
 char result = input[i] + toupper(k[j]) - 65;
 printf ("%c", result);
 j++;
 }
 else if (islower(input[i])&&isalpha(input[i])&&(toupper(k[j]) - 65 + input[i]) > 122)
 {
 char result = (input[i] + toupper(k[j]) - 65)-26;
 printf("%c", result);
 j++;
 }
 
 else if (isupper(input[i])&&isalpha(input[i])&&(toupper(k[j])-65+input[i])<=90)
 {
 char result = input[i] + (toupper(k[j]) - 65);
 printf ("%c", result);
 j++;
 }
 else if (isupper(input[i])&&isalpha(input[i])&&(toupper(k[j])-65+input[i]) > 90)
 {
 char result = ((input[i]) + (toupper(k[j]) - 65))-26;
 printf("%c", result);
 j++;
 }
 else
 {
 printf("%c", input[i]);
 }
 if (j > strlen(k) - 1)
 j = 0;
 
 
 
 
 }
 printf("\n");
 }
 
     
     
 

 
 
