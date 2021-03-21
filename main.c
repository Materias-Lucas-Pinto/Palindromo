#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
   char cad[21];

   int i ,j;
    int palindromo=1;
    printf("ingrese una palabra para verificar si esta es palindromo:");
    fflush(stdin);
    gets(cad);
   j=strlen(cad)-1;

   for(i=0;i<strlen(cad)/2;i++, j--)
   {
       printf("\n%c==%c",*(cad+i),*(cad+j));

       if(*(cad+i) != *(cad+j))
       {
        palindromo=0;
       break;
       }
   }

   if(palindromo==1)
    puts("\nes palindromo");
   else
    puts("\nno es palindromo");

       return 0;
}
