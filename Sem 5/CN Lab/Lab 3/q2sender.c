#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
int main()
{
	int client_socket = socket(AF_INET, SOCK_STREAM, 0);
	if (client_socket == -1)
	{
		printf("Socket creation failed");
		return 0;
	}
	printf("Socket created\n");
	struct sockaddr_in server_address;
	server_address.sin_family = AF_INET;
	server_address.sin_port = htons(5760);
	if (connect(client_socket, (struct sockaddr *)&server_address, sizeof(server_address)) == -1)
	{
		printf("Connection failed");
		return 0;
	}
	printf("Connection established\n");
	int num1, num2;
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	send(client_socket, &num1, sizeof(num1), 0);
	send(client_socket, &num2, sizeof(num2), 0);
	int sum;
	recv(client_socket, &sum, sizeof(sum), 0);
	printf("Sum received from the server: %d\n", sum);
	close(client_socket);
	return 0;
}