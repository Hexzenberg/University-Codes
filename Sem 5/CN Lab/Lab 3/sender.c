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
		printf("Client Socket creation failed\n");
		return 0;
	}
	printf("Client Socket creation successful\n");
	struct sockaddr_in my_addr, serv_addr;
	my_addr.sin_family = AF_INET;
	my_addr.sin_port = htons(5760);
	serv_addr.sin_family = AF_INET;
	serv_addr.sin_port = htons(7460);
	int k = connect(sockfd, (struct sockaddr *)&serv_addr, sizeof(serv_addr));
	if (k == -1)
	{
		printf("Client connection failed\n");
		return 0;
	}
	printf("Client connection successful\n");
	while (1)
	{
		char msg[100];
		printf("Enter a message to send:\n");
		scanf("%s", msg);
		int s = sizeof(serv_addr);
		int m = send(sockfd, msg, strlen(msg), 0);
		if (m == -1)
		{
			printf("Not sent\n");
			return 0;
		}
		printf("Message sent\n");
		if ((msg[0] == 'e' || msg[0] == 'E') && (msg[1] == 'x' || msg[1] == 'X') && (msg[2] == 'i' || msg[2] == 'I') && (msg[3] == 't' || msg[3] == 'T'))
		{
			close(sockfd);
			break;
		}
		msg[0] = '\0';
		m = recv(sockfd, msg, sizeof(msg), 0);
		printf("Received response: %s\n", msg);
		if ((msg[0] == 'e' || msg[0] == 'E') && (msg[1] == 'x' || msg[1] == 'X') && (msg[2] == 'i' || msg[2] == 'I') && (msg[3] == 't' || msg[3] == 'T'))
		{
			close(sockfd);
			break;
		}
	}
	return 0;
}
