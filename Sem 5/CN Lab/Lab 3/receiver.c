#include <stdio.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
int main()
{
	int sockfd = socket(AF_INET, SOCK_STREAM, 0);
	if (sockfd == -1)
	{
		printf("Server socket creation failed\n");
		return 0;
	}
	printf("Server socket creation successful\n");
	struct sockaddr_in my_addr, cl_addr;
	my_addr.sin_family = AF_INET;
	my_addr.sin_port = htons(7460);
	int k = bind(sockfd, (struct sockaddr *)&my_addr, sizeof(my_addr));
	if (k == -1)
	{
		printf("Server binding failed\n");
		return 0;
	}
	printf("Server binding successful\n");
	k = listen(sockfd, 1);
	int s = sizeof(cl_addr), cl_socket;
	cl_socket = accept(sockfd, (void *)&cl_addr, &s);
	if (cl_socket == -1)
	{
		printf("Accepting failed");
		return 0;
	}
	printf("Accepting success\n");
	while (1)
	{
		char msg[100];
		msg[0] = '\0';
		int m = recv(cl_socket, msg, sizeof(msg), 0);
		if (m == -1)
		{
			printf("Not received\n");
			return 0;
		}
		printf("Received message is: %s\n", msg);
		if ((msg[0] == 'e' || msg[0] == 'E') && (msg[1] == 'x' || msg[1] == 'X') && (msg[2] == 'i' || msg[2] == 'I') && (msg[3] == 't' || msg[3] == 'T'))
		{
			close(sockfd);
			break;
		}
		msg[0] = '\0';
		printf("Enter a message to send:\n");
		scanf("%s", msg);
		m = send(cl_socket, msg, strlen(msg), 0);
		if (m == -1)
		{
			printf("Response not sent\n");
			return 0;
		}
		printf("Response sent\n");
		if ((msg[0] == 'e' || msg[0] == 'E') && (msg[1] == 'x' || msg[1] == 'X') && (msg[2] == 'i' || msg[2] == 'I') && (msg[3] == 't' || msg[3] == 'T'))
		{
			close(sockfd);
			break;
		}
	}
	return 0;
}
