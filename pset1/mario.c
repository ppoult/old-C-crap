#include <cs50.h>
#include <stdio.h>
int GetPositiveInt(void);

int main(void)
{
int height = GetPositiveInt();
int spaces = height -1;
int hashes = 2;
for (int i = 0; i < height; i++,spaces--,hashes++)
{
   for (int j = 0; j < spaces;j++)
   {
   printf(" ");
   }
   for (int s = 0; s < hashes;s++)
   {
   printf("#");
   }
   printf("\n");
}
   
  
}


int GetPositiveInt(void)
{
int height;
 do 
   {
   printf("Give me the height of the pyramid(an int from 0 to 23)\n");
   height = GetInt();
   }
   while (height < 0 || height > 23);
   return height;  
}




