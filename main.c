#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char src[] = "The worst things to eat before you sleep.";
    char dst[100]; //source의 내용을 destination에 복사하는 코드를 아래에 적어야 한다. 
    
    strcpy(dst, src); //dst 자리에 배열의 이름만 넣으면 된다.  
    
    printf("copied string : %s\n", dst); 
   
  system("PAUSE");	
  return 0;
}
