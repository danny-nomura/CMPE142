//header files
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
//Function declaration


int main(int argc, char **argv){

	char *line = NULL;
	size_t linesize = 0;
	ssize_t linelen;
	
	char myErrorMessage[33] = "There has been an oopsy whoopsy\n";
	
	printf("SJSUsh> ");
	
	while((linelen = getline(&line, &linesize, stdin)) != -1){
		printf("SJSUsh> ");
		
		if(strncmp("exit", line, 4) == 0){// exits shell
			exit(0);
		}
		if(strncmp("cat", line, 3) == 0){// concatenate files and print on the standard output
			
		}
		if(strncmp("sleep", line, 5) == 0){//sleep for specified number of seconds
			
		}
		if(strncmp("echo", line, 4) == 0){// echo the strings to standard output
			
		}
		if(strncmp("fork", line, 4) == 0){// create a child process
			
		}
		if(strncmp("execv", line, 5) == 0){//provide pointers to null terminated strings that represent the argument list available to the new process
			
		}
		if(strncmp("path", line, 4) == 0){
			
		}
		/*if(strncmp("ls", line, 2) == 0){// list files in current dir
			if(access(word2,X_OK) = -1){//checks user permission for file
				if(access(word3,X_OK) = -1){
					write(STDERR_FILENO, myErrorMessage, strlen(myErrorMessage));
				}
				else{
					ls();
				}
			}
			else{
				ls();
			}
		}*/
		if(strncmp("cd", line, 2) == 0){// change dir
			
		}
		if(strncmp("rm", line, 2) == 0){// remove files or directories
			
		}
		else{
			write(STDERR_FILENO, myErrorMessage, strlen(myErrorMessage));
		}
	

	}
}

