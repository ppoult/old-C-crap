#include <cs50.h>
#include <stdio.h>
#include <math.h>
float GetPositiveFloat(void);

int main(void)
{
//getting an input from the user,convert to an int
float change = GetPositiveFloat();
int changerounded = round(change * 100);


//vars for coins
int quarter = 25;
int dime = 10;
int nickel = 5;
int penny = 1;
int coincounter = 0;

for (int i = 0; changerounded >= quarter ; i++)
{
changerounded = changerounded - quarter;
coincounter++;
}
for (int i = 0; changerounded >= dime ; i++)
{
changerounded = changerounded - dime;
coincounter++;
}
for (int i = 0; changerounded >= nickel ; i++)
{
changerounded = changerounded - nickel;
coincounter++;
}
for (int i = 0; changerounded >= penny ; i++)
{
changerounded = changerounded - penny;
coincounter++;
}

printf("%i\n",coincounter);

}

float GetPositiveFloat(void)
{
float change;
 do
   {
   printf("How much change is owed bebe?\n");
   change = GetFloat();
   }
   while (change < 0);
   return change;
}
