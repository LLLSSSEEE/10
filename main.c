#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
    int i=0;
    char str[4];
    
    str[0] = 'a';
    str[1] = 'b';
    str[2] = 'c';
    str[3] = '\0';
    
    printf("%s\n", str); 
    
    while( str[i] != '\0' ) //i는 0부터 증가하는 변수. 반복문이 지나갈 수록 글자 하나하나를 대조한다고 생각.
    // 문자열이 맨 끝(null문자)에 도달하지 않을 때까지 반복을 한다.  
    {
        printf("%c", str[i]);
        i++;
    }
   
  system("PAUSE");	
  return 0;
}
