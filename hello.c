/*
 * Author: Zhuo Cheng
 * Last Changed: 202111211719
 */
#include <unistd.h>
#include <string.h>

int main()
{
	const char * hello_msg = "Hello, World!\n";
	// the file descriptor 1 means the stdout
	write(1, hello_msg, strlen(hello_msg));
	return 0;
}

