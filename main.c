#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
   FILE* fp;
   char c;
   fp = fopen("C:/Users/dltld/Documents/sample.txt", "r");
   if(fp == NULL)
   {
         printf("failed to open\n");
         return 0;
   }
   
   while ( (c=fgetc(fp)) != EOF )
   {
         putchar(c);
   }

  system("PAUSE");	
  return 0;
}
