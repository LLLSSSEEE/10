#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE* fp; //file pointer
    char str[100]; //문자 길이 대충 
    int i; 
    
    //1. open file
    fp = fopen("sample.txt", "W"); //두가지 입력 필요. 이름이랑 mode
    
    //2. write file
    for(i=0; i<3; i++)
    {
        //2-1. print "input a word"
        printf("input a word : ");
        //2-2. scanf a string
        scanf("%s", str);
        //2-3. fprintf()
        fprintf(fp, "%s\n", str);
    }
    
    //3. close file
    fclose(fp);

   //sample.txt가 있는지 확인. 

  system("PAUSE");	
  return 0;
}
