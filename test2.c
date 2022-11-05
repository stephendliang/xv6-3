#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main() {
  if (fork() > 0) {
    for (int i = 0; i < 3; ++i) {
      fork();
    }
    for (int i = 0; i<30000;++i) {
      printf(1, "\t");
    }

    for (int i = 0; i < 4;++i)
      wait();

    getpinfo(getpid());
  } else {
    for (int i = 0; i<30000;++i) {
      printf(1,"\n");
    }

    getpinfo(getpid());
  }
  
  exit();
}