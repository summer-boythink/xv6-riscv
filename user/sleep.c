#include "kernel/types.h"
#include "user/user.h"

int main(int argc,char* argv[]) {
    if(argc < 2){
        fprintf(2,"sleep time:");
        exit(-1);
    }

    int i = atoi(argv[1]);
    sleep(i);
    exit(0);
}