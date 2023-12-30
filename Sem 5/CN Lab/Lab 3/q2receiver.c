// Write a socket program in C using TCP where the client sends two integer numbers to the server and server calculates their sum
// and sends the result to the client for displaying.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
int main()
{
	int server_socket = socket(AF_INET, SOCK_STREAM, 0);
	if (server_socket == -1)
	{
		printf("Socket creation failed");
		return 0;
	}
	printf("Socket created\n");
	struct sockaddr_in server_address;
	server_address.sin_family = AF_INET;
	server_address.sin_port = htons(5760);
	if (bind(server_socket, (struct sockaddr *)&server_address, sizeof(server_address)) == -1)
	{
		printf("Binding failed");
		return 0;
	}
	printf("Bind successfull\n");
	if (listen(server_socket, 5) == -1)
	{
		printf("Listening failed");
		return 0;
	}
	printf("Server is listening\n");
	int client_socket = accept(server_socket, NULL, NULL);
	if (client_socket == -1)
	{
		printf("Accepting failed");
		return 0;
	}
	printf("Accepting success\n");
	int num1, num2;
	recv(client_socket, &num1, sizeof(num1), 0);
	recv(client_socket, &num2, sizeof(num2), 0);
	int sum = num1 + num2;
	send(client_socket, &sum, sizeof(sum), 0);
	printf("Sum sent to the client: %d\n", sum);
	close(server_socket);
	return 0;
}