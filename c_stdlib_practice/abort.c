#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int n = 5000;
    int divider = 10;

    while (n > 0) {
        if (divider == 0) {
            /*
             * It will cause a signal "SIGABRT" with exiting program.
             * And core will be dumped too.
             */
            abort();
        }
        n /= divider--;
    }
    return 0;
}
