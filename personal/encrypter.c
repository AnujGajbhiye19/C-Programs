#include<stdio.h>
#include<string.h>
#include<signal.h>

#define warning "|||||||||||||||||||||WARRNING|||||||||||||||||||||"
#define messageC "DON'T USE --> 'Ctrl+c', Use mouse to copy the text\nENTER SINGLE CHARACTER TO EXIT\nNOW TRY AGAIN!"
#define messageZ "DON'T USE --> 'Ctrl+z'\n\nENTER SINGLE CHARACTER TO EXIT\nNOW TRY AGAIN!"

void abortTerminate(int signum){
	printf("\n\033[1;31m%s\033[0m\n",warning);
	printf("\n\033[1;31m%s\033[0m\n\n",messageC);
}

void abortStop(int signum){
	printf("\n\033[1;31m%s\033[0m\n",warning);
	printf("\n\033[1;31m%s\033[0m\n\n",messageZ);
}

int main(){
	signal(SIGINT,abortTerminate);
	signal(SIGTSTP,abortStop);
	while(1){
		char message[1024];
		printf("Enter string: ");
		gets(message);
		if(strlen(message)==1){
			printf("Bye Bye !!!\n");
			break;
		}
		for(int i=0;i<strlen(message);){
			char buff[32] = "";
			for(int j=0;j<strlen(message);i++,j++){
				if(message[i]!=' '){
					buff[j] = message[i];
				}
				else{
					i++;
					break;
				}
			}
			for(int j=0;j<(strlen(buff)/2);j++){
				char t = buff[j];
				buff[j] = buff[strlen(buff)-j-1];
				buff[strlen(buff)-j-1] = t;
			}
			printf("%s ",buff);
		}
		printf("\n");
	}
	return 0;
}
