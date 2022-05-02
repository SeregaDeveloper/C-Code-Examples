#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <sys/wait.h>
#include <sys/types.h>

using namespace std;

int main(){
  int pid = fork();
  switch(pid){
    case -1:
      perror("fork");
      return -1;
    case 0:
      printf("My pid = %i", pid);
      break;
  }
return 0;
}
