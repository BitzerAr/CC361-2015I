#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("proceso padre pid:%d\n", getpid());
  
  int pid = fork();

  if (pid>0) {
    printf("proceso padre pid:%d\n", getpid());
//    sleep(100);
  }
  else {
//    sleep(5);
    printf("proceso hijo pid:%d\n", getpid());
//    sleep(100);
  }
  
  return 0;
}
