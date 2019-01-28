#include <windows.h>
#include<stdio.h>
int main()
{
	int dwCode = 1024;
	printf("%d\n",SetErrorMode(1024));
	printf("%d\n",SetErrorMode(10));
	if (SetErrorMode(0) != 1024)
    {
        printf("%d\n",SetErrorMode(20));
        printf("%d\n",SetErrorMode(20));
	    printf("Hi emulator!\n");
    }
	//printf("123");
	return 0;
}
