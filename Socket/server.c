//http://www.cs.rpi.edu/~moorthy/Courses/os98/Pgms/socket.html
//server prog.

#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<stdlib.h>
void error(char * msg)
{
	perror(msg);
	exit(1);
}

int main(int argc, char * argv[])
{
	int socketfd, newsocketfd, portno, clilen;
	char buffer[256];
	struct sockaddr_in serv_addr, cli_addr;
	int n;
	if(argc < 2)
	{
		fprintf(stderr, "ERROR, no port provided\n");
		exit(1);
	}
	printf("before fd");
	
	socketfd = socket(AF_INET, SOCK_STREAM, 0);
	printf("after fd");
	if(socketfd < 0)
	{
		error("ERROR opening socket");
	}

	bzero((char *) &serv_addr, sizeof(serv_addr));

	portno = atoi(argv[1]);
	serv_addr.sin_family = AF_INET;
	serv_addr.sin_addr.s_addr = INADDR_ANY;
	serv_addr.sin_port = htons(portno);

	if (bind(socketfd, (struct sockaddr *)& serv_addr, sizeof(serv_addr))<0)
		error("ERROR on binding");

	listen(socketfd, 5);

	clilen = sizeof(cli_addr);
	newsocketfd	= accept(socketfd, (struct sockaddr*) &cli_addr, &clilen);

	if(newsocketfd < 0)
		error("ERROR on accept");
	bzero(buffer, 256);
	n= read(newsocketfd, buffer, 255);

	if(n <0)
	{
		error("ERROR reading from socket");

	}

	printf("Here is the message : %s \n",buffer);

	n= write(newsocketfd, "I got your message", 18);
	if(n < 0)
	{
		error("ERROR writing to message");
	}

	return 0;
}
