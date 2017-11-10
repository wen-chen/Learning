#include <iostream>
#include <sys/types.h>
#include <unistd.h>
using namespace std;

int main() {
	cout << "the main program process ID is " << (int) getpid() << endl;
	pid_t child_pid = fork();
	if (child_pid != 0) {
		cout << "this is the parent process, with ID " << (int) getpid() << endl;
		cout << "the child's process ID is " << (int) child_pid << endl;
	} else {
		cout << "this is the child process, with ID " << (int) getpid() << endl;
	}
	return 0; 
} 
