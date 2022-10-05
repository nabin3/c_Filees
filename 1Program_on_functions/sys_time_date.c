		// Write a program to print System Date
#include<stdio.h>
#include<time.h>
int main()
{
	time_t tm;
	tm = time(NULL);
	printf(" Time and date is => %s", asctime(localtime(&tm)));
	return 0;
}
