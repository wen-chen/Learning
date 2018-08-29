/*
fork() is a linux system function
*/

#include <iostream>
#include <sys/types.h>
#include <unistd.h>

int main() {
	std::cout << "the main program process ID is " << (int) getpid() << std::endl;
	pid_t child_pid = fork();
	if (child_pid != 0) {
		std::cout << "this is the parent process, with ID " << (int) getpid() << std::endl;
		std::cout << "the child's process ID is " << (int) child_pid << std::endl;
	} else {
		std::cout << "this is the child process, with ID " << (int) getpid() << std::endl;
	}
	return 0; 
} 
