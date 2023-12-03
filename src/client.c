#include <sys/socket.h>
#include <stdio.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define PORT 8000
#define ADDR "192.168.68.6"
#define BUF_SIZE 1024

int main(){

    char buffer[1024];

    // making the socket file descriptor
    int socketFD = socket(AF_INET,SOCK_STREAM,0);

    //constructing the address to server 
    struct sockaddr_in address;
    address.sin_port = htons(PORT);
    address.sin_family = AF_INET;
    inet_pton(AF_INET,ADDR,&address.sin_addr);

    int result = connect(socketFD,(struct sockaddr *)&address,sizeof address);

    if(result == 0){
        printf("Connected");
        buffer="Hello There";
        send(socketFD,buffer,strlen(buffer),0);
    }
    else{
        printf("connectioned failed");
    }
}