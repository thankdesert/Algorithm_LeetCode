#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <signal.h>


void (*sigint_cb)(int);

void sigint_handlr(int signo) {
	printf("alert!");
	signal(SIGINT, old_fun);
}


int main(void) {
  sigint_cb = signal(SIGINT, sigint_handlr);

	while (1) {
		printf("wow\n");
		_sleep(100);
	}
}
