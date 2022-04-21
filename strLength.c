#include <stdio.h>

int strLength(char *s){
  int i = 0;
  while(s[i]!='\0'){
    i++;
  }
  return i;
}

int main(int argc, char *argv[]){
    int ret = strLength(argv[2]);
    printf("%d", ret);
    return ret;
}
