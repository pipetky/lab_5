#include <iostream>
#include <signal.h>

using namespace std;


void fsig(int sig) {
    switch (sig)
    {

        case SIGFPE:
            exit(1);
        case SIGSEGV:
            exit(2);


    }


}


int main(int argc, char * argv[]) {

    switch (*argv[1])
    {
        case '1':
            signal (SIGFPE, fsig);
            raise(SIGFPE);
            break;
        case '2':
            signal (SIGSEGV, fsig);
            raise(SIGSEGV);
            break;
        default:
            return -1;

    }





    return 0;

}