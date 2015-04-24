#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("proceso padre pid:%d\n", getpid());
  
  if (fork()>0) {
    if (fork()>0) {
        sleep(3000);
    }
    else {
      if (fork()>0) {
        if (fork()>0) {
          sleep(3000);
        }
        else {
          sleep(3000);
        }
      }
      else {
        sleep(3000);
      }
    }
  }
  else {
    if (fork()>0) {
      if (fork()>0) {
        sleep(3000);
      }
      else {
        sleep(3000);
      }
    }
    else {
      sleep(3000);
    }
  }
  sleep(3000);
  
  return 0;
}
