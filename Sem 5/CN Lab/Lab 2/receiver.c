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
	my_addr.sin_port = htons(6760);
	my_addr.sin_addr.s_addr = inet_addr("10.3.14.4");
	struct sockaddr_in cl_addr;
	int k = bind(sockfd, (struct sockaddr *)&my_addr, sizeof(my_addr)), s = sizeof(cl_addr);
	printf(k == -1 ? "Bind Failure\n" : "Bind successfull\n");
	char msg[100], response[100];
	while (1)
	{
		int m = recvfrom(sockfd, msg, sizeof(msg), 0, (struct sockaddr *)&cl_addr, &s);
		printf(m == -1 ? "Message not received\n" : "Message received successfully\n");
		printf("Received message is: %s\n", msg);
		if ((msg[0] == 'e' || msg[0] == 'E') && (msg[1] == 'x' || msg[1] == 'X') && (msg[2] == 'i' || msg[2] == 'I') && (msg[3] == 't' || msg[3] == 'T'))
		{
			close(sockfd);
			break;
		}
		s = sizeof(cl_addr);
		printf("Enter a message to send:\n");
		fgets(response, 101, stdin);
		m = sendto(sockfd, response, sizeof(response), 0, (struct sockaddr *)&cl_addr, s);
		printf(m == -1 ? "Not sent\n" : "Message sent\n");
		if ((response[0] == 'e' || response[0] == 'E') && (response[1] == 'x' || response[1] == 'X') && (response[2] == 'i' || response[2] == 'I') && (response[3] == 't' || response[3] == 'T'))
		{
			close(sockfd);
			break;
		}
	}
	return 0;
}
