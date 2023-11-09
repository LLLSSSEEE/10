#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char code1 = 'A';
  int code2 = 65;
  
  printf("code1 = %c, (%d)\n", code1, code1); // 하나는 문자형태로, 하나는 값 그대로 출력 
  printf("code2 = %c, (%d)\n", code2, code2);
  
  // 문자로 저장을 하나, 값을 저장을 하나 똑같은 결과를 얻을 수 있다. 
   
  system("PAUSE");	
  return 0;
}
