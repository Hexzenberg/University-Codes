#include <stdio.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
int main()
{
	int sockfd = socket(AF_INET, SOCK_DGRAM, 0), n = 0;
	printf(sockfd == -1 ? "Socket Creation Failure\n" : "Socket creation successfull\n");
	struct sockaddr_in my_addr;
	my_addr.sin_family = AF_INET;
	my_addr.sin_port = htons(5760);
	my_addr.sin_addr.s_addr = inet_addr("10.3.14.4");
	struct sockaddr_in serv_addr;
	serv_addr.sin_family = AF_INET;
	serv_addr.sin_port = htons(6760);
	serv_addr.sin_addr.s_addr = inet_addr("10.3.14.4");
	int k = bind(sockfd, (struct sockaddr *)&my_addr, sizeof(my_addr));
	printf(k == -1 ? "Bind Failure\n" : "Bind successfull\n");
	char msg[100], response[100];
	while (1)
	{
		printf("Enter a message to send:\n");
		fgets(msg, 101, stdin);
		int s = sizeof(serv_addr), m = sendto(sockfd, msg, sizeof(msg), 0, (struct sockaddr *)&serv_addr, s);
		printf(m == -1 ? "Not sent\n" : "Message sent\n");
		if ((msg[0] == 'e' || msg[0] == 'E') && (msg[1] == 'x' || msg[1] == 'X') && (msg[2] == 'i' || msg[2] == 'I') && (msg[3] == 't' || msg[3] == 'T'))
		{
			close(sockfd);
			break;
		}
		int f = recvfrom(sockfd, response, sizeof(response), 0, (struct sockaddr *)&serv_addr, &s);
		printf(f == -1 ? "Message not received\n" : "Message received successfully\n");
		printf("Received message is: %s\n", response);
		if ((response[0] == 'e' || response[0] == 'E') && (response[1] == 'x' || response[1] == 'X') && (response[2] == 'i' || response[2] == 'I') && (response[3] == 't' || response[3] == 'T'))
		{
			close(sockfd);
			break;
		}
	}
	return 0;
}
