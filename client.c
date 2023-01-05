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

  int sock,rat;
  struct sockaddr_in addr;
  socklen_t addr_size;
  char buffer[1024];
  int n;

  sock = socket(AF_INET, SOCK_STREAM, 0);
  if (sock < 0){
    perror("Socket error");
    exit(1);
  }
  printf("TCP server socket created.\n");

  memset(&addr, '\0', sizeof(addr));
  addr.sin_family = AF_INET;
  addr.sin_port = port;
  addr.sin_addr.s_addr = inet_addr(ip);

  rat = connect(sock, (struct sockaddr*)&addr, sizeof(addr));
  if(rat < 0){
		printf("Error in connection.\n");
		exit(1);
	}
  printf("Connected to the server.\n");
	

while(1){
		printf("Client: \t");
		scanf("%s", &buffer[0]);
		send(sock, buffer, strlen(buffer), 0);
		bzero(buffer, sizeof(buffer));

		if(strcmp(buffer, ":exit") == 0){
			
			printf("Disconnected from server.\n");
			close(sock);
			exit(1);
			break;
		}

		else if(recv(sock, buffer, 1024, 0) < 0){
			printf("Error in receiving data.\n");}
		else{
			printf("Server: \t%s\n", buffer);
			bzero(buffer, sizeof(buffer));
			
		}
	}
  return 0;

}
