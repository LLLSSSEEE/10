#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char src[] = "The worst things to eat before you sleep.";
    char dst[100]; //source�� ������ destination�� �����ϴ� �ڵ带 �Ʒ��� ����� �Ѵ�. 
    
    strcpy(dst, src); //dst �ڸ��� �迭�� �̸��� ������ �ȴ�.  
    
    printf("copied string : %s\n", dst); 
   
  system("PAUSE");	
  return 0;
}
