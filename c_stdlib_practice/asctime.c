#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>


int main(void) {
	/*
	 * char *asctime(const struct tm *timeptr)
	 * Struct -> C-string
	 * Return Foramt :
	 * Www Mmm dd hh:mm:ss yyyy.
	 */
	time_t rawtime;
	struct tm* timeinfo;

	/*
	 * time_t time(time_t *timeptr);
	 * Returns the current calendar time
	 */
	time(&rawtime);

	/*
	 * Converts timeval to a structure of type tm.
	 */
	timeinfo = localtime(&rawtime);
	/*
	 * Prints a current time
	 * The string is followed b y a new_line char and
	 * terminated with a null-char.
	 */
	printf("The currnet time is : %s", asctime(timeinfo));
}
