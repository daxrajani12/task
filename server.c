#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

int main(){

  char *ip = "127.0.0.1";
  int port;
  printf("Enter port number:\t");
  scanf("%d",&port);

  int server_sock, client_sock;
  struct sockaddr_in server_addr, client_addr;
  socklen_t addr_size;
  char buffer[1024];
  //char bufferreply[1024];
  int n;

  server_sock = socket(AF_INET, SOCK_STREAM, 0);
  if (server_sock < 0){
    perror("[-]Socket error");
    exit(1);
  }
  printf("TCP server socket created.\n");

  memset(&server_addr, '\0', sizeof(server_addr));
  server_addr.sin_family = AF_INET;
  server_addr.sin_port = port;
  server_addr.sin_addr.s_addr = inet_addr(ip);

  n = bind(server_sock, (struct sockaddr*)&server_addr, sizeof(server_addr));
  if (n < 0){
    perror("Bind error");
    exit(1);
  }
  printf("Bind to the port number: %d\n", port);

  listen(server_sock, 5);
  printf("Listening...\n");

 
  while(1){
		client_sock = accept(server_sock, (struct sockaddr*)&client_addr, &addr_size);
		if(client_sock < 0){
			exit(1);
			
		}
		printf("Connection accepted\n");



			/*while(1){
				recv(client_sock, buffer, 1024, 0);
				if(strcmp(buffer, ":exit") == 0){
					printf("Disconnected \n");
					close(client_sock);
					break;
				}else{
				if(strcmp(buffer, "hii") == 0){
					printf("Client: %s\n",buffer);
					strcpy(buffer, "How are you?");
					send(client_sock, buffer, strlen(buffer),0);
					//bzero(buffer, sizeof(buffer));
					memset(buffer,0,strlen(buffer));
					
					}
				if(strcmp(buffer, "hello") == 0){
					printf("Client: %s\n",buffer);
					strcpy(buffer, "Chat bot this side");
					send(client_sock, buffer, strlen(buffer),0);
					//bzero(buffer, sizeof(buffer));
					memset(buffer,0,strlen(buffer));
					
					}
					}
			
			
			}*/
			while(1){
				recv(client_sock, buffer, 1024, 0);
				if(strcmp(buffer, ":exit") == 0){
					send(client_sock,buffer,strlen(buffer),0);
					printf("Disconnected \n");
					close(client_sock);
					break;
				}
				else{
					printf("Client: \t%s\n",buffer);
					bzero(buffer, sizeof(buffer));

					printf("Server: \t");
					scanf("%s", &buffer[0]);
					send(client_sock, buffer, strlen(buffer), 0);
					bzero(buffer, sizeof(buffer));
					
				}
			}
			
			
			
			
		}

	

	close(client_sock);


  return 0;
}
